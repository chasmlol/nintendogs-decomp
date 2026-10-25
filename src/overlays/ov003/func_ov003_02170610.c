#pragma avoid_byte strb
#include "ctx.h"

extern void func_0202675c(u8 *p);
extern void func_020255a4(u8 *p);
extern void func_02034198(u8 *p);
extern void func_02107ea0(void);
extern void *data_0215942c;

typedef struct { u8 pad[0x152]; u16 s0; u8 pad2[2]; u16 s1; } Lo;

typedef struct {
    u8 pad[0x948];
    u32 flags;
} Obj;

void func_ov003_02170610(u8 *p)
{
    u32 fl;
    Lo *l = (Lo *)p;
    l->s0 = 18;
    l->s1 = 1;
    *(u8 *)(p + 147) = 5;
    *(u8 *)(p + 152) = 1;
    func_0202675c(p);
    func_020255a4(p);
    fl = ((Obj *)p)->flags;
    ((Obj *)p)->flags = fl | 1;
    func_02034198(p);
    if (*(u16 *)data_0215942c == 1) {
        func_02107ea0();
    }
}
