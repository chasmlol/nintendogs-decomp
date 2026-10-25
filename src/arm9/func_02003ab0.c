#include "ctx.h"

extern u8 *data_0214e778;
extern u32 data_0213695c[];
extern u8 data_0214e858[];
extern u8 data_0214e77c[];
extern u64 func_02080858(void);
extern void func_0206a514(void);
extern void func_02003fb4(void);
extern u32 func_0205e068(u32, u32, u32, u32);

void func_02003ab0(void (*param_1)(void), void (*param_2)(void))
{
    u8 *iVar4;
    u8 *iVar5;
    u64 t;
    u64 t2;
    s64 lv;

    do {
        iVar4 = data_0214e778;
        t = func_02080858();
        *(u64 *)(iVar4 + 0xc4) = t;
        if (*(u16 *)(iVar4 + 10) == 1) {
            func_0206a514();
        }
        ((void (*)(void))data_0213695c[0])();
        param_1();
        func_02003fb4();
        if (param_2 != NULL) {
            param_2();
        }
        ((void (*)(void))data_0213695c[3])();
        t2 = func_02080858();
        *(s32 *)(data_0214e778 + 0x28) = *(s32 *)(data_0214e778 + 0x28) + 1;
        iVar5 = data_0214e778;
        lv = (s64)(t2 - *(u64 *)(iVar5 + 0xcc)) * 64000;
        *(u32 *)(iVar5 + 0xd8) = func_0205e068((u32)lv, (u32)(lv >> 32), 0x82ea, 0);
        iVar5 = data_0214e778;
        lv = (s64)(t2 - *(u64 *)(iVar5 + 0xc4)) * 64000;
        *(u32 *)(iVar5 + 0xdc) = func_0205e068((u32)lv, (u32)(lv >> 32), 0x82ea, 0);
    } while (*(u16 *)(data_0214e858 + 4) != 0 || *(u16 *)(data_0214e77c + 4) != 0);
}
