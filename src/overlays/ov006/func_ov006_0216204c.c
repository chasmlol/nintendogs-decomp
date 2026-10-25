#include "ctx.h"

extern u8 *data_0214f464;
extern u32 func_0200c498(s32 a, s32 b);
extern u8 *func_01ffdb08(s32 a);
extern s32 func_02038380(u8 *p);

s32 func_ov006_0216204c(void)
{
    u32 iVar1;
    u8 *iVar2;
    s32 r;

    iVar1 = func_0200c498(0x11, 0);
    iVar2 = func_01ffdb08((s32)*(s8 *)(data_0214f464 + 6));
    if (iVar1 != 0 && iVar2 != NULL) {
        r = func_02038380(iVar2);
        switch (r) {
        case 0:
            return (s16)*(u32 *)(iVar1 + 0x20);
        case 1:
            return (s16)*(u32 *)(iVar1 + 0x24);
        case 2:
            return (s16)*(u32 *)(iVar1 + 0x28);
        }
    }
    return 0;
}
