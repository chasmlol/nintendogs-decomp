#include "ctx.h"

extern u8 *func_020038b8(s32 *p, s32 n);
extern void func_0208f028(u8 *p, s32 v);

u8 *func_ov011_0215c9fc(s32 *param_1, s32 param_2)
{
    u8 *puVar1;

    puVar1 = func_020038b8(param_1, 0x30);
    func_0208f028(puVar1, param_2);
    if (param_2 == 0) {
        *(s16 *)(puVar1 + 0x28) = 0x7fff;
        *(u16 *)(puVar1 + 0x2a) = 0;
        *(s16 *)(puVar1 + 0x2c) = -4096;
        *(u16 *)(puVar1 + 0x2e) = 0;
    } else if (param_2 == 1) {
        *(s16 *)(puVar1 + 0x28) = 0x1ce7;
        *(s16 *)(puVar1 + 0x2a) = -4096;
        *(u16 *)(puVar1 + 0x2c) = 0;
        *(u16 *)(puVar1 + 0x2e) = 0;
    } else {
        *(s16 *)(puVar1 + 0x28) = 0x1ce7;
        *(u16 *)(puVar1 + 0x2a) = 0;
        *(s16 *)(puVar1 + 0x2c) = 4096;
        *(u16 *)(puVar1 + 0x2e) = 0;
    }
    return puVar1;
}
