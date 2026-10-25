#include "ctx.h"

extern u32 data_02159060;
extern s32 func_0208dda0(void);
extern void func_02097b94(u32 a, u32 b, u32 c, u32 d, u32 e);
extern void func_02093d84(void);

void func_020a9ac4(u8 *param_1)
{
    u8 *p;
    s32 sVar1;

    p = *(u8 **)&data_02159060;
    if (*(u32 *)(p + 0xa4) == 0) {
        return;
    }
    sVar1 = *(s16 *)(p + 0x9a);
    switch (sVar1) {
    case 0:
        if (func_0208dda0() != 0) {
            *(u16 *)(param_1 + 4) = 16;
            *(u16 *)(param_1 + 6) = 0;
            return;
        }
        *(u16 *)(param_1 + 4) = 15;
        *(u16 *)(param_1 + 6) = 0;
        func_02097b94(1, 0x837, 0, 0, 0);
        return;
    case 1:
        *(u16 *)(param_1 + 4) = 17;
        *(u16 *)(param_1 + 6) = 0;
        func_02093d84();
        return;
    }
}
