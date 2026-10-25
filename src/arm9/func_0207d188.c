typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
extern u32 data_02155c74;
extern s32 func_0207d1b4(u32 a, u32 b);
u32 *func_0207d188(u32 param_1)
{
    u32 *puVar2;
    s32 iVar1;
    puVar2 = (u32 *)&data_02155c74;
    iVar1 = func_0207d1b4((u32)puVar2, param_1);
    if (iVar1 != 0) {
        puVar2 = (u32 *)(iVar1 + 12);
    }
    return puVar2;
}
