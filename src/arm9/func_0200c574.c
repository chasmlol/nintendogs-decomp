#pragma avoid_byte strb
#include "ctx.h"
extern u8 *data_0214f464;
typedef struct { u32 w[3]; } Tri;
static inline u8 SwapByte(u32 v, u8 *p)
{
    u32 old;
    *(u8 *)(p) = (u8)(v);
    return (u8)old;
}
void func_0200c574(u8 *param_1, u32 *param_2)
{
    u32 s;
    u32 idx;
    s8 i;
    u8 *dst;
    u8 *ptr = data_0214f464;
    s = *(u32 *)ptr * 0x10dcd + 1;
    *(u32 *)ptr = s;
    idx = (((u32)(u16)s) * 100) >> 16;
    idx = (u16)idx;
    switch (idx) {
    case 0:
        if (*(s8 *)(param_1 + 0x91) == 0 && *(s8 *)(param_1 + 0x92) == 0) {
            SwapByte(2, param_1 + 0x91);
        }
        break;
    case 1:
        if (*(s8 *)(param_1 + 0x91) == 0 && *(s8 *)(param_1 + 0x92) == 0) {
            SwapByte(2, param_1 + 0x92);
        }
        break;
    case 2:
    case 3:
        if (*(s8 *)(param_1 + 0x91) != 0) {
            SwapByte(0, param_1 + 0x91);
        }
        break;
    case 4:
    case 5:
        if (*(s8 *)(param_1 + 0x92) != 0) {
            SwapByte(0, param_1 + 0x92);
        }
        break;
    default:
        break;
    }
    dst = param_1;
    i = 0;
    do {
        if (*(s8 *)(param_1 + i + 0x91) == 2) {
            *(Tri *)(dst + 1008) = *(Tri *)param_2;
        }
        i = i + 1;
        dst = dst + 12;
    } while (i < 2);
}
