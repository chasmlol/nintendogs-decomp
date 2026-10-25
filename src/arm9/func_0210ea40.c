#include "ctx.h"

extern u32 data_02149130[];
extern u8 data_02159010[];
extern u32 data_021486e8[];
extern u8 *data_0215bfbc;
extern u8 data_02148718[];
extern u8 data_02148728[];
extern u8 data_02148738[];
extern u8 data_02148748[];
extern u8 data_02148758[];
extern u8 data_02148768[];
extern void func_0205f050(u8 *, s32, u8 *, u32);
extern u32 *func_0208c720(u32 *, u32 *, u8 *);

void func_0210ea40(u32 param_1, s32 param_2, s32 param_3, u32 param_4)
{
    u32 auStack_50[17];
    u32 p4v;
    s32 iVar3;
    u32 *piVar2;
    u32 *piVar4;
    u32 *puVar1;

    iVar3 = 0;
    piVar2 = data_02149130;
    do {
        if (param_1 == piVar2[0]) {
            p4v = piVar2[1];
            switch (*(u16 *)(data_02159010 + 4)) {
            case 2:
                func_0205f050((u8 *)auStack_50, 0x40, data_02148718, p4v);
                break;
            case 3:
                func_0205f050((u8 *)auStack_50, 0x40, data_02148728, p4v);
                break;
            case 4:
                func_0205f050((u8 *)auStack_50, 0x40, data_02148738, p4v);
                break;
            case 5:
                func_0205f050((u8 *)auStack_50, 0x40, data_02148748, p4v);
                break;
            case 1:
                func_0205f050((u8 *)auStack_50, 0x40, data_02148758, p4v);
                break;
            case 0:
            default:
                func_0205f050((u8 *)auStack_50, 0x40, data_02148768, p4v);
                break;
            }
            break;
        }
        iVar3 = iVar3 + 1;
        piVar2 = piVar2 + 2;
    } while (iVar3 < 0x49);

    iVar3 = 0;
    piVar4 = (u32 *)(data_0215bfbc + 8);
top:
    if (piVar4[0] == param_1) {
        return;
    }
    if (piVar4[2] != 0) {
        goto inc;
    }
    piVar4[2] = data_021486e8[iVar3];
    puVar1 = func_0208c720((u32 *)*(u32 *)(data_0215bfbc + 4), (u32 *)piVar4[2], (u8 *)auStack_50);
    piVar4[1] = *(u32 *)(puVar1[0x14] + 8);
    piVar4[0] = param_1;
    piVar4[3] = (u32)puVar1;
    return;
inc:
    iVar3 = iVar3 + 1;
    piVar4 = piVar4 + 4;
    if (iVar3 < 10) {
        goto top;
    }
    return;
}
