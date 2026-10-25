#include "ctx.h"

extern u8 data_02159074[];
extern u8 data_0212fdb4[];
extern u8 data_02159148[];

extern s32 func_0209aa18(void);
extern void func_0209ad94(void);
extern void func_02072d28(u32 a, s32 *b);
extern s32 func_02071f78(s32 a, u32 b, u32 c, u32 d, u32 e);
extern s32 func_0209aab0(void);
extern void func_020e0394(s32 a, s32 b, u32 c, u32 d, u32 e, u32 f);
extern void func_020e1294(s32 a, u32 b, u32 c);
extern void func_020a1f08(u32 a, u32 b, u32 c);
extern void func_020a2284(u32 a, u32 b);
extern void func_020a2c00(void);
extern s32 func_01ffdb08(s32 a);
extern s32 func_02035570(s32 a);
extern s32 func_02027060(s32 a);
extern void func_020a3938(s32 a);

void func_0209c5b0(s32 p1)
{
    u8 bVar1;
    s32 *piVar7;
    s32 iv3;
    s32 iv4;
    s32 uVar6;
    s32 bVar2;
    s16 k;

    piVar7 = *(s32 **)(data_02159074 + 4);
    if (p1 == 4 && func_0209aa18() == 0 && *(s32 *)(data_02159074 + 0x30) == 0) {
        p1 = 5;
    }
    bVar1 = data_0212fdb4[p1];
    *(u16 *)(data_02159148 + 2) = (u16)p1;
    func_0209ad94();
    func_02072d28(bVar1, piVar7);
    if (bVar1 == 101) {
        iv3 = func_02071f78(*(s32 *)(data_02159074 + 4), 0x13950, 0, 0, 0);
        iv4 = func_0209aab0();
        func_020e0394(iv3, iv4, 78, 0, 13, 1);
        func_020e1294(func_0209aab0(), 78, 1);
    }
    k = 0;
    do {
        func_020a1f08(k + 31, 1, 0);
        k = k + 1;
    } while (k < 6);
    func_020a2284(p1 + 31, 1);
    func_020a2c00();
    k = 0;
    do {
        uVar6 = func_01ffdb08(k);
        if (uVar6 != 0) {
            bVar2 = func_02035570(uVar6);
            if (bVar2 == 0) {
                if (func_02027060(uVar6) == 0) {
                    func_020a3938(uVar6);
                }
            }
        }
        k = k + 1;
    } while (k < 3);
}
