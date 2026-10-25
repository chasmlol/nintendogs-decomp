#include "ctx.h"

extern u8 data_0214efdc[];
extern void func_0208eb68(void);

void func_ov008_0215c5fc(u8 *p)
{
    if ((u16)(*(vu16 *)(data_0214efdc + 2) & 0x40) != 0) {
        u16 t = *(u16 *)(p + 0x80) + 0x100;
        *(u16 *)(p + 0x80) = t;
        if (*(u16 *)(p + 0x80) == 0x4000) {
            *(u16 *)(p + 0x80) = 0x3f00;
        }
    }
    if ((u16)(*(vu16 *)(data_0214efdc + 2) & 0x80) != 0) {
        u16 t = *(u16 *)(p + 0x80) - 0x100;
        *(u16 *)(p + 0x80) = t;
        if (*(u16 *)(p + 0x80) == 0xc000) {
            *(u16 *)(p + 0x80) = 0xc100;
        }
    }
    if ((u16)(*(vu16 *)(data_0214efdc + 2) & 0x20) != 0) {
        *(u16 *)(p + 0x82) = *(u16 *)(p + 0x82) - 0x200;
    }
    if ((u16)(*(vu16 *)(data_0214efdc + 2) & 0x10) != 0) {
        *(u16 *)(p + 0x82) = *(u16 *)(p + 0x82) + 0x200;
    }
    func_0208eb68();
}
