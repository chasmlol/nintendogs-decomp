#include "ctx.h"

extern u32 data_0214249c;
extern int func_02107fd0(void);
extern int func_01ffdb08(int a);
extern int func_0202817c(int a);
extern u8 func_02028100(int a);
extern int func_0208fc60(u32 a, u32 b);

int func_020b1374(int param_1, u32 param_2)
{
    u8 bVar1;
    int iVar2;
    int iVar3;

    iVar3 = (int)&data_0214249c;
    switch (param_1) {
    case 0x30002:
        iVar3 = func_02107fd0();
        iVar3 = func_01ffdb08(iVar3);
        iVar3 = func_0202817c(iVar3);
        iVar3 = iVar3 + 0x78;
        break;
    case 0x30005:
        iVar2 = func_02107fd0();
        iVar2 = func_01ffdb08(iVar2);
        if (iVar2 != 0) {
            bVar1 = func_02028100(iVar2);
            iVar3 = func_0208fc60((u32)bVar1, param_2);
        }
        break;
    }
    return iVar3;
}
