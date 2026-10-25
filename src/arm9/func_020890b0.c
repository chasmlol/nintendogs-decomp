#include "ctx.h"

extern volatile u32 data_021560cc;
extern s32 func_0206cdb8(int tag, u32 data, BOOL err);
extern void WaitByLoop(s32 count);

static inline BOOL SendNvramRead(u32 address, u32 size, u32 buf)
{
    if (func_0206cdb8(4, 0x02000000 | (0x23 << 8) | ((address >> 16) & 0xff), FALSE) < 0) {
        return FALSE;
    }
    if (func_0206cdb8(4, (1 << 16) | (address & 0xffff), FALSE) < 0) {
        return FALSE;
    }
    if (func_0206cdb8(4, (2 << 16), FALSE) < 0) {
        return FALSE;
    }
    if (func_0206cdb8(4, (3 << 16) | (size & 0xffff), FALSE) < 0) {
        return FALSE;
    }
    if (func_0206cdb8(4, (4 << 16) | (buf >> 16), FALSE) < 0) {
        return FALSE;
    }
    if (func_0206cdb8(4, 0x01000000 | (5 << 16) | (buf & 0xffff), FALSE) < 0) {
        return FALSE;
    }
    return TRUE;
}

void func_020890b0(u32 address, u32 size, void *buf)
{
    data_021560cc = 1;
    while (data_021560cc != 0) {
        if (data_021560cc == 1) {
            if (SendNvramRead(address, size, (u32)buf) == TRUE) {
                data_021560cc = 2;
            } else {
                WaitByLoop(0x1000);
            }
        }
    }
}
