#include "ctx.h"
extern u8 data_0214efdc[];
extern void func_0208eb68(void);
void func_ov022_0215c5d0(u8 *param_1)
{
    if ((u16)(*(u16 *)(data_0214efdc + 2) & 0x40) != 0) {
        *(u16 *)(param_1 + 128) = *(u16 *)(param_1 + 128) + 256;
        if (*(u16 *)(param_1 + 128) == 0x4000) {
            *(u16 *)(param_1 + 128) = 0x3f00;
        }
    }
    if ((u16)(*(u16 *)(data_0214efdc + 2) & 0x80) != 0) {
        *(u16 *)(param_1 + 128) = *(u16 *)(param_1 + 128) - 256;
        if (*(u16 *)(param_1 + 128) == 0xc000) {
            *(u16 *)(param_1 + 128) = 0xc100;
        }
    }
    if ((u16)(*(u16 *)(data_0214efdc + 2) & 0x20) != 0) {
        *(u16 *)(param_1 + 130) = *(u16 *)(param_1 + 130) - 512;
    }
    if ((u16)(*(u16 *)(data_0214efdc + 2) & 0x10) != 0) {
        *(u16 *)(param_1 + 130) = *(u16 *)(param_1 + 130) + 512;
    }
    ((void (*)(void))func_0208eb68)();
}
