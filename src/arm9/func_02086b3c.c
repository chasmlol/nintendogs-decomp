#pragma unsigned_char on
#include "ctx.h"

typedef s32 FSResult;
typedef s32 FSCommandType;

#define FS_RESULT_SUCCESS 0
#define FS_RESULT_FAILURE 1
#define FS_COMMAND_SEEKDIR 2
#define FS_COMMAND_READDIR 3
#define FS_FILE_NAME_MAX 127

typedef struct FSArchive FSArchive;

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
    };
    u32 is_directory;
    u32 name_len;
    char name[FS_FILE_NAME_MAX + 1];
} FSDirEntry;

typedef struct FSFile {
    u8 pad[0x1c];
    union {
        struct {
            FSDirPos pos;   /* 0x1c */
            u32 parent;     /* 0x28 */
        } dir;
    } prop;
    union {
        struct {
            FSDirEntry *p_entry;   /* 0x2c */
            BOOL skip_string;      /* 0x30 */
        } readdir;
        struct {
            FSDirPos pos;          /* 0x2c */
        } seekdir;
        struct {
            FSDirPos pos;          /* 0x2c */
            const char *path;      /* 0x38 */
            BOOL find_directory;   /* 0x3c */
            union {
                FSFileID *file;
                FSDirPos *dir;
            } result;              /* 0x40 */
        } findpath;
    } arg;
} FSFile;

extern FSResult func_020870b8(FSFile *p_file, FSCommandType command);      /* FSi_TranslateCommand */
extern int func_02086f70(const char *str1, const char *str2, u32 len);      /* FSi_StrNICmp */
extern void func_02086fd4(FSFile *p_dir, u32 id);                           /* FSi_SeekDirDirect */

#define BSLASH '\\'
#define NUL '\0'
static inline BOOL FSi_IsNameChar(char c)
{
    BOOL ret = FALSE;
    if (c != NUL && c != '/' && c != BSLASH) {
        ret = TRUE;
    }
    return ret;
}

FSResult func_02086b3c(FSFile *p_dir)
{
    const char *path = p_dir->arg.findpath.path;
    const BOOL is_dir = p_dir->arg.findpath.find_directory;

    (void)func_020870b8(p_dir, FS_COMMAND_SEEKDIR);
    for (; *path; path += *path ? 1 : 0) {
        BOOL is_directory;
        char c;
        int name_len = 0;
        while (c = path[name_len], FSi_IsNameChar(c)) {
            ++name_len;
        }
        is_directory = c; if (c || is_dir) is_directory = TRUE;
        if (name_len == 0) {
            return FS_RESULT_FAILURE;
        } else if (*path == '.') {
            if (name_len == 1) {
                path += 1;
                continue;
            } else if ((name_len == 2) & (path[1] == '.')) {
                if (p_dir->prop.dir.pos.own_id != 0) {
                    func_02086fd4(p_dir, p_dir->prop.dir.parent);
                }
                path += 2;
                continue;
            }
        }
        if (name_len > FS_FILE_NAME_MAX) {
            return FS_RESULT_FAILURE;
        } else {
            FSDirEntry etr;
            p_dir->arg.readdir.p_entry = &etr;
            p_dir->arg.readdir.skip_string = FALSE;
            for (;;) {
                if (func_020870b8(p_dir, FS_COMMAND_READDIR) != FS_RESULT_SUCCESS) {
                    return FS_RESULT_FAILURE;
                }
                if (is_directory != etr.is_directory || name_len != etr.name_len || func_02086f70(path, etr.name, (u32)name_len)) {
                    continue;
                }
                if (is_directory) {
                    path += name_len;
                    p_dir->arg.seekdir.pos = etr.dir_id;
                    (void)func_020870b8(p_dir, FS_COMMAND_SEEKDIR);
                    break;
                } else if (is_dir) {
                    return FS_RESULT_FAILURE;
                } else {
                    *p_dir->arg.findpath.result.file = etr.file_id;
                    return FS_RESULT_SUCCESS;
                }
            }
        }
    }
    if (!is_dir) {
        return FS_RESULT_FAILURE;
    }
    *p_dir->arg.findpath.result.dir = p_dir->prop.dir.pos;
    return FS_RESULT_SUCCESS;
}
