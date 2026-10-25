#include "ctx.h"

extern u32 data_0214efdc;
extern u8 data_0214f004[];
extern void func_020a0e04(u32 a);
extern void func_020afda4(void);
extern void func_020a707c(void);
extern void func_020aa0f0(void);

void func_020afc84(u8 *param_1)
{
    if ((u16)(*(u16 *)&data_0214efdc & 0x0c0b) != 0) {
        *(s16 *)(param_1 + 0x1e) = 2;
        func_020a0e04(1);
    }
    if (*(s16 *)(param_1 + 0x1e) < 2) {
        *(s16 *)(param_1 + 0x1c) = *(s16 *)(param_1 + 0x1c) + 1;
        if (*(s16 *)(param_1 + 0x20) > 0) {
            *(s16 *)(param_1 + 0x20) = *(s16 *)(param_1 + 0x20) - 1;
        } else {
            *(s16 *)(param_1 + 0x1e) = 0;
        }
        if ((*(u16 *)(data_0214f004 + 2) & 2) != 0 && *(s16 *)(param_1 + 0x20) < 0x23) {
            *(s16 *)(param_1 + 0x1c) = 0;
            *(s16 *)(param_1 + 0x1e) = *(s16 *)(param_1 + 0x1e) + 1;
            *(s16 *)(param_1 + 0x20) = 0x2d;
            func_020afda4();
        }
    } else {
        *(s16 *)(param_1 + 0x22) = *(s16 *)(param_1 + 0x22) + 1;
        if ((*(u16 *)(data_0214f004 + 2) & 2) != 0) {
            func_020afda4();
        }
    }
    if (*(s16 *)(param_1 + 0x22) < 0x3c) {
        goto small;
    }
    *(s16 *)(param_1 + 4) = 0x104;
    *(s16 *)(param_1 + 6) = 0;
    func_020a707c();
    func_020aa0f0();
    return;
small:
    if (*(s16 *)(param_1 + 0x1c) >= 1200) {
        *(s16 *)(param_1 + 4) = 1;
        *(s32 *)(param_1 + 0xc) = 1;
        *(s32 *)(param_1 + 0x18) = 0x19;
    }
}
