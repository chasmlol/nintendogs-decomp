#include "ctx.h"

extern u16 data_0215ad24;
extern s32 func_020d68ec(u8 *p);
extern void func_020d5da4(u32 a);
extern u16 func_020d5fa0(u32 a);
extern u8 *func_020d6cc0(void);
extern u32 func_020d5ef8(void);
extern s32 func_020d64d4(u8 *f, s16 *p);
extern void func_020d68c8(u8 *f, u8 *p);
extern void func_020d703c(void);
extern void func_020d7174(void);

void func_020d71a0(u8 *param_1)
{
    s16 sStack_10;
    u8 auStack_e[6];
    u16 uVar1;
    u8 *iVar2;
    u32 uVar3;
    BOOL bVar4;

    if (func_020d68ec(param_1) == 0) {
        return;
    }
    func_020d5da4(data_0215ad24);
    uVar1 = func_020d5fa0(data_0215ad24);
    data_0215ad24 = uVar1;
    iVar2 = func_020d6cc0();
    *(u16 *)(iVar2 + 4) = data_0215ad24;
    iVar2 = func_020d6cc0();
    uVar3 = func_020d5ef8();
    *(s16 *)(iVar2 + 6) = (s16)uVar3;
    bVar4 = (func_020d64d4((u8 *)func_020d703c, &sStack_10) != 0);
    if (!bVar4) {
        func_020d68c8((u8 *)func_020d7174, auStack_e);
    }
}
