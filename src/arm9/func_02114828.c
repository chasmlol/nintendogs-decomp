#include "ctx.h"

extern u8 *data_0215be48;
extern void func_020fbf30(u8 *p, u32 v);
extern void func_0210bb08(int a, int b, int c, int d);
extern void func_02113090(int a, int b);
extern void func_021130c4(int a, int b);
extern void func_02112ed0(int a, int b);
extern void func_02112e74(int a, int b);
extern void func_020fc084(u8 *p, int a, int b, int c, int d, u32 e, int f, int g);

void func_02114828(u8 *param_1)
{
    u32 uVar1;
    u8 *r6;

    uVar1 = (((*(u16 *)0x04000304) & 0x8000) >> 15) == 0;
    if (uVar1 != 0) {
        goto skip;
    }
    r6 = data_0215be48 + 0x53f4;
    if (*(s32 *)(r6 + 0x28) != 0) {
        func_020fbf30(param_1 + 8, *(u32 *)(r6 + 4));
        func_020fbf30(param_1 + 0x30, *(u32 *)(r6 + 8));
    }
    func_0210bb08(0, 1, 2, 0xffff);
    if (*(s32 *)(param_1 + 4) == 1) {
        r6 = data_0215be48 + 0x1113c;
        func_02113090(0, 0);
        func_021130c4(0, *(s32 *)(r6 + 4));
        func_02112ed0(0, *(s32 *)(r6 + 8));
        func_02112e74(0, *(s32 *)(r6 + 0xc));
        r6 = data_0215be48 + 0x53f4;
        func_020fc084(param_1 + 8, 0, 4, 15, 2, *(u32 *)(r6 + 4), 0, 12);
        func_020fc084(param_1 + 0x30, 0, 4, 18, 2, *(u32 *)(r6 + 8), 0, 12);
    }
skip:
    *(u32 *)(param_1 + 4) = uVar1;
}
