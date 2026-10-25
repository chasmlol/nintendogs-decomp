#include "ctx.h"
extern u8 data_0214efdc[];
extern void func_0208eb68(void);
void func_ov020_0215c408(u8 *o)
{
    s32 step = 0x199;
    if ((u16)(*(vu16 *)(data_0214efdc + 2) & 0x40) != 0) {
        *(u16 *)(o + 0x80) = *(u16 *)(o + 0x80) + 0x100;
        if (*(u16 *)(o + 0x80) == 0x4000) {
            *(u16 *)(o + 0x80) = 0x3f00;
        }
    }
    if ((u16)(*(vu16 *)(data_0214efdc + 2) & 0x80) != 0) {
        *(u16 *)(o + 0x80) = *(u16 *)(o + 0x80) - 0x100;
        if (*(u16 *)(o + 0x80) == 0xc000) {
            *(u16 *)(o + 0x80) = 0xc100;
        }
    }
    if ((u16)(*(vu16 *)(data_0214efdc + 2) & 0x20) != 0) {
        *(u16 *)(o + 0x82) = *(u16 *)(o + 0x82) - 0x200;
    }
    if ((u16)(*(vu16 *)(data_0214efdc + 2) & 0x10) != 0) {
        *(u16 *)(o + 0x82) = *(u16 *)(o + 0x82) + 0x200;
    }
    {
        u32 kv = *(vu16 *)(data_0214efdc + 2);
        if ((u16)(kv & 0x400) != 0) {
            *(s32 *)(o + 0x7c) = *(s32 *)(o + 0x7c) - step;
            if (*(s32 *)(o + 0x7c) < 0x1000) {
                *(s32 *)(o + 0x7c) = 0x1000;
            }
        } else {
            if ((u16)(kv & 0x800) != 0) {
                *(s32 *)(o + 0x7c) = *(s32 *)(o + 0x7c) + step;
            }
        }
    }
    func_0208eb68();
}
