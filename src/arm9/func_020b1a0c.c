#include "ctx.h"

extern u8 *data_0215944c;
extern u8 *data_02159424;
extern void func_02006c14(u8 *a, u8 *b, s32 c, s32 *d, s32 e, s32 f);

void func_020b1a0c(void)
{
    s32 rec[4];
    s32 iVar7;
    u8 *puVar6;
    u8 *obj;

    if (data_0215944c == 0) {
        return;
    }
    puVar6 = *(u8 **)(data_02159424 + 0xc);
    if (*(s16 *)data_0215944c == 1) {
        *(s32 *)(data_0215944c + 4) = *(s32 *)(data_0215944c + 4) + 1;
        iVar7 = *(s32 *)(data_0215944c + 4);
        if (iVar7 > 0) {
            if (iVar7 > 20) {
                iVar7 = 20;
            }
            if (*(s16 *)(data_0215944c + 2) != 2) {
                *(s32 *)(data_0215944c + 0x20) = ((iVar7 << 20) / 20) - 0x100000;
                *(s32 *)(data_0215944c + 0x24) = 0;
            } else {
                *(s32 *)(data_0215944c + 0x20) = 0;
                *(s32 *)(data_0215944c + 0x24) = (iVar7 * 0x60000) / 20 - 0x60000;
            }
        }
        if (*(s32 *)(data_0215944c + 4) > 30) {
            iVar7 = *(s32 *)(data_0215944c + 4) - 30;
            if (iVar7 > 20) {
                iVar7 = 20;
            }
            if (*(s16 *)(data_0215944c + 2) != 2) {
                *(s32 *)(data_0215944c + 0x34) = 0x100000 - ((iVar7 << 20) / 20);
                *(s32 *)(data_0215944c + 0x38) = 0;
            } else {
                *(s32 *)(data_0215944c + 0x34) = 0;
                *(s32 *)(data_0215944c + 0x38) = 0x60000 - (iVar7 * 0x60000) / 20;
            }
        }
    }
    if ((*(vu16 *)0x04000304 & 0x8000) >> 15 == 0) {
        obj = data_0215944c;
        rec[0] = *(s32 *)(obj + 0x20) + *(s32 *)(obj + 0x18);
        rec[1] = *(s32 *)(obj + 0x24) + *(s32 *)(obj + 0x1c);
        rec[2] = *(s32 *)(obj + 0x34) + *(s32 *)(obj + 0x2c);
        rec[3] = *(s32 *)(obj + 0x38) + *(s32 *)(obj + 0x30);
        func_02006c14(puVar6, *(u8 **)(obj + 0x14), 0, rec, 0, 0);
        func_02006c14(puVar6, *(u8 **)(data_0215944c + 0x28), 0, &rec[2], 0, 0);
    }
}
