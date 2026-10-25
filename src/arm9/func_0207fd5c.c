#include "ctx.h"

extern u32 func_02080b08(void);
extern void func_02080b1c(u32 a);
extern void func_0207f554(u16 *p);
extern u64 func_0205e270(s32 a, u32 b);
extern void func_0207f4e0(u16 *p);

u32 func_0207fd5c(u16 *param_1, u32 param_2, u32 param_3, s32 param_4)
{
    u32 uVar1;
    s32 iVar2;
    u64 uVar3;
    u32 uVar4;

    uVar4 = func_02080b08();
    iVar2 = *(s32 *)(param_1 + 8);
    uVar1 = *(u32 *)(param_1 + 4);
    if ((s32)uVar1 <= iVar2) {
        do {
            if ((param_3 & 1) == 0) {
                func_02080b1c(uVar4);
                return 0;
            }
            func_0207f554(param_1);
            iVar2 = *(s32 *)(param_1 + 8);
            uVar1 = *(u32 *)(param_1 + 4);
        } while ((s32)uVar1 <= iVar2);
    }
    uVar3 = func_0205e270(*(s32 *)(param_1 + 6) + iVar2, uVar1);
    *(u32 *)(*(u32 *)(param_1 + 2) + (u32)(uVar3 >> 32) * 4) = param_2;
    *(s32 *)(param_1 + 8) = *(s32 *)(param_1 + 8) + 1;
    func_0207f4e0(param_1 + 1);
    func_02080b1c(uVar4);
    return 1;
}
