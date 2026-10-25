#include "ctx.h"

extern u8 data_0214f004[];
extern u8 data_02126868[];
extern s32 func_02112320(s32 a, s32 b, s32 c);
extern void func_02112978(s32 a, s32 b, s32 c, s32 d);
extern void func_021128a8(s32 a, s32 b, s32 c);
extern void func_021041b8(void);
extern void func_021041a8(void);
extern s32 func_ov005_021648dc(void);
extern s32 func_0205d668(s32 a);
extern s32 func_0205ce00(s32 a, s32 b);
extern s32 func_0205be28(s32 a, s32 b);
extern s32 func_0205c454(s32 a, s32 b);
extern s32 func_0205d734(s32 a, s32 b);
extern s32 func_0205dc20(s32 a, s32 b);
extern s32 func_0205d4f0(s32 a);

void func_02114ac8(u32 *param_1)
{
    u16 uVar1;
    s32 iVar2;
    s32 bVar;
    u32 uVar3;
    u32 uVar4;

    iVar2 = func_02112320(0, *(u8 *)data_0214f004, *(u8 *)(data_0214f004 + 1));
    uVar1 = *(u16 *)(data_0214f004 + 2);
    bVar = (uVar1 & 2) != 0;
    param_1[0] = 0;
    if (bVar) {
        switch (iVar2) {
        case 0:
            param_1[1] = 2;
            param_1[0] = 2;
            func_02112978(0, 0, 2, 2);
            func_021128a8(0, 0, 0);
            param_1[3] = 10;
            func_021041b8();
            break;
        case 1:
            param_1[1] = 1;
            param_1[0] = 1;
            func_02112978(0, 1, 2, 2);
            func_021128a8(0, 0, 1);
            param_1[3] = 10;
            func_021041b8();
            break;
        }
    }
    if (0 < (s32)param_1[3]) {
        param_1[3] = param_1[3] - 1;
        if ((s32)param_1[3] <= 0) {
            func_02112978(0, 0, 0, 0);
            func_02112978(0, 1, 0, 0);
        }
    }
    if (param_1[1] == 1) {
        param_1[4] = 0;
    } else if (param_1[4] == 0 && func_ov005_021648dc() != 0) {
        param_1[4] = 1;
    }
    if (param_1[4] != 0) {
        uVar3 = func_0205d668(*(s16 *)(data_02126868 + ((*(u16 *)(param_1 + 5) >> 4) * 4)));
        uVar3 = func_0205ce00(uVar3, 0x45800000);
        uVar3 = func_0205be28(0x45800000, uVar3);
        uVar3 = func_0205ce00(uVar3, 0x40000000);
        uVar4 = func_0205c454(uVar3, 0);
        if (uVar4 != 0) {
            uVar3 = func_0205d734(0x45800000, uVar3);
            uVar3 = func_0205be28(0x3f000000, uVar3);
    } else {
        uVar3 = func_0205d734(0x45800000, uVar3);
        uVar3 = func_0205dc20(uVar3, 0x3f000000);
    }
    uVar3 = func_0205d4f0(uVar3);
    param_1[6] = ((s32)(uVar3 + ((u32)((s32)uVar3 >> 1) >> 30)) >> 2) + 0x1000;
    if (*(u16 *)(param_1 + 5) == 0x8000) {
        func_021041a8();
    }
    *(u16 *)(param_1 + 5) = *(u16 *)(param_1 + 5) + 0x800;
    } else {
        param_1[6] = 0x1000;
        *(u16 *)(param_1 + 5) = 0;
    }
}
