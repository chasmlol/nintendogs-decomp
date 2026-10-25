#include "ctx.h"

typedef struct {
    u32 w[3];
} T12;

extern u32 data_0215be34;
extern u32 data_0215be28;
extern u32 data_0215be24;
extern void func_02081104(u32 a, u32 b);
extern void func_02081198(u32 a, u32 b, u32 c);
extern void func_020e5d5c(void);
extern u8 *func_020bc3c4(void);
extern void func_0208ec84(u8 *a, u8 *b, u32 *c);
extern void func_0209d3f0(u8 *a, u32 b, u32 *c);
extern s32 func_020c601c(u8 *p);

s32 func_020e5c04(u8 *param_1)
{
    u8 *iVar7;
    s32 iVar4;
    u32 auStack_18[3];
    u32 V;
    s32 q12;
    iVar7 = *(u8 **)(param_1 + 0x214);
    V = *(u32 *)&data_0215be34;
    iVar4 = V != 0 ? *(s32 *)V : 0;
    func_02081104(iVar4, *(u32 *)(iVar7 + 0x1c));
    *(u32 *)(iVar7 + 0x1c) = 0;
    *(T12 *)&data_0215be28 = *(T12 *)(param_1 + 188);
    q12 = *(s32 *)(iVar7 + 0xc);
    *(s16 *)&data_0215be24 = (s16)(q12 >> 5);
    V = *(u32 *)&data_0215be34;
    iVar4 = V != 0 ? *(s32 *)V : 0;
    func_02081198(iVar4, 20, (u32)func_020e5d5c);
    *(u32 *)(iVar7 + 4) = 0;
    iVar4 = (s32)func_020bc3c4();
    func_0208ec84((u8 *)iVar4, param_1 + 188, auStack_18);
    func_0209d3f0(param_1 + 400, 7, auStack_18);
    return func_020c601c(param_1);
}
