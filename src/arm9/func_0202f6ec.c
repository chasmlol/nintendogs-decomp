#include "ctx.h"

typedef struct {
    u32 w[3];
} T12;

extern u32 data_02152cd8;
extern u32 data_0214f464;
extern u32 data_0214f460;
extern u32 data_02159444;
extern void func_01ff8980(u8 *p);
extern void func_01ff832c(u32 a, u32 *b, u8 *c, u8 *d);
extern void func_02037450(u8 *p, u32 v);

void func_0202f6ec(u8 *param_1)
{
    u32 loc[6];
    u8 *P;
    u8 *dst;
    loc[0] = *(u32 *)((u8 *)&data_02152cd8 + 0x4c);
    loc[1] = *(u32 *)((u8 *)&data_02152cd8 + 0x58);
    loc[2] = *(u32 *)((u8 *)&data_02152cd8 + 0x64);
    P = *(u8 **)&data_0214f464;
    if (*(u32 *)(P + 0x64) == 0) {
        *(u32 *)(P + 0x64) = data_0214f460;
        dst = *(u8 **)&data_0214f464 + 0x68;
        *(T12 *)dst = *(T12 *)(*(u8 **)((u8 *)*(u32 *)&data_02159444 + 0x1c) + 0x48);
        func_01ff8980(dst);
    }
    *(T12 *)(loc + 3) = *(T12 *)(*(u8 **)&data_0214f464 + 0x68);
    func_01ff832c(0x5000, loc, param_1 + 0x2a0, param_1 + 0x278);
    func_01ff832c(-0x3000, loc + 3, param_1 + 0x278, param_1 + 0x278);
    *(T12 *)(param_1 + 0x26c) = *(T12 *)(param_1 + 0x2a0);
    func_02037450(param_1, 0x200);
}
