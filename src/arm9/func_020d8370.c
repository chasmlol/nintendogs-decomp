#include "ctx.h"
extern void func_020be1d8(u32 a);
extern u32 func_02062164(void);
extern s16 func_020be190(void);
extern void func_020be1a4(u32 a);
extern u32 func_020be1ec(void);
extern u32 func_020be1fc(void);
extern void func_020be17c(u32 a);
extern void func_020cf9c8(u8 *p, u32 a, u32 b, u32 c);
extern void func_020cf9bc(u8 *p);
void func_020d8370(u8 *param_1)
{
    s16 sVar1;
    u32 uVar2;
    u32 uVar3;
    u32 iVar4;
    u32 iVar5;
    u8 *r4;
    r4 = param_1 + 96;
    func_020be1d8(2);
    *(s16 *)(r4 + 4) = *(s16 *)(r4 + 4) - 1;
    if (*(s16 *)(r4 + 4) <= 0) {
        uVar2 = func_02062164();
        sVar1 = func_020be190();
        func_020be1a4((u32)(u16)(sVar1 + 0x8000));
        if ((s32)uVar2 < 0x2aaa) {
            uVar3 = func_020be1ec();
            func_020be17c(uVar3);
        } else if ((s32)uVar2 < 0x3fff) {
            iVar4 = func_020be1ec();
            iVar5 = func_020be1fc();
            func_020be17c((u32)((s32)(iVar4 + iVar5) / 2));
        } else {
            uVar3 = func_020be1fc();
            func_020be17c(uVar3);
        }
        func_020cf9c8(param_1, 2, (u32)-1, 0);
        func_020cf9bc(param_1);
        *(s16 *)(r4 + 4) = 0x4b0;
    }
}
