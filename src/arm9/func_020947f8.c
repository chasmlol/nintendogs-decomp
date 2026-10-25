#include "ctx.h"

extern u8 *data_02159034;
extern u8 *func_0210f100(s32 a, s32 b);

u32 func_020947f8(void)
{
    u32 found;
    s32 i;
    s32 off;
    u8 *ent;
    u8 *e;
    found = 0;
    i = 0;
    off = 0;
    do {
        ent = *(u8 **)(data_02159034 + 0x141c) + 0x248 + off;
        if ((s8)ent[3] > 0) {
            e = func_0210f100((s8)ent[2], *(s16 *)ent);
            if (*(s16 *)(e + 4) != 7) {
                if (*(u16 *)(e + 20) != 128) {
                    found = 1;
                    break;
                }
            }
        }
        i = (s16)(i + 1);
        off += 4;
    } while (i < 200);
    return found;
}
