#pragma avoid_byte strb
#include "ctx.h"

typedef struct {
    u8 pad0[0x93];
    u8 f93;
    u8 pad1[3];
    u8 f97;
    u8 f98;
    u8 pad2[0x152 - 0x99];
    u16 f152;
    u16 f154;
    u16 f156;
    u8 pad4[0x948 - 0x158];
    u32 f948;
} Obj;

extern void func_02026bac(Obj *o);
extern void func_02025490(Obj *o);

void func_ov003_0216ebb0(Obj *param_1)
{
    u32 one;
    param_1->f152 = 0xa5;
    param_1->f154 = 0x15;
    one = 1;
    param_1->f156 = (u16)one;
    param_1->f93 = 8;
    param_1->f97 = (u8)one;
    param_1->f98 = 6;
    func_02026bac(param_1);
    func_02025490(param_1);
    param_1->f948 |= 0x10;
}
