#include "ctx.h"

extern u32 data_02144d4c[];
typedef struct { u32 a[6]; } S6;
extern void func_020eb2f0(u8 *p);
extern void func_020c8bd4(u8 *p);
extern void func_020c8ae8(u8 *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
extern s32 func_020c8164(u32 a, s32 b);
extern void func_020c6300(u8 *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i);
extern void func_020c87ec(u8 *p, s32 a, u32 *b);
extern void func_020c8758(u8 *p, s32 a);
extern void func_020c866c(u8 *p);
extern void func_020eb280(void);
extern void func_020eb4c0(void);
extern void func_020eb45c(void);
extern void func_020eb448(void);
extern void func_020eb43c(void);

void func_020eb130(u8 *param_1)
{
    u32 L6[6];
    s32 iVar1;
    s16 sVar;

    sVar = *(s16 *)(param_1 + 0x90);
    switch (sVar) {
    case 2:
        func_020c8bd4(param_1);
        return;
    case 3:
        func_020c8ae8(param_1, 0x50, 0x50, 0x70, 0x1ec, 0x800, 4);
        iVar1 = func_020c8164(*(u16 *)(param_1 + 0xa0), *(s32 *)(param_1 + 0xf8));
        func_020c6300(param_1, *(s32 *)(param_1 + 0xf8), 0, 0, iVar1, (s32)func_020eb4c0,
                      (s32)func_020eb45c, 0, (s32)func_020eb448, (s32)func_020eb43c);
        return;
    case 1:
        func_020eb2f0(param_1);
        return;
    case 4:
        *(S6 *)L6 = *(S6 *)data_02144d4c;
        func_020c87ec(param_1, (s32)func_020eb280, L6);
        return;
    case 5:
        func_020c8758(param_1, 0x1000);
        return;
    case 8:
        func_020c866c(param_1);
        return;
    case 0:
    case 6:
    case 7:
    default:
        return;
    }
}
