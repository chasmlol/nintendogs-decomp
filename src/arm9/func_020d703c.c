#include "ctx.h"

extern s32 data_0215ad34;
extern u16 data_0215ad20;
extern u16 data_0215ad24;
extern s32 func_020d6484(s32 a);
extern void func_020d6460(void *a, u8 *b);
extern u8 *func_020d6cb4(void);
extern s32 func_02080e64(s32 a);
extern void func_020800d4(u32 a, u32 b);
extern u16 func_020d5fa0(u32 a);
extern u8 *func_020d6cc0(void);
extern u32 func_020d5ef8(void);
extern s32 func_020d64d4(void *a, u8 *b);
extern void func_020d7004(void);
extern void func_020d703c(s32 a);

void func_020d703c(s32 param_1)
{
    s32 iVar2;
    u32 uVar3;
    u8 *q;
    u8 st[8];

    iVar2 = func_020d6484(param_1);
    if (iVar2 == 0) {
        return;
    }
    if (data_0215ad34 != 0) {
        func_020d6460((void *)func_020d7004, st);
        return;
    }
    if (*(u16 *)(param_1 + 8) == 4) {
        goto case4;
    }
    if (*(u16 *)(param_1 + 8) != 5) {
        return;
    }
    iVar2 = (s32)func_020d6cb4();
    iVar2 = func_02080e64(iVar2);
    if (iVar2 != 0) {
        data_0215ad20 = 2;
    }
    uVar3 = (u32)func_020d6cb4();
    func_020800d4(uVar3, 0xc0);
    data_0215ad24 = func_020d5fa0(data_0215ad24);
    q = func_020d6cc0();
    *(u16 *)(q + 4) = data_0215ad24;
    q = func_020d6cc0();
    uVar3 = func_020d5ef8();
    *(u16 *)(q + 6) = (u16)uVar3;
    iVar2 = func_020d64d4((void *)func_020d703c, st + 2);
    if (iVar2 == 0) {
        return;
    }
    return;
case4:
    data_0215ad24 = func_020d5fa0(data_0215ad24);
    q = func_020d6cc0();
    *(u16 *)(q + 4) = data_0215ad24;
    q = func_020d6cc0();
    uVar3 = func_020d5ef8();
    *(u16 *)(q + 6) = (u16)uVar3;
    func_020d64d4((void *)func_020d703c, st + 4);
    return;
}
