#include "ctx.h"

typedef struct {
    u16 a;
    u16 pad0;
    u16 b;
    u16 c;
    u16 d;
    u16 e;
    u16 pad1;
    u16 pad2;
    u32 f;
} Obj;

extern Obj data_0214e858;
extern Obj data_0214e77c;
extern void func_02005c94(void);

void func_02003ca0(u16 param_1)
{
    data_0214e858.a = 0;
    data_0214e858.b = 3;
    data_0214e858.c = 1;
    data_0214e858.d = 0;
    data_0214e858.e = param_1;
    data_0214e858.f = (u32)func_02005c94;
    data_0214e77c.a = 0;
    data_0214e77c.b = 3;
    data_0214e77c.c = 1;
    data_0214e77c.d = 0;
    data_0214e77c.e = param_1;
    data_0214e77c.f = (u32)func_02005c94;
}
