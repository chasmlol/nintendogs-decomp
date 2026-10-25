#pragma avoid_byte strb
#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

typedef struct {
    u32 w[3];
} T12;

extern u32 data_0215942c;
extern u32 data_0214f464;
extern u32 data_0214f45c;
extern void func_020266f8(u8 *p);
extern void func_02025bb0(u8 *p);
extern u8 *func_0200c498(u32 a, u32 b);

#pragma opt_propagation off
void func_0201e3d4(u8 *param_1)
{
    u32 V1;
    u32 V2;
    u8 *P;
    u8 *r5;
    s32 iVar4;
    s32 iVar5;
    u32 uVar8;
    s32 v;
    *(u16 *)(param_1 + 256 + 82) = 17;
    *(param_1 + 147) = 5;
    *(param_1 + 152) = 9;
    func_020266f8(param_1);
    func_02025bb0(param_1);
    if (*(u16 *)(*(u8 **)&data_0215942c) == 12 || *(u16 *)(*(u8 **)&data_0215942c) == 0x8003) {
        V2 = *(u32 *)&data_0214f45c;
        V1 = *(u32 *)&data_0214f464;
        r5 = *(u8 **)(V2 + 0x20);
        uVar8 = *(s32 *)V1 * 0x10dcd + 1;
        v = (s16)(u16)((((u32)*(u16 *)(r5 + 0x2e)) * (u32)(u16)uVar8) >> 16);
        *(u32 *)V1 = uVar8;
        P = func_0200c498(11, v);
        if (P != 0) {
            *(T12 *)(param_1 + 620) = *(T12 *)(P + 8);
        }
        return;
    }
    V1 = *(u32 *)&data_0214f464;
    iVar5 = *(s32 *)V1 * 0x10dcd + 1;
    *(s32 *)V1 = iVar5;
    *(u32 *)(param_1 + 0x26c) = (u32)(FX_Mul((s16)(u16)(iVar5 & 0xfff), 81920) - 40960);
    V1 = *(u32 *)&data_0214f464;
    iVar4 = *(s32 *)V1 * 0x10dcd + 1;
    *(s32 *)V1 = iVar4;
    *(u32 *)(param_1 + 0x274) = (u32)(FX_Mul((s16)(u16)(iVar4 & 0xfff), 81920) - 40960);
}
