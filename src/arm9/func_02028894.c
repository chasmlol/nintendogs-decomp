#include "ctx.h"

typedef struct {
    u32 w[3];
} Vec3;

extern u32 data_0214f460;
extern u8 *data_02159428;
extern u8 *data_02159444;
extern s16 data_02126868[];

extern int func_020aaeb8(u32 a, int b);
extern void func_020aae7c(u32 a, u32 *b, int c);
extern void func_020aae68(u32 a, u32 *b);
extern void func_020bc024(int *p);
extern int func_02068078(int a, int b);

void func_02028894(u8 *param_1, u32 *param_2, u32 *param_3)
{
    int iVar3;
    int iVar4;
    s64 lVar1;
    int sVar2;
    int local_20[3];

    iVar3 = func_020aaeb8(data_0214f460, *(s8 *)(param_1 + 0x88));
    if (iVar3 != -1) {
        func_020aae7c(data_0214f460, param_2, *(s8 *)(param_1 + 0x88));
        if (param_3 != NULL) {
            func_020aae68(data_0214f460, param_3);
            return;
        }
        return;
    }
    func_020bc024(local_20);
    sVar2 = func_02068078(local_20[0], local_20[2]);
    iVar4 = *(int *)(data_02159428 + 0xc) - 0x2008;
    lVar1 = (s64)iVar4 * (s64)data_02126868[(sVar2 >> 4) * 2] + 0x800;
    param_2[0] = (u32)(lVar1 >> 12);
    param_2[1] = 0;
    lVar1 = (s64)iVar4 * (s64)data_02126868[(sVar2 >> 4) * 2 + 1] + 0x800;
    param_2[2] = (u32)(lVar1 >> 12);
    if (param_3 != NULL) {
        iVar3 = *(int *)(data_02159444 + 0x1c);
        *(Vec3 *)param_3 = *(Vec3 *)(iVar3 + 0x30);
        return;
    }
}
