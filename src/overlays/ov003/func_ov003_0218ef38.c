#include "ctx.h"

extern int data_02159444;
extern int func_020364cc(int a);
extern void func_02039448(int a);
extern void func_02037450(int a, int b);
extern int func_0203567c(int a);
extern void func_0203e908(int a, int b);

typedef struct {
    u32 a;
    u32 b;
    u32 c;
} Tri3;

void func_ov003_0218ef38(int param_1)
{
    int iVar1;

    iVar1 = func_020364cc(param_1);
    if (iVar1 != 0) {
        func_02039448(param_1);
        *(Tri3 *)(param_1 + 0x3b4) = *(Tri3 *)(iVar1 + 0xbc);
        iVar1 = *(int *)(data_02159444 + 0x1c);
        *(Tri3 *)(param_1 + 0x278) = *(Tri3 *)(iVar1 + 0x30);
        func_02037450(param_1, 0x392);
    }
    if (*(s16 *)(param_1 + 0xfa) == 0x22) {
        ((s16 *)param_1)[125] = 0;
    }
    iVar1 = func_0203567c(param_1);
    if (iVar1 != 0) {
        func_0203e908(param_1, 0x438);
    }
}
