#pragma avoid_byte strb
#include "ctx.h"

extern u32 data_02159428;
extern u32 data_02142404;
extern void func_020a784c(void);
extern u8 *func_0208fb00(s32 a, s32 b, s32 c);
extern void func_02078164(s32 a, s32 b, s32 c);
extern void func_02003918(u32 *a, s32 b, s32 c);
extern u32 func_02077dc4(u32 *a, s32 b);
extern void func_0208fa4c(s32 a, s32 b, s32 c);
extern void func_0208f85c(s32 a, s32 b);
extern void func_0208f9ac(s32 a, s32 b, s32 c);
extern void func_0208e468(u8 *a, s32 b);
extern s32 func_020e9248(void);
extern void func_0208f53c(s32 a, s32 b);
extern void func_0208f588(s32 a, s32 b);
extern u32 func_0208e264(s32 a);
extern void func_0208f834(s32 a, s32 b);

static inline u32 SwapByte(u32 v, u8 *p)
{
    *(u8 *)(p) = (u8)(v);
    return v;
}

static inline u32 SwapRet2(u8 *p, u32 v)
{
    u32 r;
    *(u8 *)(p) = (u8)(v);
    return r;
}

void func_020a7134(s32 *param_1, s32 param_2)
{
    u8 *puVar4;
    u8 *puVar8;
    s32 iVar7;
    u32 uVar5;
    u32 uVar6;
    u8 bVar1;
    u32 auStack_28[5];

    if (*(s32 *)(*(u8 **)&data_02159428 + 0x18) != 0) {
        puVar4 = func_0208fb00((s32)param_1, 0x90, *(s32 *)(*(u8 **)&data_02159428 + 0x18));
        if (*(u16 *)(*(u8 **)&data_02159428 + 6) == 0x1f) {
            func_02078164(*(s32 *)(*(u8 **)(puVar4 + 0x1c) + 8), 1, 0x3f000000);
            func_02078164(*(s32 *)(*(u8 **)(puVar4 + 0x1c) + 8), 1, 0x1f0000);
        }
        func_02003918(auStack_28, (s32)param_1, 4);
        *(u32 *)(puVar4 + 0x88) = 1;
        uVar5 = func_02077dc4(auStack_28, *(s32 *)(*(u8 **)(puVar4 + 0x1c) + 8));
        *(u32 *)(puVar4 + 0x8c) = uVar5;
        *(u32 *)(*(u8 **)(puVar4 + 0x1c) + 0x3c) = *(u32 *)(puVar4 + 0x8c);
        if (*(s32 *)(*(u8 **)&data_02159428 + 0x20) != 0) {
            func_0208fa4c((s32)puVar4, (s32)param_1, 1);
            func_0208f85c((s32)puVar4, *(s32 *)(*(u8 **)&data_02159428 + 0x20));
            iVar7 = *(s32 *)(puVar4 + 0x74);
            if (*(u16 *)(*(u8 **)&data_02159428 + 6) == 0x1b) {
                SwapByte(1, (u8 *)(iVar7 + 0x14));
                *(u32 *)(iVar7 + 0x1c) = 0;
            } else {
                SwapByte(0, (u8 *)(iVar7 + 0x14));
            }
        }
        if (*(s32 *)(*(u8 **)&data_02159428 + 0x24) != 0) {
            func_0208f9ac((s32)puVar4, (s32)param_1, 1);
            puVar8 = *(u8 **)(puVar4 + 0x80);
            func_0208e468(puVar8, *(s32 *)(*(u8 **)&data_02159428 + 0x24));
            SwapByte(1, puVar8);
            iVar7 = func_020e9248();
            if (iVar7 == 3) {
                *(u32 *)(puVar8 + 0xc) = 0x1000;
            }
            *(u32 *)(puVar8 + 8) = 0;
        }
        func_0208f53c((s32)puVar4, (s32)func_020a784c);
        uVar5 = *(u32 *)(*(u8 **)&data_02159428 + 8);
        *(u32 *)(puVar4 + 0x24) = uVar5;
        *(u32 *)(puVar4 + 0x28) = uVar5;
        *(u32 *)(puVar4 + 0x2c) = uVar5;
        *(s32 *)(puVar4 + 0x34) = -(s32)data_02142404;
        iVar7 = *(s32 *)(puVar4 + 0x38) + *(s32 *)(*(u8 **)&data_02159428 + 0x10);
        *(s32 *)(puVar4 + 0x38) = iVar7;
        func_0208f588(param_2, (s32)puVar4);
        uVar6 = func_0208e264(3);
        func_0208f834((s32)puVar4, uVar6);
        *(u32 *)(*(u8 **)&data_02159428) = (u32)puVar4;
    }
    iVar7 = *(s32 *)(*(u8 **)&data_02159428 + 0x1c);
    if (iVar7 != 0) {
        puVar4 = func_0208fb00((s32)param_1, 0x88, iVar7);
        func_0208f588(param_2, (s32)puVar4);
        uVar6 = func_0208e264(3);
        func_0208f834((s32)puVar4, uVar6);
        iVar7 = *(s32 *)(*(u8 **)&data_02159428 + 0x28);
        if (iVar7 == 0) {
            (u32)iVar7; return;
        }
        func_0208fa4c((s32)puVar4, (s32)param_1, 1);
        func_0208f85c((s32)puVar4, *(s32 *)(*(u8 **)&data_02159428 + 0x28));
        SwapRet2(*(u8 **)(puVar4 + 0x74) + 0x14, 0); return;
    }
    return;
}
