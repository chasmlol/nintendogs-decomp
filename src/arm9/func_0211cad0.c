#include "ctx.h"

extern u32 data_0215be48;
extern u32 func_02003a60(void);
extern void func_020f153c(void);
extern u32 func_0209406c(void);
extern void func_021036b4(u32 a);

void func_0211cad0(u8 *param_1)
{
    u8 *r4;
    u8 *g;
    u32 uVar2;

    r4 = param_1 + 0x1cc0;
    g = (u8 *)data_0215be48;
    if (*(u16 *)(g + 0x11160) != 0) {
        return;
    }
    if (*(s32 *)(g + 0xb4) == 0x17) {
        if (func_02003a60() == 0) {
            return;
        }
        if (*(s32 *)r4 != 4 && *(s32 *)r4 != 3) {
            func_020f153c();
        }
        uVar2 = func_0209406c();
        *(u32 *)((u8 *)data_0215be48 + 0x11158) = uVar2;
        func_021036b4(uVar2);
        *(u32 *)((u8 *)data_0215be48 + 0x4868) = 1;
        return;
    }
    uVar2 = func_0209406c();
    *(u32 *)((u8 *)data_0215be48 + 0x11158) = uVar2;
    func_021036b4(uVar2);
    *(u32 *)((u8 *)data_0215be48 + 0x4868) = 1;
}
