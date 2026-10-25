#include "ctx.h"

extern u32 data_0214a244;
extern u32 data_0214a258;
extern u32 data_0214a26c;
extern u32 data_0214a284;
extern u32 data_0214a29c;
extern u32 data_0214a2b0;
extern u32 data_0214a2c4;
extern u32 data_0214a2dc;
extern u32 data_0214a2f4;
extern u32 data_0214a308;
extern u32 data_0214a31c;
extern u32 data_0214a334;
extern void func_020fc684(u8 *p, u32 a, u32 b, u32 c, u32 d);
extern void func_021042c8(void);
extern void func_021042b8(void);
extern s32 func_0210a530(void);
extern void func_021042a8(void);
extern void func_02104298(void);

void func_021183f8(u8 *param_1, u8 *param_2)
{
    s32 iVar1;

    switch (*(s32 *)(param_2 + 0x38)) {
    case 0:
        break;
    case 1:
        func_020fc684(param_1, (u32)&data_0214a244, (u32)&data_0214a258, (u32)&data_0214a26c, (u32)&data_0214a284);
        func_021042c8();
        *(u32 *)(param_2 + 0x3c) = 120;
        break;
    case 2:
        func_020fc684(param_1, (u32)&data_0214a29c, (u32)&data_0214a2b0, (u32)&data_0214a2c4, (u32)&data_0214a2dc);
        func_021042b8();
        *(u32 *)(param_2 + 0x3c) = 120;
        break;
    case 3:
        func_020fc684(param_1, (u32)&data_0214a2f4, (u32)&data_0214a308, (u32)&data_0214a31c, (u32)&data_0214a334);
        iVar1 = func_0210a530();
        switch (iVar1) {
        case 1:
        case 2:
            func_021042a8();
            break;
        case 3:
            func_02104298();
            break;
        }
        *(u32 *)(param_2 + 0x3c) = 120;
        break;
    }
    *(u32 *)(param_2 + 0x38) = 0;
}
