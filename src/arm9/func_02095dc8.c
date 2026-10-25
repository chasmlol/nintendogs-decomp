#include "ctx.h"

extern u32 data_02159034;
extern u32 data_02159038;

/* base + c + o, left to right: the target adds the constant to the base first, then the running offset */
static inline void ResetSlotAt(u32 c, u32 o)
{
    u8 *p = (u8 *)data_02159034 + c + o;
    if (*(u32 *)(p + 0xc) != data_02159038) {
        *(u16 *)p = 0xffff;
        *(u16 *)(p + 2) = 0;
        *(u32 *)(p + 4) = 0;
        *(u32 *)(p + 8) = 0;
        *(u32 *)(p + 0xc) = 0;
        {
            s16 k = 0;
            do {
                *(u32 *)(p + 0x10 + k * 4) = 0;
                k = (s16)(k + 1);
            } while (k < 2);
        }
    }
}

void func_02095dc8(void)
{
    struct { u32 off; } ctx;
    s32 i;

    ResetSlotAt(0x140c, 0);
    i = 0;
    ctx.off = 0;
    do {
        ResetSlotAt(0x143c, ctx.off);
        ResetSlotAt(0x1484, ctx.off);
        ctx.off += 24;
        i = (s16)(i + 1);
    } while (i < 3);
    ResetSlotAt(0x14cc, 0);
    i = 0;
    ctx.off = 0;
    do {
        ResetSlotAt(0x14e4, ctx.off);
        ResetSlotAt(0x155c, ctx.off);
        ctx.off += 24;
        i = (s16)(i + 1);
    } while (i < 5);
}
