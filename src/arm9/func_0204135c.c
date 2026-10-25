#pragma avoid_byte strb
#include "ctx.h"

typedef struct Sub {
    u8 pad0[0x18];
    s16 f18;
    u16 f1a;
    u16 f1c;
    u8 pad1[4];
    u16 f22;
    u16 f24;
} Sub;

typedef struct Obj {
    u8 pad0[0xd2];
    vu8 lock;
    u8 pad1[0x488 - 0xd3];
    s32 counter;
    u8 pad2[0x9e8 - 0x48c];
    Sub *sub;
} Obj;

extern s32 func_02041408(Obj *p);

void func_0204135c(Obj *param_1)
{
    s32 iVar1;
    param_1->counter = 0;
    iVar1 = func_02041408(param_1);
    switch (iVar1) {
    case 1:
        param_1->counter = param_1->counter + 2;
        break;
    case 0:
        param_1->counter = param_1->counter + 3;
        break;
    case 2:
        param_1->counter = param_1->counter + 1;
        break;
    }
    param_1->lock = 1;
    param_1->sub->f18 = 10000;
    param_1->lock = 1;
    param_1->sub->f1c = 0;
    param_1->lock = 1;
    param_1->sub->f24 = 0;
    param_1->lock = 1;
    param_1->sub->f1a = 0;
    param_1->lock = 1;
    param_1->sub->f22 = 0;
}
