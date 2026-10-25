#include "ctx.h"

extern u8 *data_0215be48;
extern void func_020fcf48(void);
extern s32 func_02111b58(void);
extern void func_02111b3c(void);

void func_0210e3c0(s32 *param_1)
{
    s32 iVar1;

    *param_1 = *param_1 + 1;
    if (*param_1 <= 0x14) {
        return;
    }
    switch (*(s32 *)(data_0215be48 + 0xbc)) {
    case 0:
        break;
    case 1:
        break;
    case 2:
        break;
    case 3:
        goto LAB_43c;
    case 4:
        goto LAB_43c;
    case 5:
        break;
    case 6:
        break;
    case 7:
        goto LAB_44c;
    case 8:
        break;
    case 9:
        break;
    case 10:
        goto LAB_43c;
    case 11:
        break;
    case 13:
        break;
    case 14:
LAB_43c:
        func_020fcf48();
        return;
    case 12:
LAB_44c:
        iVar1 = func_02111b58();
        if (iVar1 == 0) {
            return;
        }
        func_020fcf48();
        func_02111b3c();
        break;
    }
}
