#include "ctx.h"

typedef struct {
    u32 a;
    u32 b;
    u32 c;
} Triple;

extern u32 *data_0214f464;
extern int func_020f5220(void);
extern void func_020f3bdc(u32);
extern void func_02039448(int);
extern void func_02067e68(int, Triple *, int);
extern void func_02037450(int, int);
extern void func_0203e908(int, int);

void func_ov004_021647f0(int param_1)
{
    Triple local;
    u32 uVar2;

    *(u32 *)(param_1 + 0x484) = 0;
    *(u32 *)(param_1 + 0x2a0) = *(u32 *)(param_1 + 0x2a0) - *(u32 *)(param_1 + 0x484);
    *(u32 *)(param_1 + 0x3f0) = *(u32 *)(param_1 + 0x3f0) - *(u32 *)(param_1 + 0x484);
    *(u32 *)(param_1 + 0x3fc) = *(u32 *)(param_1 + 0x3fc) - *(u32 *)(param_1 + 0x484);
    *(u32 *)(param_1 + 0x488) = *(u32 *)(param_1 + 0x488) + 1;
    if (func_020f5220() != 0) {
        func_020f3bdc(*(u32 *)(param_1 + 0x484));
    }
    local = *(Triple *)(param_1 + 0x490);
    func_02039448(param_1);
    func_02067e68(param_1 + 0x2a0, &local, param_1 + 0x278);
    func_02037450(param_1, 0x300);
    uVar2 = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = uVar2;
    if ((u16)((u32)(u16)uVar2 * 30 >> 16) == 0) {
        func_0203e908(param_1, 0x49c);
    }
}
