#include "ctx.h"

extern void *func_020038b8(s32 *p, u32 n);
extern void func_020663d0(u8 *p);

void func_0208f148(s32 *param_1, s32 *param_2)
{
    s32 iVar3;
    s32 iVar2;
    s32 iVar1;
    u32 *puVar4;
    u32 zero;
    s32 cfg;
    s32 p;
    zero = 0;

    iVar1 = 0;
    if (*param_1 != 0) {
        iVar1 = *(s32 *)(*param_1 + 0xc);
    }
    param_1[0x18] = (s32)func_020038b8(param_2, (u32)*(u8 *)(iVar1 + 0x17) * 0x30);
    iVar3 = 0;
    iVar2 = 0;
    goto COND;
BODY:
    puVar4 = (u32 *)(param_1[0x18] + iVar2);
    func_020663d0((u8 *)puVar4);
    puVar4[9] = zero;
    puVar4[10] = zero;
    puVar4[11] = zero;
    iVar2 = iVar2 + 0x30;
    iVar3 = iVar3 + 1;
COND:
    cfg = zero;
    p = *param_1;
    if (p != 0) {
        cfg = *(s32 *)(p + 0xc);
    }
    if (iVar3 < (s32)*(u8 *)(cfg + 0x17)) goto BODY;
}
