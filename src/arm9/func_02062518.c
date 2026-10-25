#pragma avoid_byte all
#include "ctx.h"

u8 *func_02062518(u8 *dst, u8 *src)
{
    u8 *q;
    s32 n;
    u32 s;
    u32 d;

    s = (u32)src & 3;
    d = (u32)dst & 3;
    q = dst;
    if (d == s) {
        if (s != 0) {
            *dst = *src;
            if (*dst == 0) {
                return dst;
            }
            n = 3 - s;
            if (n != 0) {
                do {
                    src++;
                    q++;
                    *q = *src;
                    if (*q == 0) {
                        return dst;
                    }
                    n--;
                } while (n != 0);
            }
            q++;
            src++;
        }
        s = *(u32 *)src;
        if (((s + 0xfefefeffu) & 0x80808080u) == 0) {
            q = q - 4;
            do {
                q = q + 4;
                *(u32 *)q = s;
                src = src + 4;
                s = *(u32 *)src;
            } while (((s + 0xfefefeffu) & 0x80808080u) == 0);
            q = q + 4;
        }
    }
    *q = *src;
    if (*q == 0) {
        return dst;
    }
    do {
        src++;
        q++;
        *q = *src;
    } while (*q != 0);
    return dst;
}
