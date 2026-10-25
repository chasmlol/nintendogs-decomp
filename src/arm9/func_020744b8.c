#include "ctx.h"
#pragma opt_strength_reduction off

typedef struct {
    u8 a;
    u8 pad1;
    u16 h;
    u32 pad2;
} Ent8;

extern u32 data_0213e4f4;
extern Ent8 data_0213e518[];
extern u8 data_0213e51c[];

void func_020744b8(u32 *param_1, u8 *param_2, u32 param_3, u32 param_4)
{
    u32 i;
    u8 c0;
    u8 ta;
    u32 count;
    u32 off;

    i = 0;
    param_1[0] = 0;
    param_1[2] = (u32)param_2;
    param_1[4] = 0;
    ((u8 *)param_1)[0x18] = 127;
    param_1[1] = 4096;
    param_1[5] = param_4;
    count = data_0213e4f4;
    if (i < count) {
        c0 = param_2[0];

        do {
            ta = data_0213e518[i].a;
            off = (u32)i * 8;
            if (c0 == ta && *(u16 *)(param_2 + 2) == *(u16 *)((u8 *)data_0213e518 + off + 2)) {
                ((void (*)(u32 *, u8 *, u32))*(u32 *)(data_0213e51c + off))(param_1, param_2, param_3);
                return;
            }
            i = i + 1;
        } while (i < count);
    }
}
