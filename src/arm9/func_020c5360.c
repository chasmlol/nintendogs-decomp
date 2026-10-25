#include "ctx.h"

extern s32 data_02142b3c;
extern s32 data_02142b40;
extern s32 func_01ffdb08(s32 i);
extern s32 func_02067c30(u8 *p);
extern void func_0202707c(s32 v, u32 w);

typedef struct { s32 x0; s32 x4; } A;
typedef struct { u8 pad[0x18]; s32 f18; } B;
typedef struct {
    u8 p0[0x18]; A a; u8 p1[0x84 - 0x20]; B b; u8 p2[0x108 - 0x84 - 0x1c]; s32 f108; s32 arr[3]; s32 arr2[3];
} Q;

#pragma opt_propagation off
#pragma opt_common_subs off
void func_020c5360(u8 *param_1)
{
    Q *iVar4;
    u8 *pa;
    B *pb;
    s32 iVar1;
    s32 iVar2;
    s32 i;
    s32 iVar3;
    s32 *pl;
    u8 *pf;

    iVar4 = *(Q **)(param_1 + 0x214);
    pa = (u8 *)&iVar4->a;
    pl = &data_02142b3c;
    pb = &iVar4->b;
    pf = (u8 *)&pb->f18;
    iVar3 = 0;
    if (*(s32 *)(pa + 4) <= *pl) {
        iVar1 = func_02067c30(pf);
        if (iVar1 > data_02142b40) {
            iVar3 = 1;
        }
    }
    if (iVar4->f108 == 0 && iVar3 != 0) {
        i = 0;
        do {
            iVar2 = func_01ffdb08(i);
            if (i != *(s16 *)(param_1 + 0x98) && iVar2 != 0) {
                func_0202707c(iVar2, 0x20);
                iVar4->arr[i] = 0;
                iVar4->arr2[i] = 0;
            }
            i = (s16)(i + 1);
        } while (i < 3);
    }
    iVar4->f108 = iVar3;
}
