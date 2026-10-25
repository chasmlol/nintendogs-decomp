#pragma avoid_byte strb
#include "ctx.h"

extern s32 func_ov003_02174904(u8 *p, s32 a, s32 b, u32 c);
extern BOOL func_02039cc4(u8 *p);
extern u8 *func_020bc3c4(void);
extern void func_020bbe14(s32 a, s32 b);
extern void func_0203e908(u8 *p, s32 v);

void func_ov003_02173788(u8 *param_1)
{
    s32 iVar1;
    s16 st;

    iVar1 = func_ov003_02174904(param_1, 23, 104, 0xe000);
    st = *(s16 *)(param_1 + 234);
    if (st >= 16 && st <= 30) {
        return;
    }
    if (iVar1 == 0) {
        return;
    }
    iVar1 = func_02039cc4(param_1);
    if (iVar1 != 0) {
        u32 q = (u32)func_020bc3c4() + 136;
        *(u32 *)(q + 0x6c) = 0;
        func_020bbe14(2, (s16)*(s8 *)(param_1 + 0x88));
    }
    if (*(u16 *)(param_1 + 244) >= 79 && *(u16 *)(param_1 + 244) < 99) {
        func_0203e908(param_1, 0x438);
        return;
    }
    func_0203e908(param_1, 7);
    return;
}
