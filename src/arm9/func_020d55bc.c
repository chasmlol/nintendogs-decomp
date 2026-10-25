#include "ctx.h"

typedef struct {
    u8 pad0[0x20];
    u32 f20;
    u8 pad1[4];
    u16 f28;
    u16 f2a;
    u32 f2c;
    u8 pad2[0x20];
    u16 f50;
} Obj;

extern Obj *data_021594d0;
extern void func_020d50c4(void);
extern s32 func_020d6bb8(s32 a, u16 *buf);
extern u32 func_020d6a3c(void *fn, u16 *buf);

u32 func_020d55bc(void)
{
    u16 buf[2];

    if (data_021594d0->f20 != 0) {
        goto ret0;
    }
    data_021594d0->f2c = 0;
    data_021594d0->f28 = 0;
    data_021594d0->f2a = 0;
    data_021594d0->f50 = 180;
    if (func_020d6bb8(2, buf) == 0) {
        return 0;
    }
    return func_020d6a3c((void *)func_020d50c4, buf);
ret0:
    return 0;
}
