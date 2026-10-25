#include "ctx.h"

extern u32 *data_0214f464;

s32 func_02020824(u8 *param_1)
{
    s16 v = *(s16 *)(param_1 + 0x164);
    u32 nv;
    u32 *P;
    u32 t;
    switch (v) {
    case 11:
        return 12;
    case 12:
        return 11;
    }
    P = data_0214f464;
    nv = *P * 0x10dcd + 1;
    *P = nv;
    t = (nv << 16) >> 31;
    return (s16)((u16)t + 11);
}
