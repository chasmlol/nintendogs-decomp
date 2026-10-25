#include "ctx.h"

extern u8 *data_02159444;
extern int func_020ab2cc(int a, int *b, void *c);
extern void func_02108b2c(int a, int b);
extern void func_020a0b40(int a, int b);
extern void func_02107f8c(int a);

void func_020ab178(int param_1)
{
    s16 sVar1;
    int iVar3;
    int local_0;

    sVar1 = *(s16 *)(data_02159444 + 86);
    local_0 = 0;
    if (*(s16 *)(data_02159444 + 88) != -2) {
        return;
    }
    *(s16 *)(data_02159444 + 88) = (s16)param_1;
    *(s16 *)(data_02159444 + 94) = 0;
    if (*(s16 *)(data_02159444 + 88) > 0) {
        iVar3 = func_020ab2cc(param_1, &local_0, data_02159444 + 96);
        *(s16 *)(data_02159444 + 92) = (s16)iVar3;
        *(s16 *)(data_02159444 + 86) = *(s16 *)(data_02159444 + 86) + *(s16 *)(data_02159444 + 92);
        if (*(s16 *)(data_02159444 + 86) > 0x270f) {
            *(s16 *)(data_02159444 + 86) = 0x270f;
        }
    } else {
        func_020ab2cc(param_1, &local_0, data_02159444 + 96);
    }
    if ((*(u32 *)(data_02159444 + 0x20) & 0x10) == 0) {
        return;
    }
    iVar3 = *(s16 *)(data_02159444 + 86) - sVar1;
    switch (*(s16 *)(data_02159444 + 88) + 1) {
    case 0:
    case 1:
        func_02108b2c(3, iVar3);
        func_020a0b40(8, local_0);
        break;
    case 2:
        func_02108b2c(2, iVar3);
        func_020a0b40(9, iVar3);
        break;
    case 3:
        func_02108b2c(1, iVar3);
        func_020a0b40(10, iVar3);
        break;
    }
    func_02107f8c(9);
}
