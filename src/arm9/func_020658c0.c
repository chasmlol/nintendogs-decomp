#include "ctx.h"

typedef struct {
    u8 pad0[0x30];
    u32 f30;
    u32 f34;
    u32 f38;
    u8 f3c[0x94];
    u32 fd0;
} Obj;

typedef struct {
    u8 pad0[8];
    u32 f8;
} Obj2;

extern Obj data_02150600;
extern Obj2 data_02155cf8;

u32 func_0207f2c8(u32 v);
void func_0207f2d0(u8 *p, u32 v);
void func_0207f4ac(u8 *p, u32 v);

void func_020658c0(u32 param_1)
{
    Obj *o;
    u32 uVar2;

    o = &data_02150600;
    uVar2 = o->f38;
    switch (uVar2) {
    case 32:
        uVar2 = func_0207f2c8(data_02155cf8.f8);
        if (uVar2 != 0) {
            uVar2 = uVar2 - 1;
        }
        break;
    case 33:
        uVar2 = func_0207f2c8(data_02155cf8.f8);
        if (uVar2 < 31) {
            uVar2 = uVar2 + 1;
        }
        break;
    }
    func_0207f2d0(o->f3c, uVar2);
    o->fd0 = (u32)o->f3c;
    o->f30 = param_1;
    uVar2 = o->f34 | 8;
    o->f34 = uVar2;
    func_0207f4ac(o->f3c, uVar2);
}
