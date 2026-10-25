#include "ctx.h"

extern u32 data_0214e684;

u32 func_02080b08(void);
void func_02080b1c(u32 irq);
s32 func_0206cdb8(u32 a, u32 b, u32 c);

#define GBASE ((u8 *)&data_0214e684)

void func_02001658(void)
{
    u32 irq;
    s32 iVar2;
    u32 fn;
    u32 t;

    irq = func_02080b08();
    iVar2 = func_0206cdb8(6, 0x3000000, 0);
    t = (iVar2 >= 0) ? 1 : 0;
    if (t != 0) {
        goto then_;
    }
    func_02080b1c(irq);
    fn = *(u32 *)GBASE;
    *(u16 *)(GBASE + 0x34) = *(u16 *)(GBASE + 0x34) | 1;
    if (fn == 0) {
        return;
    }
    ((void (*)(u32, u32, u32))fn)(0, 4, 0);
    return;
then_:
    *(vu16 *)(GBASE + 0x36) = *(vu16 *)(GBASE + 0x36) | 1;
    *(vu16 *)(GBASE + 0x34) = *(vu16 *)(GBASE + 0x34) & ~1;
    func_02080b1c(irq);
}
