typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
void func_02076f84(u32 *param_1)
{
    u8 bVar1;
    u32 uVar2;
    u32 cVar3;
    u32 iVar4;
    if ((param_1[2] & 0x200) == 0) {
        *(u8 *)(param_1 + 0x2b) = *(u8 *)(*(u8 **)param_1 + 1);
        bVar1 = *(u8 *)(param_1 + 0x2b);
        param_1[2] = param_1[2] | 4;
        param_1[0x2e] = (u32)(param_1 + 0x61);
        if (param_1[5] != 0) {
            cVar3 = *(u8 *)((u8 *)param_1 + 0x8e);
        } else {
            cVar3 = 0;
        }
        if (cVar3 == 1) {
            param_1[2] = param_1[2] & 0xffffffbf;
            ((void (*)(u32 *))param_1[5])(param_1);
            cVar3 = (param_1[5] != 0) ? *(u8 *)((u8 *)param_1 + 0x8e) : 0;
            uVar2 = param_1[2] & 0x40;
        } else {
            uVar2 = 0;
        }
        if (uVar2 == 0) {
            iVar4 = param_1[1];
            if (*(u32 *)(iVar4 + 0x18) == 0 || (1u << (bVar1 & 0x1f) & *(u32 *)(iVar4 + ((u32)bVar1 >> 5) * 4 + 0x4c)) == 0 ||
                (iVar4 = ((s32 (*)(u32, u32, u32))*(u32 *)(iVar4 + 0x1c))(param_1[0x2e], *(u32 *)(iVar4 + 0x18), bVar1), iVar4 == 0)) {
                *(u32 *)param_1[0x2e] = *(u8 *)(*(u8 **)param_1 + 2) & 1;
            }
        }
        if (cVar3 == 2) {
            param_1[2] = param_1[2] & 0xffffffbf;
            ((void (*)(u32 *))param_1[5])(param_1);
            cVar3 = (param_1[5] != 0) ? *(u8 *)((u8 *)param_1 + 0x8e) : 0;
            uVar2 = param_1[2] & 0x40;
        } else {
            uVar2 = 0;
        }
        if (uVar2 == 0) {
            if (*(u32 *)param_1[0x2e] != 0) {
                param_1[2] = param_1[2] | 1;
            } else {
                param_1[2] = param_1[2] & 0xfffffffe;
            }
        }
        if (cVar3 == 3) {
            param_1[2] = param_1[2] & 0xffffffbf;
            ((void (*)(u32 *))param_1[5])(param_1);
        }
    }
    *param_1 = *param_1 + 3;
}
