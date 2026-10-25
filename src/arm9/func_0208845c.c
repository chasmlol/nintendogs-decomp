#include "ctx.h"

extern u32 data_02156040;
extern u32 data_02156054;

extern u32 func_02080b08(void);
extern BOOL func_02087328(u32 *a, u32 *b);
extern void func_020872ac(u32 *a, u32 *b);
extern void func_02080b1c(u32 t);

u32 func_0208845c(u32 param_1)
{
    u32 t;
    u32 old;
    BOOL bVar2;

    t = func_02080b08();
    old = data_02156040;
    bVar2 = func_02087328(&data_02156054, &data_02156040);
    data_02156040 = param_1;
    if (bVar2) {
        func_020872ac(&data_02156054, &data_02156040);
    }
    func_02080b1c(t);
    return old;
}
