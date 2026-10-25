#pragma avoid_byte strb
#include "ctx.h"

extern s32 func_ov003_0218bd70(u8 *p, s32 a, s32 b, s32 c, s32 d);
extern s32 func_020398a8(u8 *p);
extern s32 func_020398e4(u8 *p);
extern s32 func_02039920(u8 *p);
extern void func_0203e8cc(u8 *p, s32 a, s32 b);
extern s32 func_020399ac(u8 *p);
extern s32 func_020399ec(u8 *p);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_ov003_0218bc08(u8 *param_1, s32 param_2)
{
    s32 uVar2;

    switch (*(s8 *)(param_1 + 0x8b)) {
    case 5:
        uVar2 = func_ov003_0218bd70(param_1, param_2, 60, 200, 2);
        if (uVar2 != 0) {
            (u32)uVar2; return;
        }
        (u32)func_020398a8(param_1); return;
    case 4:
        uVar2 = func_ov003_0218bd70(param_1, param_2, 60, 50, 1);
        if (uVar2 != 0) {
            (u32)uVar2; return;
        }
        (u32)func_020398e4(param_1); return;
    case 3:
        (u32)func_02039920(param_1); return;
    case 2:
        if (*(u16 *)(param_1 + 0x11e) > 20) {
            func_0203e8cc(param_1, 2, 16);
        } else {
            func_0203e8cc(param_1, 2, 3);
        }
        (u32)SwapByte(1, (vu8 *)(param_1 + 0x97)); return;
    case 1:
        uVar2 = func_ov003_0218bd70(param_1, param_2, 30, 6, 0);
        if (uVar2 != 0) {
            (u32)uVar2; return;
        }
        (u32)func_020399ac(param_1); return;
    case 0:
        uVar2 = func_ov003_0218bd70(param_1, param_2, 60, 12, 0);
        if (uVar2 != 0) {
            (u32)uVar2; return;
        }
        (u32)func_020399ec(param_1); return;
    default:
        break;
    }
}
