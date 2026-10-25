#include "ctx.h"

extern u32 data_0214f464;
extern s32 func_02036578(u8 *p);
extern void func_02039448(u8 *p);
extern void func_02027654(s32 a, u8 *b);
extern void func_02037450(u8 *p, u32 a);
extern u32 func_020449bc(void);
extern void func_0202fd7c(u8 *p);
extern void func_0203e908(u8 *p, u32 a);

void func_02046b1c(u8 *param_1)
{
    s32 iVar1;
    u32 uVar2;
    s32 iVar3;
    u32 *g;
    s32 v;

    iVar1 = func_02036578(param_1);
    if (iVar1 != 0) {
        func_02039448(param_1);
        func_02027654(iVar1, param_1 + 0x278);
        func_02037450(param_1, 0x300);
    }
    if (*(u16 *)(param_1 + 0xfc) <= 40) {
        return;
    }
    iVar1 = func_02036578(param_1);
    uVar2 = func_020449bc();
    if ((uVar2 & 0x20) == 0) {
        func_0202fd7c(param_1);
        return;
    }
    if (iVar1 == 0) {
        return;
    }
    g = *(u32 **)&data_0214f464;
    iVar3 = *(s32 *)g * 0x10dcd + 1;
    *g = iVar3;
    v = (u16)(((u32)iVar3 << 16) >> 31);
    switch (v) {
    case 0:
        func_0203e908(param_1, 0x2cd);
        return;
    case 1:
        func_0203e908(param_1, 0x2ce);
        return;
    }
}
