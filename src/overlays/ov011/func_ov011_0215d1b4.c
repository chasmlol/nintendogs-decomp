#include "ctx.h"

extern u32 data_ov011_0215d324;
extern u32 data_0214efdc;
extern void func_0208eb68(u8 *p);

void func_ov011_0215d1b4(u8 *param_1)
{
    u8 *g = (u8 *)data_ov011_0215d324;
    if (*(s32 *)(g + 0x874) != 0) {
        if ((u16)(*(u16 *)((u8 *)&data_0214efdc + 2) & 0x40)) {
            *(u16 *)(param_1 + 0x80) = *(u16 *)(param_1 + 0x80) + 0x100;
            if (*(u16 *)(param_1 + 0x80) == 0x4000) {
                *(u16 *)(param_1 + 0x80) = 0x3f00;
            }
        }
        if ((u16)(*(u16 *)((u8 *)&data_0214efdc + 2) & 0x80)) {
            *(u16 *)(param_1 + 0x80) = *(u16 *)(param_1 + 0x80) - 0x100;
            if (*(u16 *)(param_1 + 0x80) == 0xc000) {
                *(u16 *)(param_1 + 0x80) = 0xc100;
            }
        }
        if ((u16)(*(u16 *)((u8 *)&data_0214efdc + 2) & 0x20)) {
            *(u16 *)(param_1 + 0x82) = *(u16 *)(param_1 + 0x82) - 0x200;
        }
        if ((u16)(*(u16 *)((u8 *)&data_0214efdc + 2) & 0x10)) {
            *(u16 *)(param_1 + 0x82) = *(u16 *)(param_1 + 0x82) + 0x200;
        }
    }
    func_0208eb68(param_1);
}
