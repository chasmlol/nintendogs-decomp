#include "ctx.h"

extern u8 data_02152768[];
extern s16 data_0212ad78[];

void func_020732dc(u8 *p);
void func_02070e58(u8 *p);
void func_020735d4(u8 *p);
s32 func_020735ec(u8 *p);
void func_02070db4(u8 *p, s32 a);
s32 func_020735bc(u8 *p);

void func_0207341c(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    s32 t;
    s32 u;
    s32 i;
    s32 s;
    u8 *p;
    s16 *tab;
    s32 v;
    s32 bVar3;

    p = data_02152768;
    i = 0;
    do {
        v = *(s32 *)(p + 0x10c);
        if (((s32)(v << 31) >> 31) != 0) {
            if (*(s32 *)(p + 0x110) == 0) {
                func_020732dc(p);
            } else {
                if (((s32)(v << 29) >> 31) != 0 && *(s32 *)(p + 0x114) != 0) {
                    func_02070e58(p);
                    *(u32 *)(p + 0x10c) = *(u32 *)(p + 0x10c) | 2;
                    *(u32 *)(p + 0x10c) = *(u32 *)(p + 0x10c) & 0xfffffffb;
                }
                if (((s32)(*(s32 *)(p + 0x10c) << 30) >> 31) != 0) {
                    func_020735d4(p + 0xe4);
                    tab = data_0212ad78;
                    s = tab[*(s32 *)(p + 0x150)];
                    v = func_020735ec(p + 0xe4);
                    t = tab[v >> 8];
                    u = t + s;
                    if (u != *(s32 *)(p + 0x154)) {
                        func_02070db4(p, u);
                        *(s32 *)(p + 0x154) = u;
                    }
                    if ((((s32)(*(s32 *)(p + 0x10c) << 28) >> 31) != 0) && (bVar3 = func_020735bc(p + 0xe4), bVar3)) {
                        func_020732dc(p);
                    }
                }
            }
        }
        i = i + 1;
        p = p + 348;
    } while (i < 4);
}
