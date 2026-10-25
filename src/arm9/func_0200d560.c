#pragma avoid_byte strb
#include "ctx.h"

extern void func_0203942c(u8 *p);
extern s32 func_02037450(u8 *p, u32 v);
extern s32 func_02028124(u8 *p);
extern void func_0203e8cc(u8 *p, u32 a, u32 b);
extern void func_02026578(u8 *p);
extern u32 func_02035164(u8 *p);
extern void func_02026bac(u8 *p);
extern s32 func_0203567c(u8 *p);
extern void func_0200da60(u8 *p, u32 a, u32 b);

void func_0200d560(u8 *param_1)
{
    s32 iVar1;
    s32 iVar2;
    u32 r;
    func_0203942c(param_1);
    iVar1 = func_02037450(param_1, 0x300);
    iVar2 = func_02028124(param_1);
    if (iVar1 < iVar2 * 9) {
        func_0203e8cc(param_1, 0, 0x90);
        func_02026578(param_1);
        *(u8 *)(param_1 + 0x93) = 2;
    } else {
        func_0203e8cc(param_1, 0, 0x111);
        r = func_02035164(param_1);
        func_0203e8cc(param_1, 3, r);
        func_02026bac(param_1);
        *(u8 *)(param_1 + 0x93) = 0;
        if (func_0203567c(param_1) != 0) {
            *(u32 *)(param_1 + 0x464) = 1;
        }
    }
    func_0200da60(param_1, 0, *(u32 *)(param_1 + 0x464));
}
