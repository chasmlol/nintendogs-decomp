#include "ctx.h"

typedef struct {
    u32 a;
    u32 b;
    u32 c;
} T3;

extern int func_020364cc(int a);
extern int func_020c1f34(int a);
extern void func_02037450(int a, int b);
extern int func_0203567c(int a);
extern void func_ov003_02197f94(int a, int b);

void func_ov003_021946ec(int param_1)
{
    int bVar1;
    int iVar2;
    int iVar3;

    iVar2 = func_020364cc(param_1);
    if (iVar2 != 0) {
        if ((*(s16 *)(iVar2 + 0x90) == 0) || (*(s16 *)(iVar2 + 0x90) == 2)) {
            bVar1 = 1;
        } else if ((*(s16 *)(iVar2 + 0x94) == 0x35) && (iVar3 = func_020c1f34(iVar2), iVar3 == 0)) {
            bVar1 = 1;
        } else {
            bVar1 = 0;
        }
        if (!bVar1) {
            *(T3 *)(param_1 + 0x26c) = *(T3 *)(iVar2 + 0xbc);
            *(T3 *)(param_1 + 0x278) = *(T3 *)(param_1 + 0x26c);
            *(T3 *)(param_1 + 0x3b4) = *(T3 *)(param_1 + 0x26c);
            func_02037450(param_1, 0x100);
        }
    }
    iVar2 = func_0203567c(param_1);
    func_ov003_02197f94(param_1, iVar2);
}
