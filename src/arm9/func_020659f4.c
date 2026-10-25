#include "ctx.h"

typedef struct {
    u8 pad0[0x18];
    u32 f18;
    u32 f1c;
    u32 f20;
    s32 f24;
    u32 f28;
    u32 f2c;
    u8 pad30[4];
    u32 f34;
} Obj;

extern Obj data_02150600;
extern u32 data_02150be0;
extern void (*data_02150c00)(void);
extern void func_0206566c(void);
extern void func_020661ec(void);
extern void func_02065be4(void);

void func_020659f4(void)
{
    Obj *piVar1;

    piVar1 = &data_02150600;
    if (piVar1->f34 != 0) {
        return;
    }
    piVar1->f34 = 1;
    piVar1->f20 = 0;
    piVar1->f1c = piVar1->f20;
    piVar1->f18 = piVar1->f1c;
    piVar1->f24 = -1;
    piVar1->f28 = 0;
    piVar1->f2c = 0;
    data_02150be0 = 0;
    func_0206566c();
    data_02150c00 = func_02065be4;
    func_020661ec();
}
