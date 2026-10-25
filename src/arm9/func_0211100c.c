#include "ctx.h"

extern void func_021116e0(void);
extern s32 func_01ffdb08(s32 a);
extern u8 *func_02027708(s32 a);
extern u8 *func_02044ccc(u8 *a);
extern u32 func_02112854(u32 a, u32 b);
extern void func_0210f14c(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h);
extern void func_020fcf48(void);

void func_0211100c(s32 *param_1)
{
    s32 iVar4;
    s32 iVar2;
    u32 uVar1;
    u32 uVar3;

    if (*param_1 == 1) {
        func_021116e0();
    } else if (*param_1 == 2) {
        iVar4 = 0;
        do {
            iVar2 = func_01ffdb08((s16)iVar4);
            if (iVar2 != 0) {
                u8 *p;
                p = func_02027708(iVar2);
                p = func_02044ccc(p);
                uVar1 = (u16)(iVar4 + 3);
                uVar3 = func_02112854(2, uVar1);
                func_0210f14c(2, uVar1, uVar3, *(u32 *)(p + 0x88), *(u32 *)(p + 0x8c), *(u32 *)(p + 0x90), 1, 1);
            }
            iVar4 = iVar4 + 1;
        } while (iVar4 < 3);
    }
    *param_1 = *param_1 + 1;
    if (*param_1 > 20) {
        func_020fcf48();
    }
}
