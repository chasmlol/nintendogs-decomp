#include "ctx.h"

typedef struct {
    u8 pad[0x2c];
    s32 *f2c;
    s32 *f30;
    s32 *f34;
    s32 *f38;
    s32 *f3c;
} Obj;

extern s32 *data_0215be34;
extern Obj *data_0215be44;
extern void func_02081104(s32 a, s32 *b);

void func_020f4b38(void)
{
    s32 iVar1;

    if (data_0215be34 != 0) {
        iVar1 = *data_0215be34;
    } else {
        iVar1 = 0;
    }
    if (iVar1 != 0) {
        if (data_0215be44->f2c != 0) {
            func_02081104(iVar1, data_0215be44->f2c);
        }
        if (data_0215be44->f30 != 0) {
            func_02081104(iVar1, data_0215be44->f30);
        }
        if (data_0215be44->f34 != 0) {
            func_02081104(iVar1, data_0215be44->f34);
        }
        if (data_0215be44->f38 != 0) {
            func_02081104(iVar1, data_0215be44->f38);
        }
        if (data_0215be44->f3c != 0) {
            func_02081104(iVar1, data_0215be44->f3c);
        }
    }
    data_0215be44 = 0;
}
