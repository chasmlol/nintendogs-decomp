#include "ctx.h"

extern s32 func_0200ccd4(u8 *p);
extern s32 func_02027ec8(u8 *p, s32 a);
extern void func_02037fa0(u8 *p, s32 v);
extern void func_0200cde4(u8 *p);
extern s32 func_ov003_02197dd8(u8 *p);
extern s32 func_02028124(u8 *p);
extern u8 *func_020bc3c4(void);
extern void func_0203e908(u8 *p, s32 v);

void func_ov003_021977ec(u8 *param_1)
{
    u8 *p;
    s32 iVar2;
    s32 iVar3;
    s32 iVar4;

    p = param_1;
    iVar2 = func_0200ccd4(p);
    iVar3 = func_02027ec8(p, 4);
    func_02037fa0(p, iVar3);
    func_0200cde4(p);
    iVar3 = func_ov003_02197dd8(p);
    if (iVar3 != 0) {
        return;
    }
    if ((s32)(*(vu16 *)0x04000304 & 0x8000) >> 15 != 0) {
        return;
    }
    iVar3 = func_02028124(p);
    if (iVar2 < iVar3 * 0x10) {
        iVar4 = (s32)func_020bc3c4() + 136;
        *(u32 *)(iVar4 + 0x6c) = 0;
        func_0203e908(p, 0x413);
    }
}
