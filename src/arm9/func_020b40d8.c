#include "ctx.h"

extern int data_021425d0;
extern u8 *data_0215942c;
extern int func_01ffdb08(int a);
extern int func_0202817c(int a);
extern u8 func_02028100(int a);
extern int func_0208fc60(u32 a, u32 b);

int func_020b40d8(int param_1, u32 param_2)
{
    int iVar2;
    int iVar3;

    iVar3 = (int)&data_021425d0;
    switch (param_1) {
    case 0x00030002:
        iVar3 = func_0202817c(func_01ffdb08((int)*(s16 *)(data_0215942c + 0xe)));
        iVar3 = iVar3 + 0x78;
        break;
    case 0x00030005:
        iVar2 = func_01ffdb08((int)*(s16 *)(data_0215942c + 0xe));
        if (iVar2 != 0) {
            iVar3 = func_0208fc60(func_02028100(iVar2), param_2);
        }
        break;
    }
    return iVar3;
}
