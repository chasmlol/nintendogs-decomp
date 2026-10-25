#pragma avoid_byte strb
#include "ctx.h"

extern u32 *data_0215be34;
extern u8 *data_0214f464;
extern void func_02022a90(void);
extern void func_02022820(s32 *p);
extern u32 *func_0208122c(s32 a, s32 b, s32 *c);
extern u8 *func_020bc3c4(void);
extern s32 func_02067898(s32 a, s32 b);

void func_02022030(u8 param_1, u16 param_2)
{
    u8 *obj;
    u8 *p1;
    u8 *p2;
    s32 aiStack_20[4];
    u32 *piVar1;
    u32 *piVar3;
    s32 iVar2;
    s32 iVar4;

    func_02022a90();
    func_02022820(aiStack_20);
    obj = data_0214f464;
    piVar1 = data_0215be34;
    iVar2 = (piVar1 != 0) ? *piVar1 : 0;
    piVar3 = func_0208122c(iVar2, 120, aiStack_20);
    *(u32 **)(obj + 0x73e0) = piVar3;
    if (*(u32 *)(data_0214f464 + 0x73e0) != 0) {
        p1 = func_020bc3c4();
        p2 = func_020bc3c4();
        iVar4 = func_02067898((s16)*(s16 *)(p1 + 0x6c), (s16)*(s16 *)(p2 + 0x6e));
        *(s32 *)(*(u8 **)(data_0214f464 + 0x73e0) + 0x54) = (s16)(((s64)iVar4 * 0x1c00 + 0x800) >> 12);
    }
    data_0214f464[12] = 3;
    data_0214f464[10] = param_1;
    *(u16 *)(data_0214f464 + 0x20) = param_2;
}
