#include "ctx.h"

s32 func_02068824(u32 param_1)
{
    s32 r = 0;
    if (param_1 & 1) {
        r = r + 0x20000;
    }
    if (param_1 & 2) {
        r = r + 0x20000;
    }
    if (param_1 & 4) {
        r = r + 0x20000;
    }
    if (param_1 & 8) {
        r = r + 0x20000;
    }
    if (param_1 & 0x10) {
        r = r + 0x10000;
    }
    if (param_1 & 0x20) {
        r = r + 0x4000;
    }
    if (param_1 & 0x40) {
        r = r + 0x4000;
    }
    if (param_1 & 0x80) {
        r = r + 0x8000;
    }
    if (param_1 & 0x100) {
        r = r + 0x4000;
    }
    return r;
}
