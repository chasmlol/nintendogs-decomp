#include "ctx.h"

extern u32 data_02159424;
void *func_02044ccc(s32 a);
void func_0208cf68(void *a);
void func_02044cb0(s32 a);
void func_0209b8e8(void);

void func_020a4778(void)
{
    u32 *piVar1;
    s16 *psVar2;
    s32 iVar3;

    piVar1 = (u32 *)&data_02159424;
    iVar3 = 0;
    if (0 < *(s16 *)((u8 *)*piVar1 + 0x20)) {
        do {
            psVar2 = (s16 *)func_02044ccc(iVar3);
            if (psVar2 != (s16 *)0) {
                func_0208cf68(psVar2);
                func_02044cb0((s8)iVar3);
            }
            iVar3 = (s16)(iVar3 + 1);
        } while (iVar3 < *(s16 *)((u8 *)*piVar1 + 0x20));
    }
    func_0209b8e8();
}
