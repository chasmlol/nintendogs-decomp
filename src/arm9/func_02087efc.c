#include "ctx.h"

extern u32 func_02080b08(void);
extern void func_02080b1c(u32 a);
extern void func_0207f554(u8 *p);
extern u32 func_020879e4(u8 *p);

u32 func_02087efc(u8 *param_1)
{
    u32 bVar1;
    u32 iVar4;
    u32 c1;
    u32 c3;
    bVar1 = 0;
    iVar4 = func_02080b08();
    c1 = (*(u32 *)(param_1 + 0xc) & 1) != 0;
    if (c1 != 0) {
        bVar1 = (*(vu32 *)(param_1 + 0xc) & 0x44) == 0;
        if (bVar1 != 0) {
            *(vu32 *)(param_1 + 0xc) = *(vu32 *)(param_1 + 0xc) | 4;
            do {
                func_0207f554(param_1 + 24);
            } while ((*(vu32 *)(param_1 + 0xc) & 0x40) == 0);
        } else {
            do {
                func_0207f554(param_1 + 24);
                c3 = (*(vu32 *)(param_1 + 0xc) & 1) != 0;
            } while (c3 != 0);
        }
    }
    func_02080b1c(iVar4);
    if (bVar1 != 0) {
        return func_020879e4(param_1);
    }
    return *(u32 *)(param_1 + 0x14) == 0;
}
