#include "ctx.h"

extern u32 data_0213e838;
extern u32 func_0207faa8(void);
extern s32 func_0207fbf4(void);
extern u8 func_0207fa74(void);

u32 func_0207fb7c(void)
{
    u32 uVar2;
    u32 r;

    if (data_0213e838 == 0xffffffff) {
        uVar2 = func_0207faa8();
        if (func_0207fbf4() != 0) {
            r = uVar2 | 0x10000000;
        } else {
            if (func_0207fa74()) {
                r = uVar2 | 0x40000000;
            } else if ((uVar2 & 0x1000000) != 0) {
                r = uVar2 | 0x20000000;
            } else {
                r = uVar2 | 0x80000000;
            }
        }
        data_0213e838 = r | *(vu16 *)0x027ffffa;
    }
    return data_0213e838;
}
