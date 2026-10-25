#include "ctx.h"

extern u8 data_0214f64c[];
extern u8 data_02155cf8[];
extern u8 data_0214f578[];
extern u8 data_0214f59c[];
extern u32 data_0214f974[];
extern s32 func_0207fe94(u8 *a);
extern void func_0207ffc8(u8 *a);
extern u64 func_0207ff58(u8 *a);
extern u64 func_0205e83c(int a, int b);

s32 func_02062198(int param_1)
{
    int iVar1;
    int iVar2;
    int iVar3;
    u32 pcVar3;
    u64 uVar4;
    int junk2;
    int junk3;
    int junk4;

    if (param_1 < 1 || param_1 > 7) {
        return -1;
    }
    iVar1 = func_0207fe94(data_0214f64c);
    if (iVar1 == 0) {
        iVar3 = *(s32 *)(*(s32 *)(data_02155cf8 + 8) + 0x6c);
        *(s32 *)(data_0214f578 + 0x1c) = iVar3;
        *(s32 *)(data_0214f59c + 0x1c) = 1;
    } else if (*(s32 *)(data_0214f578 + 0x1c) == *(s32 *)(*(s32 *)(data_02155cf8 + 8) + 0x6c)) {
        u8 *pq = data_0214f59c;
        *(vu32 *)(pq + 0x1c) = *(vu32 *)(pq + 0x1c) + 1;
    } else {
        func_0207ffc8(data_0214f64c);
        iVar3 = *(s32 *)(*(s32 *)(data_02155cf8 + 8) + 0x6c);
        *(s32 *)(data_0214f578 + 0x1c) = iVar3;
        *(s32 *)(data_0214f59c + 0x1c) = 1;
    }
    pcVar3 = data_0214f974[param_1 - 1];
    iVar2 = (param_1 - 1) * 4;
    if (pcVar3 != 1) {
        data_0214f974[param_1 - 1] = 0;
    }
    iVar1 = *(s32 *)(data_0214f59c + 0x1c) - 1;
    *(s32 *)(data_0214f59c + 0x1c) = iVar1;
    if (iVar1 == 0) {
        iVar1 = (s32)(func_0207ff58(data_0214f64c) >> 32);
    }
    if (pcVar3 == 1 || (pcVar3 == 0 && param_1 == 1)) {
        return 0;
    }
    if (pcVar3 == 0) {
        uVar4 = func_0205e83c(0, iVar1);
        iVar1 = (s32)(uVar4 >> 32);
    }
    ((void (*)(int, int))pcVar3)(param_1, iVar1);
    return 0;
}
