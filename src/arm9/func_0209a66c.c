#include "ctx.h"

extern int data_02159068;
extern void func_0209a730(int a);
extern int func_020d7d34(void);
extern void func_020d5540(void);
extern int func_020d5284(void);
extern void func_020d7e8c(void);
extern int func_020d6f50(void);
extern void func_020d7e44(void);

void func_0209a66c(void)
{
    s16 *psVar4;
    s16 sVar2;
    int iVar3;
    int bVar1;

    psVar4 = (s16 *)data_02159068;
    sVar2 = *psVar4;
    if (sVar2 != 0) {
        switch (sVar2) {
        case 1:
            func_0209a730((int)psVar4);
            break;
        case 2:
            iVar3 = func_020d7d34();
            if (iVar3 == 1) {
                func_020d5540();
                *psVar4 = 3;
            } else {
                iVar3 = func_020d7d34();
                if (iVar3 != 5) {
                    goto nz;
                }
                switch (func_020d5284()) {
                case 0x14:
                    bVar1 = 1;
                    goto jn;
                default:
                    break;
                }
            nz:
                bVar1 = 0;
            jn:
                if (bVar1) {
                    func_020d7e8c();
                }
            }
            break;
        }
    }
    iVar3 = func_020d6f50();
    if (iVar3 != 0) {
        func_020d7e44();
    }
}
