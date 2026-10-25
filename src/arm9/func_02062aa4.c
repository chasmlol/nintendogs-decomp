#pragma avoid_byte all
#include "ctx.h"

extern void func_02062bf0(u8 *p);
extern void func_0206387c(u8 *p, s32 n);

void func_02062aa4(u8 *p1, s32 a, s32 b, u8 *p4)
{
    s32 cnt;
    s32 n;
    s32 i;

    cnt = *(s16 *)(p1 + 2);
    func_02062bf0(p4);
    if ((*(u32 *)(p4 + 5) & 0xff) > 9) {
        return;
    }
    if (cnt > 32) {
        cnt = 32;
    }
    func_0206387c(p4, cnt);
    n = p4[4];
    if (n < cnt) {
        u8 *pb = p4 + 4;
        do {
            *pb = (u8)(*pb + 1);
            *(p4 + n + 5) = 0;
            n = p4[4];
        } while (n < cnt);
    }
    i = 0;
    *(s16 *)(p4 + 2) = *(s16 *)(p4 + 2) - (n - 1);
    if ((s32)p4[4] <= 0) {
        return;
    }
    do {
        *(p4 + i + 5) = (u8)(*(p4 + i + 5) + 48);
        i++;
    } while (i < (s32)p4[4]);
}
