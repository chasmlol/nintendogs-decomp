#include "ctx.h"

typedef struct {
    u8 pad0[4];
    s32 len;            /* 0x04 */
} Ent;

typedef struct {
    u8 pad0[0x40];
    u8 *names[16];      /* 0x40 */
    Ent *ents[34];      /* 0x80 */
    u8 pad108[2];
    u16 lang;           /* 0x10a */
} Work;

extern Work *data_ov007_02160d9c;
extern char data_ov007_02160b60[];
extern char data_ov007_02160b74[];
extern char data_ov007_02160b84[];
extern char data_ov007_02160b88[];
extern char data_ov007_02160b8c[];
extern char data_ov007_02160b90[];

extern s32 func_0206fbc8(u16 v);
extern BOOL func_0206fb04(s32 id, s32 lang, s32 *a, s32 *b);
extern void func_02005e78(u8 x, u8 y, const char *fmt, ...);

u8 func_ov007_0215e4a4(u8 line)
{
    s32 a;
    s32 b;
    s32 i;
    s32 j;

    if (func_0206fb04(0x438, func_0206fbc8(data_ov007_02160d9c->lang), &a, &b)) {
        func_02005e78(1, line, data_ov007_02160b60, a, b);
        line++;
    }
    func_02005e78(1, line, data_ov007_02160b74);
    line++;
    for (i = 0; i < 16; i++) {
        if (data_ov007_02160d9c->names[i] != NULL) {
            func_02005e78(1, line, data_ov007_02160b84, i);
            for (j = 0; j < 10; j++) {
                func_02005e78(j + 5, line, data_ov007_02160b88, data_ov007_02160d9c->names[i][j]);
            }
            func_02005e78(15, line, data_ov007_02160b8c);
            for (j = 0; j < 10; j++) {
                s32 len = data_ov007_02160d9c->ents[func_0206fbc8(data_ov007_02160d9c->lang)]->len;
                func_02005e78(j + 18, line, data_ov007_02160b90,
                    *(len + (data_ov007_02160d9c->names[i] + j) - 10));
            }
            line++;
        }
    }
    return line;
}
