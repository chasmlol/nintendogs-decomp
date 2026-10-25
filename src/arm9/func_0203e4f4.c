#pragma avoid_byte strb
/* a127: a93 with the second table read as an array of 100-byte records (data_0213c458[idx]) instead of base + idx * 100. */
#include "ctx.h"
#pragma opt_lifetimes off
#pragma opt_propagation off

typedef struct { s32 a; s32 b; s32 c; } V3;
typedef struct { u8 b[100]; } E100;

extern s32 data_0214f464;
extern s32 data_0213c44c;
extern E100 data_0213c458[];
extern u32 data_0213b6cc[];
extern void func_020271e8(s32 a, u8 *b, s32 c);
extern void func_01ff810c(s32 *a, s32 *b, s32 *c);
extern void func_01ff8058(s32 *a, s32 *b, s32 *c);
extern void func_02067e68(s32 *a, s32 *b, s32 *c);
extern u32 func_0208b9e8(u32 a);
extern void func_0208e690(u32 *a, u32 b);
extern void func_01ffe474(u8 *p);

void func_0203e4f4(u8 *param_1)
{
    s32 sVar1;
    s32 nIdxX;
    s32 nIdx;
    s32 iVar6;
    s32 iVar2;
    u32 *puVar3;
    u32 *puVar9;
    s32 *piVar4;
    s32 local_30[3];
    s32 local_24[3];
    s32 nIdxZ;

    iVar6 = *(s16 *)(param_1 + 0x88);
    if (iVar6 < 0 || iVar6 >= 3) {
        iVar6 = 0;
    } else {
        iVar6 = *(s32 *)(*(s32 *)&data_0214f464 + (*(s16 *)(param_1 + 0x88)) * 4 + 0x54);
    }
    if (iVar6 == 0) {
        goto za;
    }
    sVar1 = *(s16 *)(param_1 + 0x8a);
    *(s16 *)(param_1 + 0x8a) = *(s8 *)(iVar6 + 0x9d);
    if (*(s16 *)(param_1 + 0x8a) == 0) {
        goto zb;
    }
    puVar9 = *(u32 **)(param_1 + 0x74);
    *(u16 *)(param_1 + 0x20) = *(u16 *)(param_1 + 0x20) & ~1;
    nIdxX = **(u16 **)(iVar6 + 0x9e8);
    iVar2 = (s32)&data_0213c44c;
    puVar3 = (u32 *)(iVar2 + nIdxX * 100);
    *(V3 *)(param_1 + 0x24) = *(V3 *)puVar3;
    func_020271e8(iVar6, param_1 + 0x3c, 0x11);
    func_01ff810c((s32 *)(param_1 + 0x3c), (s32 *)(iVar6 + 0x1e0), (s32 *)(param_1 + 0x3c));
    {
        u8 *q = param_1 + 0x8c;
        func_01ff810c((s32 *)(q + *(s16 *)(param_1 + 0x88) * 0x30), (s32 *)(param_1 + 0x3c), (s32 *)(param_1 + 0x3c));
    }
    nIdxZ = **(u16 **)(iVar6 + 0x9e8);
    piVar4 = (s32 *)&data_0213c458[nIdxZ];
    *(V3 *)local_24 = *(V3 *)&data_0213c458[nIdxZ];
    func_01ff8058(local_24, (s32 *)(param_1 + 0x3c), (s32 *)(param_1 + 0x30));
    *(s32 *)(param_1 + 0x60) = 0;
    *(s32 *)(param_1 + 0x64) = 0;
    *(s32 *)(param_1 + 0x68) = 0;
    piVar4 = (s32 *)(iVar6 + 0x934);
    *(V3 *)local_30 = *(V3 *)piVar4;
    func_02067e68((s32 *)(param_1 + 0x30), local_30, (s32 *)(param_1 + 0x30));
    nIdx = *(s16 *)(param_1 + 0x8a);
    if (nIdx != sVar1) {
        u32 pcVar5 = func_0208b9e8(data_0213b6cc[nIdx]);
        u16 z;
        func_0208e690(puVar9, pcVar5);
        z = 0;
        puVar9[7] = z;
        *(vu8 *)(puVar9 + 5) = z;
        *(u16 *)(puVar9 + 1) = z;
        *(u16 *)((u8 *)puVar9 + 6) = 5;
    }
    puVar9[8] = (u32)(*(s16 *)(iVar6 + 0x150)) << 12;
    goto end;
zb:
    *(s16 *)(param_1 + 0x88) = -1;
    *(s16 *)(param_1 + 0x8a) = 0;
    *(u16 *)(param_1 + 0x20) = *(u16 *)(param_1 + 0x20) | 1;
    goto end;
za:
    *(s16 *)(param_1 + 0x88) = -1;
    *(s16 *)(param_1 + 0x8a) = 0;
    *(u16 *)(param_1 + 0x20) = *(u16 *)(param_1 + 0x20) | 1;
end:
    func_01ffe474(param_1);
}
