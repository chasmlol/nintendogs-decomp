#include "ctx.h"

extern u8 *data_02159424;
extern void *func_02044ccc(s32 i);
extern void func_0208cf68(void *p);
extern void func_02044cb0(s32 i);
extern void func_0209b8e8(void);

void func_020a4cbc(void)
{
    s16 iVar3;
    void *psVar2;

    iVar3 = 0;
    if (0 < *(s16 *)(data_02159424 + 32)) {
        do {
            psVar2 = func_02044ccc(iVar3);
            if (psVar2 != NULL) {
                func_0208cf68(psVar2);
                func_02044cb0((s8)iVar3);
            }
            iVar3 = iVar3 + 1;
        } while (iVar3 < *(s16 *)(data_02159424 + 32));
    }
    func_0209b8e8();
}
