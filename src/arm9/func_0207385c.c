typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
u32 *func_0207385c(u8 *param_1, u32 param_2)
{
    u16 uVar2;
    u32 *piVar1;
    u16 cnt;
    piVar1 = (u32 *)(param_1 + *(u16 *)(param_1 + 12));
    cnt = *(u16 *)(param_1 + 14);
    for (uVar2 = 0; uVar2 < cnt; uVar2 = uVar2 + 1) {
        if (*piVar1 == param_2) {
            return piVar1;
        }
        piVar1 = (u32 *)((u8 *)piVar1 + piVar1[1]);
    }
    return 0;
}
