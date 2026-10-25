#include "ctx.h"

typedef struct { u8 pad0[0x14]; u32 f14; u8 pad1[0x30]; s32 f48; s16 f4c; } Obj;
extern u32 data_0215be50;
extern void func_020940f8(u8 *buf);
extern BOOL func_020d72a0(void);
extern BOOL func_020d7d04(void);
extern s32 func_02093db8(void);
extern void func_021044bc(void);
extern void func_02112798(u32 a, u32 b, u32 c);

void func_02102fc4(Obj *p)
{
    u8 buf[88];
    u32 v = 0;
    u32 flag = 0;
    func_020940f8(buf);
    if ((s8)buf[40] != 0) {
        if (func_020d72a0() || func_020d7d04()) {
            if (p->f48 == 0) p->f4c = 120;
            *(s16 *)&data_0215be50 = 600;
            if (func_02093db8() == 1) func_021044bc();
        }
        if (*(s16 *)&data_0215be50 > 0) {
            *(s16 *)&data_0215be50 = *(s16 *)&data_0215be50 - 1;
            p->f48 = 1;
        } else {
            p->f48 = 0;
        }
        v = p->f14;
        p->f4c = p->f4c - 1;
        flag = (v == 0);
        if (p->f4c < 0) {
            if (p->f48 != 0) p->f4c = 120;
            else p->f4c = 0;
            v = 0;
            flag = 0;
        } else if (p->f4c <= 15) {
            v = 0;
            flag = 0;
        }
    }
    func_02112798(3, 36, v);
    func_02112798(1, 36, flag);
}
