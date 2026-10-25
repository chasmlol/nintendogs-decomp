#include "ctx.h"

typedef enum {
    FS_RESULT_SUCCESS = 0,
    FS_RESULT_FAILURE
} FSResult;

typedef struct FSArchive {
    union {
        char ptr[4];
        u32 pack;
    } name;
} FSArchive;

typedef struct {
    FSArchive *arc;
    u16 own_id;
    u16 index;
    u32 pos;
} FSDirPos;

typedef struct {
    FSArchive *arc;
    u32 file_id;
} FSFileID;

typedef struct {
    union {
        FSFileID file_id;
        FSDirPos dir_id;
    } u;
    u32 is_directory;
    u32 name_len;
    char name[128];
} FSDirEntry;

typedef struct {
    u8 *buf;
    u32 buf_len;
    u16 total_len;
    u16 dir_id;
} FSGetPathInfo;

typedef struct FSFile {
    struct FSFile *prev;
    struct FSFile *next;
    FSArchive *arc;
    u32 stat;
    u32 command;
    u32 error;
    u32 queue;
    union {
        struct {
            u32 own_id;
            u32 top;
            u32 bottom;
            u32 pos;
        } file;
        struct {
            FSDirPos pos;
            u32 parent;
        } dir;
    } prop;
    union {
        struct {
            FSDirEntry *p_entry;
            BOOL skip_string;
        } readdir;
        FSGetPathInfo getpath;
        u8 pad[0x18];
    } arg;
} FSFile;

#define FS_FILE_STATUS_IS_DIR 0x20
#define FS_COMMAND_READDIR 3

extern void func_02088364(FSFile *p_file);
extern void func_02086fd4(FSFile *p_dir, u32 id);
extern FSResult func_020870b8(FSFile *p_file, u32 command);
extern void func_0206c9b8(const void *src, void *dest, u32 size);
extern char data_0213e854[];

static inline BOOL FS_IsDir(volatile const FSFile *p_file)
{
    return (p_file->stat & FS_FILE_STATUS_IS_DIR) ? TRUE : FALSE;
}

FSResult func_0208677c(FSFile *p_file)
{
    FSArchive *const p_arc = p_file->arc;
    FSGetPathInfo *const gp = &p_file->arg.getpath;
    FSDirEntry entry;
    FSFile tmp;
    u32 dir_id;
    u32 file_id;

    func_02088364(&tmp);
    tmp.arc = p_file->arc;

    if (FS_IsDir(p_file)) {
        dir_id = p_file->prop.dir.pos.own_id;
        file_id = 0x10000;
    } else {
        file_id = p_file->prop.file.own_id;
        if (gp->total_len != 0) {
            dir_id = gp->dir_id;
        } else {
            u32 pos = 0;
            u32 num_dir = 0;
            dir_id = 0x10000;
            do {
                func_02086fd4(&tmp, pos);
                if (!pos) {
                    num_dir = tmp.prop.dir.parent;
                }
                tmp.arg.readdir.p_entry = &entry;
                tmp.arg.readdir.skip_string = TRUE;
                while (func_020870b8(&tmp, FS_COMMAND_READDIR) == FS_RESULT_SUCCESS) {
                    if (!entry.is_directory && (entry.u.file_id.file_id == file_id)) {
                        dir_id = tmp.prop.dir.pos.own_id;
                        break;
                    }
                }
            } while ((dir_id == 0x10000) && (++pos < num_dir));
        }
    }

    if (dir_id == 0x10000) {
        gp->total_len = 0;
        return FS_RESULT_FAILURE;
    }

    if (gp->total_len == 0) {
        u32 id;
        int total = 0;
        if (p_arc->name.pack <= 0xFF) {
            total += 1;
        } else if (p_arc->name.pack <= 0xFF00) {
            total += 2;
        } else {
            total += 3;
        }
        total += 2;
        if (file_id != 0x10000) {
            total += entry.name_len;
        }
        id = dir_id;
        if (id != 0) {
            func_02086fd4(&tmp, id);
            do {
                func_02086fd4(&tmp, tmp.prop.dir.parent);
                tmp.arg.readdir.p_entry = &entry;
                tmp.arg.readdir.skip_string = TRUE;
                while (func_020870b8(&tmp, FS_COMMAND_READDIR) == FS_RESULT_SUCCESS) {
                    if (entry.is_directory && (entry.u.dir_id.own_id == id)) {
                        total += entry.name_len + 1;
                        break;
                    }
                }
                id = tmp.prop.dir.pos.own_id;
            } while (id != 0);
        }
        gp->total_len = (u16)(total + 1);
        gp->dir_id = (u16)dir_id;
    }

    if (!gp->buf) {
        return FS_RESULT_SUCCESS;
    }
    if (gp->buf_len < gp->total_len) {
        return FS_RESULT_FAILURE;
    }
    {
        u8 *dst = gp->buf;
        u32 total = gp->total_len;
        u32 pos = 0;
        u32 len;
        if (p_arc->name.pack <= 0xFF) {
            len = 1;
        } else if (p_arc->name.pack <= 0xFF00) {
            len = 2;
        } else {
            len = 3;
        }
        func_0206c9b8(p_arc->name.ptr, dst + pos, len);
        pos += len;
        func_0206c9b8(data_0213e854, dst + pos, 2);
        func_02086fd4(&tmp, dir_id);
        if (file_id != 0x10000) {
            tmp.arg.readdir.p_entry = &entry;
            tmp.arg.readdir.skip_string = FALSE;
            while (func_020870b8(&tmp, FS_COMMAND_READDIR) == FS_RESULT_SUCCESS) {
                if (!entry.is_directory && (entry.u.file_id.file_id == file_id)) {
                    break;
                }
            }
            {
                u32 n = entry.name_len + 1;
                func_0206c9b8(entry.name, dst + total - n, n);
                total -= n;
            }
        } else {
            *(dst + total - 1) = '\0';
            total -= 1;
        }
        if (dir_id != 0) {
            do {
                func_02086fd4(&tmp, tmp.prop.dir.parent);
                tmp.arg.readdir.p_entry = &entry;
                tmp.arg.readdir.skip_string = FALSE;
                *(dst + total - 1) = '/';
                total -= 1;
                while (func_020870b8(&tmp, FS_COMMAND_READDIR) == FS_RESULT_SUCCESS) {
                    if (entry.is_directory && (entry.u.dir_id.own_id == dir_id)) {
                        u32 n = entry.name_len;
                        func_0206c9b8(entry.name, dst + total - n, n);
                        total -= n;
                        break;
                    }
                }
                dir_id = tmp.prop.dir.pos.own_id;
            } while (dir_id != 0);
        }
    }
    return FS_RESULT_SUCCESS;
}
