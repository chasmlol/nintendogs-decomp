typedef unsigned int u32;
void func_020022e4(u32 **param_1, u32 *param_2)
{
    u32 *iVar1;
    u32 *iVar2;
    if (param_1 == 0) {
        return;
    }
    iVar2 = *param_1;
    if (iVar2 == 0) {
        param_2[2] = 0;
        *param_1 = param_2;
        return;
    }
    iVar1 = (u32 *)iVar2[2];
    while (iVar1 != 0) {
        iVar2 = iVar1;
        iVar1 = (u32 *)iVar1[2];
    }
    param_2[2] = (u32)iVar1;
    iVar2[2] = (u32)param_2;
}
