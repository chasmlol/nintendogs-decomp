#include "ctx.h"

extern u8 *data_0215942c;
extern u32 data_021429b8;
extern u8 data_02142a34[];
extern void func_020c2d64(void);
extern void func_020c2cb4(void);
extern void func_020c2c24(void);
extern void func_020c2b4c(void);
extern void func_020c2320(void);
extern void func_020c3344(u8 *p);
extern void func_020c2d74(u8 *p);
extern void func_020c3064(u8 *p);
extern s32 func_020d9024(s32 v);
extern s32 func_01ffdb08(s32 v);
extern s32 func_02034208(s32 v);
extern s32 func_020c8164(u32 a, s32 b);
extern void func_020c6300(u8 *p, s32 a, void *b, void *c, s32 d, void *e, int f, void *g, void *h, void *i);
extern void func_020c607c(u8 *p, s32 a, void *b, void *c, s32 d, void *e, int f, void *g, void *h, void *i);
extern void func_020c8b40(u8 *p, int v);
extern void func_020c240c(u8 *p);
extern void func_020c87ec(u8 *p, void *a, void *b);
extern void func_020c8758(u8 *p, int v);
extern void func_020c866c(u8 *p);

typedef struct { u32 w[6]; } S24;

void func_020c20f4(u8 *param_1)
{
    s16 sVar1;
    s32 iVar2;
    u32 local_28[6];

    switch (*(s16 *)(param_1 + 0x90)) {
    case 1:
        if (*(s32 *)(param_1 + 0xb4) > 0x1000) {
            *(s32 *)(param_1 + 0xb4) = 0x1000;
        }
        sVar1 = *(s16 *)(*(u8 **)(param_1 + 0x214) + 8);
        switch (sVar1) {
        case 0:
            func_020c3344(param_1);
            break;
        case 1:
            func_020c2d74(param_1);
            break;
        case 2:
            func_020c3064(param_1);
            break;
        }
        iVar2 = func_020d9024(-1);
        iVar2 = func_01ffdb08(iVar2);
        if (iVar2 == 0) {
            goto L104;
        }
        if (func_02034208(iVar2) == 0) {
            goto L104;
        }
        iVar2 = func_020c8164(*(u16 *)(param_1 + 0xa0), *(s32 *)(param_1 + 0xf8));
        func_020c607c(param_1, *(s32 *)(param_1 + 0xf8), param_1 + 0xfc, param_1 + 0x108, iVar2, (void *)func_020c2d64, 0, (void *)func_020c2cb4, (void *)func_020c2c24, (void *)func_020c2b4c);
        goto L150;
L104:
        iVar2 = func_020c8164(*(u16 *)(param_1 + 0xa0), *(s32 *)(param_1 + 0xf8));
        func_020c6300(param_1, *(s32 *)(param_1 + 0xf8), param_1 + 0xfc, param_1 + 0x108, iVar2, (void *)func_020c2d64, 0, (void *)func_020c2cb4, (void *)func_020c2c24, (void *)func_020c2b4c);
L150:
        if (*(u16 *)data_0215942c != 1) {
            return;
        }
        *(s32 *)(param_1 + 0xa8) = *(s32 *)(param_1 + 0xa8) + data_021429b8;
        return;
    case 2:
        func_020c8b40(param_1, 0x7000);
        return;
    case 3:
        func_020c240c(param_1);
        return;
    case 4:
        *(S24 *)local_28 = *(S24 *)data_02142a34;
        func_020c87ec(param_1, (void *)func_020c2320, local_28);
        return;
    case 5:
        func_020c8758(param_1, 0x1000);
        return;
    case 8:
        func_020c866c(param_1);
        break;
    default:
        break;
    }
}
