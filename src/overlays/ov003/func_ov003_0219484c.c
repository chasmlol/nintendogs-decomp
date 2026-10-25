#include "ctx.h"

extern int func_020364cc(int p);
extern int func_020c1f34(int p);
extern void func_02037450(int p, int q);
extern int func_0203567c(int p);
extern void func_ov003_02197f94(int p, int q);

typedef struct {
    u32 w0;
    u32 w1;
    u32 w2;
} Trip;

void func_ov003_0219484c(int param_1)
{
    int bVar1;
    int iVar2;
    int iVar3;

    iVar2 = func_020364cc(param_1);
    if (iVar2 != 0) {
        if ((*(s16 *)(iVar2 + 0x90) == 0) || (*(s16 *)(iVar2 + 0x90) == 2)) {
            bVar1 = 1;
        }
        else if ((*(s16 *)(iVar2 + 0x94) == 0x35) && (iVar3 = func_020c1f34(iVar2), iVar3 == 0)) {
            bVar1 = 1;
        }
        else {
            bVar1 = 0;
        }
        if (!bVar1) {
            *(Trip *)(param_1 + 0x26c) = *(Trip *)(iVar2 + 0xbc);
            *(Trip *)(param_1 + 0x278) = *(Trip *)(param_1 + 0x26c);
            *(Trip *)(param_1 + 0x3b4) = *(Trip *)(param_1 + 0x26c);
            func_02037450(param_1, 0x100);
        }
    }
    iVar2 = func_0203567c(param_1);
    func_ov003_02197f94(param_1, iVar2);
}
