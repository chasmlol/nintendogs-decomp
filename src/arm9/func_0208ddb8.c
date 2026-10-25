#pragma avoid_byte strb
#include "ctx.h"

extern void func_0208de80(u8 *buf);

typedef struct {
    u8 buf[127];
    u8 flag;
} Frame;

void func_0208ddb8(u8 *param_1)
{
    Frame F;
    u8 *s;
    s32 more;
    s32 n;
    u32 c;
    u8 *p;

    s = param_1;
    more = 1;
    do {
        F.flag = 0;
        n = 0;
        p = F.buf;
        for (;;) {
            c = *s;
            if (c != 13) {
                *p = c;
                s = s + 1;
            } else {
                F.buf[n] = 0;
                s = s + 1;
                if (*s == 10) {
                    s = s + 1;
                }
                goto cls;
            }
            n = n + 1;
            p = p + 1;
            if (n >= 127) {
                break;
            }
        }
cls:
        c = F.buf[0];
        if ((s32)c > 35) {
            goto big;
        }
        if ((s32)c >= 35) {
            goto after;
        }
        if (c != 0) {
            goto call;
        }
        goto after;
big:
        if ((s32)c > 125 || (s32)c < 123) {
            goto call;
        }
        if (c == 123) {
            goto after;
        }
        switch (c) {
        case 125:
            more = 0;
            break;
        default:
            goto call;
        }
        goto after;
call:
        func_0208de80(F.buf);
after:
        ;
    } while (more != 0);
}
