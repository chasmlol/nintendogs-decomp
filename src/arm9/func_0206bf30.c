#include "ctx.h"

void func_02080b84(void);

void func_0206bf30(s32 param_1, u32 param_2)
{
    s32 iVar3;
    u32 *puVar2;
    u32 uVar1;

    iVar3 = 0;
    puVar2 = (u32 *)0x040000b8;
    do {
        if (iVar3 != param_1 && (*puVar2 & 0x80000000) != 0) {
            uVar1 = *puVar2 & 0x38000000;
            if (uVar1 != param_2 &&
                (uVar1 != 0x8000000 || param_2 != 0x10000000) &&
                (uVar1 != 0x10000000 || param_2 != 0x8000000)) {
                if (uVar1 == 0x18000000 || uVar1 == 0x20000000 || uVar1 == 0x28000000 ||
                    uVar1 == 0x30000000 || uVar1 == 0x38000000 || uVar1 == 0x8000000 ||
                    uVar1 == 0x10000000) {
                    func_02080b84();
                }
            }
        }
        iVar3 = iVar3 + 1;
        puVar2 = puVar2 + 3;
    } while (iVar3 < 3);
}
