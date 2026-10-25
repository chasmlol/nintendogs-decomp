#include "ctx.h"

extern u8 *data_0214f464;
extern u8 data_0213c41c[];
extern s16 data_02126868[];
extern u8 *func_0208fb00(s32 *a, s32 b, s32 c);
extern void func_01ff8000(s32 *out, s32 a, s32 b);
extern void func_01ff8020(s32 *out, s32 a, s32 b);
extern void func_01ff803c(s32 *out, s32 a, s32 b);
extern void func_01ff810c(s32 *dst, s32 *a, s32 *b);
extern void func_0208f820(u8 *p, s32 b);
extern void func_0208f80c(u8 *p, s32 b);
extern void func_0208f7f8(u8 *p, s32 b);
extern void func_0208f7e4(u8 *p, s32 b);
extern void func_0208f7d0(u8 *p, s32 b);
extern void func_0208fa4c(u8 *p, s32 *a, s32 b);
extern void func_0208f544(u8 *p, void *b);
extern void func_0203e4f4(void);

#pragma opt_propagation off
u8 *func_02041f1c(s32 *param_1)
{
    s32 iVar8;
    s32 iVar7;
    s32 *puVar6;
    s32 *puVar5;
    s32 iVar1;
    s32 iVar3;
    u8 *puVar4;
    s32 auStack_b8[12];
    s32 aiStack_88[12];
    s32 aiStack_58[13];

    puVar4 = func_0208fb00(param_1, 0x11c, *(s32 *)(data_0214f464 + 0x741c));
    puVar6 = (s32 *)(puVar4 + 0x8c);
    iVar8 = 0;
    *(s16 *)(puVar4 + 0x88) = -1;
    iVar3 = (s32)data_02126868;
    *(u16 *)(puVar4 + 0x8a) = 0;
    puVar5 = puVar6;
    do {
        if (iVar8 < 0 || iVar8 >= 3) {
            iVar7 = 0;
        } else {
            iVar7 = *(s32 *)(data_0214f464 + iVar8 * 4 + 0x54);
        }
        if (iVar7 != 0) {
            iVar1 = (s32)(u32)*(u16 *)(data_0213c41c + (u32)**(u16 **)(iVar7 + 0x9e8) * 100 + 0x28) >> 4;
            func_01ff8000(auStack_b8, data_02126868[iVar1 * 2], data_02126868[iVar1 * 2 + 1]);
            iVar1 = (s32)(u32)*(u16 *)(data_0213c41c + (u32)**(u16 **)(iVar7 + 0x9e8) * 100 + 0x2a) >> 4;
            func_01ff8020(aiStack_88, data_02126868[iVar1 * 2], data_02126868[iVar1 * 2 + 1]);
            iVar7 = (s32)(u32)*(u16 *)(data_0213c41c + (u32)**(u16 **)(iVar7 + 0x9e8) * 100 + 0x2c) >> 4;
            func_01ff803c(aiStack_58, data_02126868[iVar7 * 2], data_02126868[iVar7 * 2 + 1]);
            func_01ff810c(aiStack_88, auStack_b8, puVar6);
            func_01ff810c(aiStack_58, puVar5, puVar6);
        }
        iVar8 = (s32)((s8)(iVar8 + 1));
        puVar6 = puVar6 + 12;
        puVar5 = puVar5 + 12;
    } while (iVar8 < 3);
    func_0208f820(puVar4, 0x5294);
    func_0208f80c(puVar4, 0);
    func_0208f7f8(puVar4, 0);
    func_0208f7e4(puVar4, 0x4210);
    func_0208f7d0(puVar4, 3);
    func_0208fa4c(puVar4, param_1, 1);
    func_0208f544(puVar4, (void *)func_0203e4f4);
    return puVar4;
}
