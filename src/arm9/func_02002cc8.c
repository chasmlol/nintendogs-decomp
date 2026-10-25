#include "ctx.h"

extern u16 data_0214e6dc;
extern u32 data_0214e6f4[2];
extern u32 data_0214e6ec;
extern u32 data_0214e704;
extern u32 data_0214e718;
extern void func_0206cc88(void);
extern s32 func_0206ce6c(s32 a, s32 b);
extern void func_0206ce94(s32 a, u32 b);
extern void func_02002bdc(void);
extern void func_02080054(u32 a);

typedef struct {
    u16 a;
    u16 b;
    u32 c;
} Ent;

void func_02002cc8(void)
{
    s32 i;
    u32 z;

    if (data_0214e6dc != 0) {
        return;
    }
    data_0214e6dc = 1;
    data_0214e6f4[0] = 0;
    data_0214e6f4[1] = 0;
    func_0206cc88();
    do {
    } while (func_0206ce6c(8, 1) == 0);
    func_0206ce94(8, (u32)func_02002bdc);
    i = 0;
    z = i;
    do {
        ((Ent *)&data_0214e718)[i].a = z;
        i = i + 1;
    } while (i < 4);
    func_02080054((u32)&data_0214e704);
    *(u32 *)&data_0214e6ec = *(u32 *)0x027ffc3c;
}
