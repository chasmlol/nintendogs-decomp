#include "ctx.h"

extern u8 *data_0215be40;
extern void func_0208d640(u8 *a, s32 b, s32 *c, s32 d);
extern void func_0208d564(u8 *a);
extern void func_0208d3a0(u8 *a, u32 b, s32 c, s32 d);
extern void func_0208d388(u8 *a);
extern void func_020f1980(void);

void func_020f1c14(u32 param_1, s32 param_2, s32 *param_3, s32 param_4)
{
    func_0208d640(*(u8 **)(data_0215be40 + 0x1c), param_2, param_3, param_4);
    if (*(s32 *)(data_0215be40 + 0x14) != 0) {
        func_0208d564(*(u8 **)(data_0215be40 + 0x1c));
        func_0208d3a0(*(u8 **)(data_0215be40 + 0x1c), *(u16 *)(data_0215be40 + 0x10), 1, 0x88);
        func_0208d388(*(u8 **)(data_0215be40 + 0x1c));
        *(s32 *)(data_0215be40 + 0x8) = ((*(s8 *)(*(u8 **)(data_0215be40 + 0x24) + 0x13)) << 12) / 10;
        *(s32 *)(data_0215be40 + 0xc) = ((*(u8 *)(*(u8 **)(data_0215be40 + 0x24) + 0x12)) << 12) / 10;
        *(s32 *)(data_0215be40 + 0x14) = 0;
        *(u16 *)(data_0215be40 + 0x10) = 0xffff;
        *(s32 *)(data_0215be40 + 0x18) = 1;
    }
    if (*(s32 *)data_0215be40 != 0) {
        func_020f1980();
    }
}
