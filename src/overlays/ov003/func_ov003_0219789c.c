#include "ctx.h"
extern s32 func_0200ccd4(u8 *p);
extern u32 func_02027ec8(u8 *p, u32 a);
extern void func_02037fa0(u8 *p, u32 a);
extern void func_0200cde4(u8 *p);
extern s32 func_ov003_02197dd8(u8 *p);
extern s32 func_02028124(u8 *p);
extern u8 *func_020bc3c4(void);
extern void func_0203e908(u8 *p, u32 a);
void func_ov003_0219789c(u8 *param_1)
{
    s32 iVar2;
    s32 iVar3;
    iVar2 = func_0200ccd4(param_1);
    iVar3 = (s32)func_02027ec8(param_1, 4);
    func_02037fa0(param_1, iVar3);
    func_0200cde4(param_1);
    iVar3 = func_ov003_02197dd8(param_1);
    if (iVar3 != 0) {
        return;
    }
    if (((*(u16 *)0x04000304) & 0x8000) >> 15 == 0) {
        iVar3 = func_02028124(param_1);
        if (iVar2 < iVar3 * 16) {
            u8 *q = func_020bc3c4() + 136;
            *(u32 *)(q + 0x6c) = 0;
            func_0203e908(param_1, 0x413);
        }
    }
}
