#pragma avoid_byte all
#include "ctx.h"

typedef struct {
    unsigned int open_mode : 2;
    unsigned int io_mode : 3;
    unsigned int buffer_mode : 2;
    unsigned int file_kind : 3;
    unsigned int file_orientation : 2;
    unsigned int binary_io : 1;
} __file_modes;

typedef struct {
    unsigned int io_state : 3;
    unsigned int free_buffer : 1;
    unsigned char eof;
    unsigned char error;
} __file_state;

typedef struct _FILE {
    unsigned long handle;
    __file_modes mode;
    __file_state state;
    unsigned char is_dynamically_allocated;
    unsigned char char_buffer;
    unsigned char char_buffer_overflow;
    unsigned char ungetc_buffer[2];
    unsigned long position;
    unsigned char *buffer;
    unsigned long buffer_size;
    unsigned char *buffer_ptr;
    unsigned long buffer_len;
} FILE;

extern int func_0205eb70(void);
extern int func_0205ebec(FILE *file, unsigned long *length);

int func_0205ecc0(FILE *file)
{
    if (!file)
        return func_0205eb70();
    if (file->state.error || file->mode.file_kind == 0)
        return -1;
    if (file->mode.io_mode == 1)
        return 0;
    if (file->state.io_state >= 3)
        file->state.io_state = 2;
    if (file->state.io_state == 2)
        file->buffer_len = 0;
    if (file->state.io_state != 1) {
        file->state.io_state = 0;
        return 0;
    }
    if (func_0205ebec(file, 0)) {
        file->state.error = 1;
        file->buffer_len = 0;
        return -1;
    }
    file->state.io_state = 0;
    file->position = 0;
    file->buffer_len = 0;
    return 0;
}
