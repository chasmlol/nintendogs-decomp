#include "ctx.h"

extern u32 data_02155cf8;
u32 func_02080b08(u16 *p);
void func_02080b1c(u32 irq);
void func_0207fe70(u32 v, u16 *p);
void func_0207f554(u16 *p);

void func_0207ffc8(u16 *param_1)
{
    u32 irq;
    u32 iVar2;

    irq = func_02080b08(param_1);
    iVar2 = *(u32 *)((u8 *)&data_02155cf8 + 8);
    do {
        if (*(u32 *)((u8 *)param_1 + 4) == 0) {
            *(u32 *)((u8 *)param_1 + 4) = iVar2;
            *(u32 *)((u8 *)param_1 + 8) = *(u32 *)((u8 *)param_1 + 8) + 1;
            func_0207fe70(iVar2, param_1);
            break;
        }
        if (*(u32 *)((u8 *)param_1 + 4) == iVar2) {
            *(u32 *)((u8 *)param_1 + 8) = *(u32 *)((u8 *)param_1 + 8) + 1;
            break;
        }
        *(u16 **)(iVar2 + 0x78) = param_1;
        func_0207f554(param_1);
        *(u32 *)(iVar2 + 0x78) = 0;
    } while (1);
    func_02080b1c(irq);
}
