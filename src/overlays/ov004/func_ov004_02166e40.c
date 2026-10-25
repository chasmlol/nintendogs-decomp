#include "ctx.h"

extern int func_020f5220(void);
extern void func_020f3bdc(u32 a);
extern int func_02022dd0(int p);
extern s16 func_0203bc40(int p);
extern int func_0202dc50(int p, int a, int b, int c, u8 d, int e);
extern void func_02029504(int p);
extern int func_0203567c(int p);
extern void func_0203e908(int p, s16 v);

void func_ov004_02166e40(int param_1)
{
    int iVar3;
    s16 sVar2;
    s32 sv;

    *(s32 *)(param_1 + 0x484) = 0;
    *(s32 *)(param_1 + 0x2a0) = *(s32 *)(param_1 + 0x2a0) - *(s32 *)(param_1 + 0x484);
    *(s32 *)(param_1 + 0x3f0) = *(s32 *)(param_1 + 0x3f0) - *(s32 *)(param_1 + 0x484);
    *(s32 *)(param_1 + 0x3fc) = *(s32 *)(param_1 + 0x3fc) - *(s32 *)(param_1 + 0x484);
    *(s32 *)(param_1 + 0x488) = *(s32 *)(param_1 + 0x488) + 1;
    if (func_020f5220() != 0) {
        func_020f3bdc(*(u32 *)(param_1 + 0x484));
    }
    iVar3 = *(u16 *)(param_1 + 0x112);
    if (iVar3 != 0) {
        iVar3 = 0;
        goto E;
    }
    sv = *(s16 *)(param_1 + 0xf0);
    if (sv == 0) {
        goto CALL;
    }
    switch (sv) {
    case 0x6f: iVar3 = 0; break;
    default: goto CALL;
    }
    goto E;
CALL:
    if (func_02022dd0(param_1) == 0) {
        goto F;
    }
    sVar2 = func_0203bc40(param_1);
    iVar3 = func_0202dc50(param_1, 0, 0, sVar2, *(u8 *)(param_1 + 0xa5), 1);
    goto E;
F:
    func_02029504(param_1);
    iVar3 = 0;
E:
    if (iVar3 == 0) {
        if (func_0203567c(param_1) != 0) {
            func_0203e908(param_1, 0x4c6);
        }
    }
}
