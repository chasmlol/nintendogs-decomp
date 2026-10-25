#include "ctx.h"

typedef struct {
    u32 w[3];
} T3;

extern u32 data_02152cd8;
extern u8 *data_0214f464;
extern u32 data_0214f460;
extern u8 *data_02159444;
extern void func_01ff8980(u8 *p);
extern void func_01ff832c(s32 a, u32 *b, u8 *c, u8 *d);
extern void func_02037450(u8 *p, u32 n);

void func_0202f7d8(u8 *param_1)
{
    T3 loc20;
    T3 loc14;
    u8 *P;
    u8 *R;
    u8 *Q;
    u8 *dst;

    loc20.w[0] = *(u32 *)((u8 *)&data_02152cd8 + 0x4c);
    loc20.w[1] = *(u32 *)((u8 *)&data_02152cd8 + 0x58);
    loc20.w[2] = *(u32 *)((u8 *)&data_02152cd8 + 0x64);
    P = *(u8 **)&data_0214f464;
    if (*(u32 *)(P + 0x64) == 0) {
        *(u32 *)(P + 0x64) = data_0214f460;
        R = *(u8 **)(*(u8 **)&data_02159444 + 0x1c);
        Q = *(u8 **)&data_0214f464;
        dst = Q + 0x68;
        *(T3 *)dst = *(T3 *)(R + 0x48);
        func_01ff8980(dst);
    }
    loc14 = *(T3 *)(*(u8 **)&data_0214f464 + 0x68);
    func_01ff832c(-0x5000, loc20.w, param_1 + 0x2a0, param_1 + 0x278);
    func_01ff832c(-0x5000, loc14.w, param_1 + 0x278, param_1 + 0x278);
    *(T3 *)(param_1 + 0x26c) = *(T3 *)(param_1 + 0x2a0);
    func_02037450(param_1, 0x200);
}
