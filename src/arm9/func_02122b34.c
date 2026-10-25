#include "ctx.h"

extern u8 *data_0215be48;
extern void func_02111b94(u32 a, u32 b, u32 c);
extern s32 func_0209638c(void);
extern void func_02097b94(u32 a, u32 b, u32 c, u32 d, u32 e);

void func_02122b34(u8 *param_1)
{
    s32 iVar3;
    u8 *r4;

    *(u32 *)param_1 = 0;
    *(u32 *)(param_1 + 0x10) = 0;
    *(s32 *)(param_1 + 0x8) = -64;
    r4 = param_1 + 0x1cf4;
    if (*(s32 *)(*(u8 **)&data_0215be48 + 0xbc) == 29) {
        func_02111b94(20, *(s16 *)(param_1 + 0x1c18), *(s16 *)(param_1 + 0x1c1a));
    }
    iVar3 = func_0209638c();
    if (iVar3 == 0) {
        func_02097b94(1, 0x838, 0, 0, 0);
        *(u16 *)(*(u8 **)&data_0215be48 + 0x11160) = 16;
        return;
    }
    if (*(s32 *)(r4 + 4) == 0) {
        func_02097b94(8, 0x251c, 0, 0, 1);
        *(u32 *)(r4 + 4) = 1;
    }
}
