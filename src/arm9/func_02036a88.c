#include "ctx.h"

typedef struct { u32 w[3]; } T3;

extern int data_0214f464;
extern void func_01ff832c(u32 a, void *b, void *c, void *d);
extern void func_02009bd0(void *a, void *b);

void func_02036a88(int param_1, int param_2, int *param_3, int *param_4, s16 *param_5)
{
    s32 mode;
    s16 sVar1;
    s32 iVar2;
    T3 loc0;
    T3 loc1;

    sVar1 = *(s16 *)(param_2 + 0x90);
    if (sVar1 == 1) {
        mode = 1;
        goto store;
    }
    if (sVar1 == 4) {
        mode = 2;
        goto store;
    }
    mode = (sVar1 == 5) ? 2 : 0;
store:
    *param_5 = (s16)mode;
    if (*param_5 == 1) goto b1;
    if (*param_5 != 2) goto b3;
    goto b2;
b1:
    loc0 = *(T3 *)(param_2 + 0xb0);
    func_01ff832c(0xfe00, &loc0, param_3, param_4);
    goto tail;
b2:
    iVar2 = (s32)*(s16 *)(param_2 + 0x98);
    if ((iVar2 < 0) || (iVar2 >= 3)) {
        iVar2 = 0;
    } else {
        iVar2 = *(s32 *)(*(u8 **)&data_0214f464 + iVar2 * 4 + 0x54);
    }
    if ((iVar2 != 0) && (iVar2 != param_1)) {
        loc1 = *(T3 *)(iVar2 + 0x260);
        func_01ff832c(0xfe00, &loc1, param_3, param_4);
    }
    goto tail;
b3:
    {
        T3 cp = *(T3 *)param_3;
        *(T3 *)param_4 = cp;
    }
tail:
    func_02009bd0(param_4, (void *)(param_1 + 0x2e8));
}
