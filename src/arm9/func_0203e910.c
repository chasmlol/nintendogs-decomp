#pragma avoid_byte strb
#include "ctx.h"

extern u8 *data_0214f464;
extern void func_0208ca50(u32 a, s32 b);
extern s32 func_020ec7b8(void);
extern void func_020ec510(s32 a);
extern void func_020dd534(s32 a, s32 b);
extern void func_0209b934(u8 *p);

void func_0203e910(u8 *p)
{
    s8 i;
    u32 h;
    u8 *e;

    h = *(u32 *)(data_0214f464 + *(s8 *)(p + 0x88) * 4 + 0x48);
    for (i = 0; i < 4; i++) {
        e = p + i;
        if (*(s8 *)(e + 0xba) != 0) {
            func_0208ca50(h, i);
            e[0xba] = 0;
        }
        if (*(s8 *)(e + 0xc2) == 1) {
            data_0214f464[0x11] = *(s8 *)(p + 0x88);
            data_0214f464[0x12] = i;
        }
    }
    if (func_020ec7b8() != 0)
        func_020ec510(*(s8 *)(p + 0x88));
    func_020dd534(*(s8 *)(p + 0x88), 0);
    func_0209b934(p + 0x95c);
}
