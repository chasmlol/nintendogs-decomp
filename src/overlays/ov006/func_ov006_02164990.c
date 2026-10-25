#include "ctx.h"

extern u8 *data_ov006_021661c4;

void func_ov006_02164aec(void);

void func_ov006_02164990(u32 param_1)
{
    u8 *iVar1;

    iVar1 = data_ov006_021661c4;
    if (*(u32 *)(iVar1 + 0x184) == 0) {
        if (param_1 != 0) {
            *(u32 *)(iVar1 + 0x180) = 1;
            func_ov006_02164aec();
        }
    } else if (param_1 == 0) {
        *(u32 *)(iVar1 + 0x180) = 0;
    }
    *(u32 *)(data_ov006_021661c4 + 0x184) = param_1;
}
