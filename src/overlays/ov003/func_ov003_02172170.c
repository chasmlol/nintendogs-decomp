#include "ctx.h"

extern int func_ov003_02174844(int p, int a, int b, int c, s16 d, s16 e, int f);
extern int func_02039cc4(int p);
extern int func_020bc3c4(void);
extern void func_020bbe14(int a, s16 b);
extern void func_0203e908(int p, s16 v);
extern int func_02023780(int p);
extern u16 *func_02024114(int p, int q);
extern u8 func_020293d8(int p, s16 a, u8 b);

u32 func_ov003_02172170(int param_1)
{
    int iVar2;
    u16 *psVar3;
    u8 bVar1;
    u8 *q;

    iVar2 = func_ov003_02174844(param_1, 0, 0x1f2, 0x1f3, (s16)0x1fe, (s16)0x1ff, 10);
    if (iVar2 == 0) {
        return (u32)iVar2;
    }
    iVar2 = func_02039cc4(param_1);
    if (iVar2 != 0) {
        iVar2 = (s32)func_020bc3c4() + 136;
        *(u32 *)(iVar2 + 0x6c) = 0;
        func_020bbe14(2, (s16)*(s8 *)(param_1 + 0x88));
    }
    func_0203e908(param_1, 7);
    iVar2 = func_02023780(param_1);
    psVar3 = func_02024114(param_1, iVar2);
    if (psVar3 == (u16 *)0) {
        return (u32)(u32)psVar3;
    }
    bVar1 = func_020293d8(param_1, (s16)(*psVar3 + 12), *(u8 *)(psVar3 + 0x14));
    return (u32)bVar1;
}
