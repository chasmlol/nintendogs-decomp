#include "ctx.h"

extern u8 *data_02159428;
extern s32 func_020bc3c4(void);
extern void func_0208ec84(s32 a, s32 *b, u32 *c);
extern void func_020a1728(s32 a, s32 b, u32 *c);

void func_020a707c(void)
{
    s32 local_20[3];
    u32 auStack_14[3];
    s32 iVar1;
    s32 v;

    *(u32 *)(*(u8 **)(*(u8 **)data_02159428 + 0x74) + 0x1c) = 0x1000;
    iVar1 = func_020bc3c4();
    v = *(s32 *)(data_02159428 + 0x10);
    local_20[0] = 0x5000;
    local_20[1] = 0x9000;
    local_20[2] = v;
    func_0208ec84(iVar1, local_20, auStack_14);
    func_020a1728(0x31, 2, auStack_14);
    v = *(s32 *)(data_02159428 + 0x10);
    local_20[0] = -0x6000;
    local_20[1] = 0;
    local_20[2] = v;
    func_0208ec84(iVar1, local_20, auStack_14);
    func_020a1728(0x31, 3, auStack_14);
}
