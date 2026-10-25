#include "ctx.h"

extern int data_02159424;
extern u64 func_02080858(void);
extern u16 *func_020973f0(u16 *a, u32 *b, int c);
extern u16 *func_02044ccc(int a);
extern void func_02044a30(int a, int b);
extern void func_0208cae4(u16 *a, u32 b, u16 c);

void func_020a4d98(int param_1)
{
    u16 *puVar2;
    int iVar3;
    s16 iVar4;
    u16 *puVar5;
    u32 local_20;

    local_20 = (u32)func_02080858();
    iVar3 = data_02159424;
    iVar4 = 0;
    if (*(s16 *)(iVar3 + 0x20) <= 0) {
        return;
    }
    do {
        puVar5 = *(u16 **)(iVar3 + iVar4 * 4 + 0x24);
        puVar2 = func_02044ccc(iVar4);
        func_020973f0(puVar5, &local_20, param_1);
        func_02044a30((s16)iVar4, (int)puVar5);
        if (puVar2 != NULL) {
            func_0208cae4(puVar2, (u32)*puVar5, *(u8 *)((u8 *)puVar5 + 2));
        }
        iVar3 = data_02159424;
        iVar4 = iVar4 + 1;
    } while (iVar4 < *(s16 *)(iVar3 + 0x20));
}
