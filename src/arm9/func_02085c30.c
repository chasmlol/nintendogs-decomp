typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
s32 func_02085c30(u32 param_1, s32 param_2, ...)
{
    u16 *ph;
    s16 *ps;
    u32 uVar1;
    s32 iVar2;
    ph = (u16 *)&param_1;
    ps = (s16 *)&param_1;
    iVar2 = *ps;
    uVar1 = *ph;
    iVar2 = (iVar2 << 20) >> 20;
    uVar1 = (uVar1 << 18) >> 30;
    if (uVar1 != 1) {
        if (uVar1 == 2) {
            iVar2 = iVar2 - param_2;
        }
        return iVar2;
    }
    return iVar2 - (param_2 + 1) / 2;
}
