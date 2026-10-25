#include "ctx.h"

extern u32 data_02150600[];
extern void func_0206bfe4(u32 a);
extern void func_0207ebcc(u32 a);
extern u32 func_0207eb98(u32 a);
extern void func_02065fa4(u32 a);
extern void func_02065eac(void);

void func_02065e38(void)
{
    u32 uVar2;
    int iVar5;
    u32 iVar3;
    s32 iVar4;

    func_0206bfe4(data_02150600[9]);
    iVar5 = data_02150600[6];
    iVar5 = 0x200 + (s32)iVar5;
    iVar4 = data_02150600[7];
    iVar4 = 0x200 + iVar4;
    iVar3 = data_02150600[8];
    iVar3 = iVar3 - 0x200;
    data_02150600[6] = iVar5;
    data_02150600[7] = iVar4;
    data_02150600[8] = iVar3;
    if (iVar3 == 0) {
        func_0207ebcc(0x80000);
        uVar2 = func_0207eb98(0x80000);
        func_02065fa4(uVar2);
        return;
    }
    func_02065eac();
}
