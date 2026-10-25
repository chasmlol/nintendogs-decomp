#include "ctx.h"

void func_02080d84(u8 *p);

u32 func_020645c4(void)
{
    int i;
    u8 *pb;
    u16 acc;
    u8 local[12];
    u16 t;
    s32 rem;

    func_02080d84(local);
    i = 0;
    acc = 0;
    pb = local;
    do {
        i = i + 1;
        acc = (u16)(acc + *pb);
        pb = pb + 1;
    } while (i < 6);
    acc = (u16)(acc + *(u32 *)0x027ffc3c);
    t = (u16)(acc * 13);
    rem = (s32)t % 10;
    return (u16)(rem + 30);
}
