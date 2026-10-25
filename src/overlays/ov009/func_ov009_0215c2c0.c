#include "ctx.h"
extern u8 data_0214efdc[];
void func_ov009_0215c2c0(u8 *param_1)
{
    if ((u16)(*(u16 *)(data_0214efdc + 2) & 0x40) != 0) {
        *(s16 *)(param_1 + 108) = *(s16 *)(param_1 + 108) + 256;
        if (*(s16 *)(param_1 + 108) > 16128) {
            *(s16 *)(param_1 + 108) = 16128;
        }
    }
    if ((u16)(*(u16 *)(data_0214efdc + 2) & 0x80) != 0) {
        *(s16 *)(param_1 + 108) = *(s16 *)(param_1 + 108) - 256;
        if (*(s16 *)(param_1 + 108) < -16128) {
            *(s16 *)(param_1 + 108) = -16128;
        }
    }
    if ((u16)(*(u16 *)(data_0214efdc + 2) & 0x20) != 0) {
        *(s16 *)(param_1 + 110) = *(s16 *)(param_1 + 110) - 256;
    }
    if ((u16)(*(u16 *)(data_0214efdc + 2) & 0x10) != 0) {
        *(s16 *)(param_1 + 110) = *(s16 *)(param_1 + 110) + 256;
    }
    if ((u16)(*(u16 *)(data_0214efdc + 2) & 0x200) != 0) {
        *(s32 *)(param_1 + 0x68) = *(s32 *)(param_1 + 0x68) + 256;
        if (*(s32 *)(param_1 + 0x68) > 98304) {
            *(s32 *)(param_1 + 0x68) = 98304;
        }
    }
    if ((u16)(*(u16 *)(data_0214efdc + 2) & 0x100) == 0) {
        return;
    }
    *(s32 *)(param_1 + 0x68) = *(s32 *)(param_1 + 0x68) - 256;
    if (*(s32 *)(param_1 + 0x68) < 16384) {
        *(s32 *)(param_1 + 0x68) = 16384;
    }
}
