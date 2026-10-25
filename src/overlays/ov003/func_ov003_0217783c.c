#include "ctx.h"

extern int data_0214f460;
extern u8 data_02152cd8[];
extern u32 *data_0214f464;
extern void func_02039448(int p);
extern void func_020ab064(int a, int *b);
extern void func_01ff832c(u32 a, int *b, int *c, int *d);
extern void func_02037450(int p, int q);
extern void func_02022b7c(int p);
extern void func_ov003_02179bb8(int p, int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k);

void func_ov003_0217783c(u32 param_1)
{
    int local[3];
    u32 uVar2;
    int iVar1;
    u32 *piVar;

    func_02039448(param_1);
    func_020ab064(data_0214f460, (int *)(param_1 + 0x3b4));
    local[0] = *(int *)(data_02152cd8 + 0x4c);
    local[1] = *(int *)(data_02152cd8 + 0x58);
    local[2] = *(int *)(data_02152cd8 + 0x64);
    func_01ff832c(0x1000, local, (int *)(param_1 + 0x3b4), (int *)(param_1 + 0x278));
    func_02037450(param_1, 0x300);
    func_02022b7c(param_1);
    iVar1 = 0;
    if (*(u16 *)(param_1 + 0xfc) > 100) {
        piVar = data_0214f464;
        uVar2 = *piVar * 0x10dcd + 1;
        *piVar = uVar2;
        if ((u16)((u32)(u16)uVar2 * 60 >> 16) == 0) {
            iVar1 = 1;
        }
    }
    func_ov003_02179bb8(param_1, 0, 0x1ff, 1, 1, 1, 1, iVar1, 0x30, 0, 3, 0);
}
