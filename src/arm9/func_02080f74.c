#include "ctx.h"

extern u32 data_0212ad10;
extern s32 func_0205ef3c(u8 *a, u32 b, u32 c);
extern void func_0206c924(u8 *p, u32 v, u32 n);
extern void func_0206c9b8(u8 *dst, u8 *src, u32 n);

typedef struct { u32 a; u8 b; u8 pad[7]; u16 c[8]; } Blk;

u32 func_02080f74(u32 param_1, u8 *param_2, u16 *param_3, u32 param_4, u16 *param_5, ...)
{
    Blk blk;
    s32 iVar1;
    s32 iVar2;
    u8 *puVar4 = 0;
    u8 *pbase = 0;

    iVar1 = func_0205ef3c(param_2 + 0x44, (u32)&data_0212ad10, 4);
    if (iVar1 != 0) {
        return 3;
    }
    pbase = param_2 + 0x50;
    puVar4 = pbase;
    func_0206c924((u8 *)&blk, 0, 24);
    blk.a = param_1;
    blk.b = (u8)param_4;
    func_0206c9b8((u8 *)param_5, (u8 *)blk.c, 12);
    func_0206c9b8((u8 *)&blk, (u8 *)param_3, 24);
    if ((param_1 & 0xff000000) == 0) {
        iVar1 = 0;
        do {
            iVar2 = func_0205ef3c((u8 *)&param_1, (u32)puVar4, 3);
            if (iVar2 == 0) {
                return 0;
            }
            iVar1 = iVar1 + 1;
            puVar4 = puVar4 + 3;
        } while (iVar1 < 33);
    } else {
        puVar4 = pbase + 99;
        iVar1 = 0;
        do {
            iVar2 = func_0205ef3c((u8 *)&param_1, (u32)puVar4, 4);
            if (iVar2 == 0) {
                return 0;
            }
            iVar1 = iVar1 + 1;
            puVar4 = puVar4 + 4;
        } while (iVar1 < 2);
    }
    return 2;
}
