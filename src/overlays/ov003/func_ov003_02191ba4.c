#include "ctx.h"

extern u16 data_ov003_0219a790;
extern void func_0200ccd4(u8 *p);
extern s32 func_ov003_02197dd8(u8 *p);
extern s32 func_02027ec8(u8 *p, u32 a);
extern void func_0203e908(u8 *p, u32 a);

void func_ov003_02191ba4(u8 *param_1)
{
    s32 iVar2;
    s32 prod;
    u32 tv;

    func_0200ccd4(param_1);
    iVar2 = func_ov003_02197dd8(param_1);
    if (iVar2 != 0) {
        return;
    }
    if (*(u16 *)(param_1 + 0xfc) < 0x50) {
        if (*(s8 *)(param_1 + 0xa0) != 0) {
            return;
        }
        if (*(s8 *)(param_1 + 0xa1) != 0) {
            return;
        }
    }
    iVar2 = func_02027ec8(param_1, 5);
    tv = ((u16 *)&data_ov003_0219a790)[*(s8 *)(param_1 + 0x8d)];
    prod = (s32)(tv * (3000 - iVar2));
    *(s32 *)(param_1 + 0x48c) = prod / 3000;
    if (*(s32 *)(param_1 + 0x48c) < 14) {
        *(s32 *)(param_1 + 0x48c) = 14;
    }
    func_0203e908(param_1, 0x414);
}
