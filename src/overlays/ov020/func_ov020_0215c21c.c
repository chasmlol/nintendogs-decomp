#pragma avoid_byte strb
#include "ctx.h"

extern u8 *data_ov020_0215c560;
extern u8 data_ov020_0215c540[];
extern void func_ov020_0215c3c8(void);
extern void func_ov020_0215c3bc(void);

extern void func_0208e398(u8 *p);
extern u8 *func_0208f43c(u8 *p, s32 a);
extern s32 func_0208c230(u8 *p, s32 a);
extern void func_0208ba24(u8 *p);
extern s32 func_0208bd84(u8 *p, s32 a);
extern void func_ov004_0216e9a4(u8 *p);
extern void func_ov004_0216e7bc(u8 *p);
extern void func_0208f380(void);
extern void func_0208e1e8(u16 *a);
extern u8 *func_0208e150(u8 *p, u16 *a);
extern s32 func_0208f668(u8 *p, s32 a);
extern u8 *func_0208fb00(u8 *p, s32 a, s32 b);
extern void func_0208f588(s32 a, s32 b);
extern void func_0208f7e4(u8 *p, s32 a);
extern void func_0208fa4c(u8 *p, u8 *q, s32 a);
extern void func_0208fa04(u8 *p, u8 *q, s32 a);
extern s32 func_0208b9e8(u32 a);
extern void func_0208f84c(u8 *p, s32 a);
extern void func_0208f544(u8 *p, u32 a);
extern void func_ov004_0216e7a0(u8 *p);

static inline u32 SwapByte(u8 *p, u32 v)
{
    u32 r;
    *(u8 *)(p) = (u8)(v);
    return r;
}

u8 *func_ov020_0215c21c(u8 *param_1, s32 param_2, s32 param_3, u32 param_4)
{
    u8 *puVar1;
    s32 iVar2;
    u8 *puVar3;
    u8 *puVar4;
    u8 *puVar5;
    u16 auStack_28[2];
    vu32 local_24[2];

    func_0208e398(param_1);
    puVar1 = func_0208f43c(param_1, 0);
    iVar2 = func_0208c230(param_1, 0);
    puVar3 = func_0208f43c(param_1, iVar2);
    func_0208ba24(param_1);
    *(u32 *)(data_ov020_0215c560 + 8) = func_0208bd84(param_1, 0);
    *(u32 *)(data_ov020_0215c560 + 0xc) = func_0208bd84(param_1, 4);
    *(u32 *)(data_ov020_0215c560 + 0x10) = func_0208bd84(param_1, 0x7b);
    func_ov004_0216e9a4(param_1);
    func_ov004_0216e7bc(param_1);
    func_0208f380();
    func_0208e1e8(auStack_28);
    local_24[0] = (u32)func_ov020_0215c3c8;
    puVar4 = func_0208e150(param_1, auStack_28);
    iVar2 = func_0208f668(puVar4, 0);
    puVar5 = func_0208fb00(param_1, 0x88, (s32)puVar3);
    func_0208f588(iVar2, (s32)puVar5);
    puVar5 = func_0208fb00(param_1, 0x8c, (s32)puVar1);
    *(u32 *)(puVar5 + 0x88) = 0;
    *(u8 **)(data_ov020_0215c560 + 4) = puVar5;
    func_0208f588(iVar2, (s32)puVar5);
    func_0208f7e4(puVar5, 0x2108);
    func_0208fa4c(puVar5, param_1, 1);
    func_0208fa04(puVar5, param_1, 1);
    iVar2 = func_0208b9e8((u32)data_ov020_0215c540);
    func_0208f84c(puVar5, iVar2);
    SwapByte(*(u8 **)(puVar5 + 0x7c), 0);
    func_0208f544(puVar5, (u32)func_ov020_0215c3bc);
    func_ov004_0216e7a0(puVar4);
    return puVar4;
}
