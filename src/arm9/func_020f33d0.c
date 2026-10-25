#include "ctx.h"

typedef struct { s32 a[6]; } A6;

extern s32 data_02146040[];
extern void func_020f3590(u8 *p);
extern void func_020c8bd4(u8 *p);
extern void func_020c8ae8(u8 *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
extern s32 func_020c8164(s32 a, s32 b);
extern void func_020c6300(u8 *p, s32 a, s32 b, s32 c, s32 d, void *e, void *f, void *g, void *h, void *i);
extern void func_020c87ec(u8 *p, void *a, s32 *b);
extern void func_020c8758(u8 *p, s32 a);
extern void func_020c866c(u8 *p);
extern void func_020f3898(void);
extern void func_020f3700(void);
extern void func_020f36e8(void);
extern void func_020f36dc(void);
extern void func_020f3520(void);

void func_020f33d0(u8 *param_1)
{
    s32 blk[6];
    s32 iVar1;

    switch (*(s16 *)(param_1 + 0x90)) {
    case 0:
        break;
    case 2:
        func_020c8bd4(param_1);
        return;
    case 3:
        func_020c8ae8(param_1, 0x50, 0x50, 0x70, 0x1ec, 0x800, 4);
        iVar1 = func_020c8164(*(u16 *)(param_1 + 0xa0), *(s32 *)(param_1 + 0xf8));
        func_020c6300(param_1, *(s32 *)(param_1 + 0xf8), 0, 0, iVar1, (void *)func_020f3898, (void *)func_020f3700, 0, (void *)func_020f36e8, (void *)func_020f36dc);
        return;
    case 1:
        func_020f3590(param_1);
        return;
    case 4:
        *(A6 *)blk = *(A6 *)data_02146040;
        func_020c87ec(param_1, (void *)func_020f3520, blk);
        return;
    case 5:
        func_020c8758(param_1, 0x1000);
        return;
    case 6:
        break;
    case 7:
        break;
    case 8:
        func_020c866c(param_1);
    }
}
