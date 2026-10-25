#include "ctx.h"

extern int func_02003a10(void);

typedef struct {
    u32 w0;
    u16 h4;
    u16 h6;
    u32 w8;
    u32 wc;
    u32 w10;
    u32 w14;
    u32 w18;
    u32 w1c;
    u32 w20;
} S20;

void func_020b9a8c(S20 *p)
{
    switch (p->h4) {
    case 0:
        if (func_02003a10() != 0) {
            p->h4 = 0x1000;
            p->h6 = 0;
        }
        return;
    case 0x1000:
        if (p->w1c != 0) {
            p->h4 = 1;
            p->wc = 1;
            p->w18 = 1;
            return;
        }
        if (p->w20 != 0) {
            p->h4 = 1;
            p->wc = 1;
            p->w18 = 9;
        }
        return;
    }
}
