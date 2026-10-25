#include "ctx.h"

typedef struct {
    u32 f00;
    u8 pad04[8];
    u32 fc;
    u32 f10;
    u32 f14;
    u8 pad18[4];
    u32 f1c;
    u8 pad20[4];
    u32 f24;
    u32 f28;
    s32 f2c;
} Obj;

extern Obj data_0215216c;
extern void func_0206c7f0(u32 a, u32 b, u32 c);
extern void func_0208010c(u32 a, u32 b);
extern void func_02089964(u32 a, u32 b, s32 c, u32 d);

void func_02070fe8(void)
{
    Obj *piVar1;
    vu32 local0;
    vu32 local1;
    s32 iVar3;
    u32 uVar2;

    piVar1 = &data_0215216c;
    if (piVar1->f00 == 0) {
        return;
    }
    piVar1->f1c = 0;
    local0 = 0;
    func_0206c7f0(local0, piVar1->fc, piVar1->f14);
    local1 = 0;
    func_0206c7f0(local1, piVar1->f10, piVar1->f14);
    func_0208010c(piVar1->fc, piVar1->f14);
    func_0208010c(piVar1->f10, piVar1->f14);
    uVar2 = piVar1->f2c;
    if ((s32)uVar2 >= 0) {
        iVar3 = 1 << uVar2;
    } else {
        iVar3 = 0;
    }
    func_02089964(piVar1->f24, piVar1->f28, iVar3, 0);
}
