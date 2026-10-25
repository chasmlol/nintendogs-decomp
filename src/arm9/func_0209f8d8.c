#include "ctx.h"

typedef struct {
    u32 w0;
    u8 pad1[8];
    s16 f0c;
    u16 f0e;
    u8 pad2[8];
    u16 f18;
    u16 f1a;
    u32 f1c;
} Obj;

extern Obj data_02159198;
extern void func_02070ac8(Obj *p, s32 a, s32 b);

u32 func_0209f8d8(s32 param_1)
{
    s32 iVar4;
    s32 iVar3;
    Obj *piVar2;
    u16 uVar1;
    u16 uVar2;
    piVar2 = &data_02159198;
    iVar4 = 30;
    iVar3 = piVar2->w0;
    piVar2->f0e = (u16)param_1;
    if (iVar3 != 0) {
        if (piVar2->f1c != 0) {
            uVar2 = piVar2->f1a;
            uVar1 = piVar2->f18;
            piVar2->f18 = 0;
            piVar2->f1c = 0;
            iVar4 = uVar2 - uVar1;
        }
        iVar3 = piVar2->f0c * param_1;
        func_02070ac8(piVar2, iVar3 / 100, iVar4);
        return 1;
    }
    return 0;
}
