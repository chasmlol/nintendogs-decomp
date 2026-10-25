#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_strength_reduction off

extern u8 *data_ov022_0215c720;
extern s32 data_ov022_0215c6a0;
extern u8 data_ov022_0215c6a8[];
extern u8 data_ov022_0215c6c0[];
extern u8 data_ov022_0215c6d8[];
extern u8 data_ov022_0215c6f0[];
extern u8 data_ov022_0215c708[];
extern void func_ov022_0215c568(void);
extern void func_ov022_0215c53c(void);
extern void func_ov022_0215c4f8(void);
extern void func_ov022_0215c55c(void);
extern void func_0208e398(int a);
extern u32 *func_0208f43c(int a, int b);
extern s32 func_0208bb30(int a, int b);
extern void func_0208ba24(int a);
extern s32 func_0208bd84(int a, int b);
extern void func_0208f380(void);
extern void func_0208e1e8(void *a);
extern u8 *func_0208e150(int a, void *b);
extern u32 func_0208f668(void *a, int b);
extern u8 *func_0208fb00(int a, int b, int c);
extern void func_0208f588(int a, int b);
extern void func_0208f544(int a, int b);
extern void func_0208f9d8(int a, int b, int c);
extern s32 func_0208ba5c(int a, int b);
extern void func_0208e468(int a, int b);
extern void func_0208f7e4(int a, int b);
extern void func_0208fa4c(int a, int b, int c);
extern void func_0208f85c(int a, int b);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

typedef struct {
    u16 w[2];
    u32 fn;
} Blk;

u8 *func_ov022_0215c1c8(int param_1)
{
    u32 *puVar5;
    s32 t;
    u32 *local_38[2];
    u8 *puVar7;
    u8 *puVar6;
    u8 *puVar10;
    s32 iVar3;
    u32 *puVar4;
    s16 i;
    Blk local_10;
    u32 *puVar2;

    func_0208e398(param_1);
    puVar2 = func_0208f43c(param_1, 0);
    puVar5 = func_0208f43c(param_1, func_0208bb30(param_1, (int)data_ov022_0215c6a8));
    puVar4 = func_0208f43c(param_1, func_0208bb30(param_1, (int)data_ov022_0215c6c0));
    local_38[0] = func_0208f43c(param_1, func_0208bb30(param_1, (int)data_ov022_0215c6d8));
    local_38[1] = func_0208f43c(param_1, func_0208bb30(param_1, (int)data_ov022_0215c6f0));
    func_0208ba24(param_1);
    t = func_0208bd84(param_1, 0);
    *(s32 *)(data_ov022_0215c720 + 8) = t;
    t = func_0208bd84(param_1, 4);
    *(s32 *)(data_ov022_0215c720 + 0xc) = t;
    func_0208f380();
    func_0208e1e8(&local_10);
    local_10.fn = (u32)func_ov022_0215c568;
    puVar6 = func_0208e150(param_1, &local_10);
    iVar3 = func_0208f668(puVar6, 0);
    puVar7 = func_0208fb00(param_1, 0x88, (int)puVar4);
    func_0208f588(iVar3, (int)puVar7);
    puVar7 = func_0208fb00(param_1, 0x88, (int)puVar5);
    func_0208f544((int)puVar7, (int)func_ov022_0215c53c);
    func_0208f9d8((int)puVar7, param_1, 1);
    puVar10 = *(u8 **)(puVar7 + 0x78);
    func_0208e468((int)puVar10, func_0208ba5c(param_1, (int)data_ov022_0215c708));
    *(s32 *)(puVar10 + 8) = data_ov022_0215c6a0;
    SwapByte(0, (vu8 *)puVar10);
    func_0208f588(iVar3, (int)puVar7);
    i = 0;
    do {
        puVar7 = func_0208fb00(param_1, 0x88, (int)local_38[i & 1]);
        *(u32 *)(puVar7 + 0x38) = (u32)(i * 0x64000);
        func_0208f544((int)puVar7, (int)func_ov022_0215c4f8);
        func_0208f588(iVar3, (int)puVar7);
        i++;
    } while (i < 4);
    puVar7 = func_0208fb00(param_1, 0x88, (int)puVar2);
    *(u32 *)(data_ov022_0215c720 + 4) = (u32)puVar7;
    func_0208f588(iVar3, (int)puVar7);
    func_0208f7e4((int)puVar7, 0x2108);
    func_0208fa4c((int)puVar7, param_1, 1);
    func_0208f85c((int)puVar7, *(s32 *)(data_ov022_0215c720 + 0xc));
    func_0208f544((int)puVar7, (int)func_ov022_0215c55c);
    return puVar6;
}
