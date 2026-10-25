#pragma avoid_byte strb
#include "ctx.h"

extern u32 func_020399ec(u8 *);
extern u32 func_020399ac(u8 *);
extern u32 func_0203996c(u8 *);
extern u32 func_020398e4(u8 *);
extern void func_020398a8(u8 *);
extern u8 func_02035a6c(u8 *);
extern void func_02039920(u8 *);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_0201d1f0(u8 *param_1)
{
    s8 c;
    u8 bVar1;
    u8 bVar2;
    s16 w;
    u32 ret;

    switch (*(s8 *)(param_1 + 0x8b)) {
    case 5:
        func_020398a8(param_1);
        bVar2 = func_02035a6c(param_1);
        if (bVar2 == 0) {
            return;
        }
        SwapByte(6, (vu8 *)(param_1 + 151));
        SwapByte(0, (vu8 *)(param_1 + 148));
        bVar1 = SwapByte(*(s8 *)(param_1 + 148), (vu8 *)(param_1 + 147));
        return;
    case 4:
        { func_020398e4(param_1); return; }
    case 3:
        goto c3;
    case 2:
        goto c2;
    case 1:
        goto c1;
    case 0:
        goto c0;
    default:
        goto fin;
    }
c3:
    func_02039920(param_1);
    c = *(s8 *)(param_1 + 147);
    ret = (u32)(s32)c;
    switch (c) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
        goto fin;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 20:
        goto tail;
    default:
        goto fin;
    }
tail:
    w = *(s16 *)(param_1 + 0x154);
    if (w > 10) goto hi;
    if (w < 7) goto lo;
    if (w == 7) goto sw;
    if (w == 10) goto sw;
    return;
lo:
    if (w == 1) goto sw;
    return;
hi:
    if (w > 50) goto hi2;
    if (w == 50) goto sw;
    return;
hi2:
    if (w != 51) return;
sw:
    SwapByte(0, (vu8 *)(param_1 + 148));
    bVar1 = SwapByte(*(s8 *)(param_1 + 148), (vu8 *)(param_1 + 147));
    return;
c2:
    { func_0203996c(param_1); return; }
c1:
    { func_020399ac(param_1); return; }
c0:
    ret = func_020399ec(param_1);
fin:
    return;
}
