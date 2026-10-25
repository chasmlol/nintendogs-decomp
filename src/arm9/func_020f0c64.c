#include "ctx.h"

typedef struct {
    u32 w[6];
} T6;

extern u32 data_02144f04[];
extern void func_020f0fb4(u8 *p);
extern void func_020f0f08(u8 *p);
extern void func_020f0dac(u8 *p);
extern void func_020f0d38(void);
extern void func_020c87ec(u8 *p, u32 a, u32 *b);
extern void func_020c8758(u8 *p, u32 a);
extern void func_020c866c(u8 *p);

void func_020f0c64(u8 *param_1)
{
    u32 loc[6];

    switch (*(s16 *)(param_1 + 0x90)) {
    case 0:
        break;
    case 2:
        func_020f0fb4(param_1);
        return;
    case 3:
        func_020f0f08(param_1);
        return;
    case 1:
        func_020f0dac(param_1);
        return;
    case 4:
        *(T6 *)loc = *(T6 *)data_02144f04;
        func_020c87ec(param_1, (u32)func_020f0d38, loc);
        return;
    case 5:
        func_020c8758(param_1, 0x1000);
        return;
    case 6:
        break;
    case 7:
        break;
    case 8:
        func_020c866c(param_1);
        return;
    }
}
