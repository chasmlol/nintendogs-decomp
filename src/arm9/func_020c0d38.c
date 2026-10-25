#include "ctx.h"

typedef struct {
    u32 w[3];
} T12;

extern s32 func_01ffdb08(s32 a);
extern void func_020bd858(u8 *p);
extern void func_020bd868(u8 *p);
extern void func_020be4b4(u8 *p, u32 *a, u32 b);
extern void func_020d3478(u8 *a, u32 *b);
extern void func_02028198(s32 a);

void func_020c0d38(u8 *param_1)
{
    u8 *piVar1;
    u32 aiStack_18[3];
    switch (*(s16 *)(param_1 + 0x90)) {
    case 0:
        func_020bd858(param_1);
        return;
    case 1:
        break;
    case 2:
        piVar1 = *(u8 **)(param_1 + 0x214);
        func_020bd868(param_1);
        *(u16 *)(param_1 + 0x20) = *(u16 *)(param_1 + 0x20) | 0x10;
        func_020be4b4(param_1, aiStack_18, 0x8000);
        func_020d3478(piVar1, aiStack_18);
        *(u32 *)(piVar1 + 0x1c) = 0;
        return;
    case 3:
        *(u32 *)(*(u8 **)(param_1 + 0x214) + 0x1c) = 0;
        *(u32 *)(param_1 + 0xa8) = 0;
        return;
    case 4:
        {
            s32 rv = func_01ffdb08(*(s16 *)(param_1 + 0x98));
            if (*(u32 *)(param_1 + 0x188) == 0) {
                func_02028198(rv);
                *(u32 *)(param_1 + 0x188) = 1;
            }
        }
        *(T12 *)(param_1 + 380) = *(T12 *)(param_1 + 188);
        return;
    case 5:
        func_01ffdb08(*(s16 *)(param_1 + 0x98));
        return;
    case 6:
        func_01ffdb08(*(s16 *)(param_1 + 0x98));
        return;
    case 7:
        func_01ffdb08(*(s16 *)(param_1 + 0x98));
        return;
    case 8:
        func_01ffdb08(*(s16 *)(param_1 + 0x98));
    }
}
