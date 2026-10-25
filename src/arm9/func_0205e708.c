#include "ctx.h"

extern u8 data_0214f5c0[];
extern u8 data_02155cf8[];
extern u32 data_0214f578;
extern u32 data_0214f59c;
extern u32 data_0214f470;
extern void (*data_0214f478[])(void);
extern void (*data_0214f468)(void);

extern s32 func_0207fe94(u8 *p);
extern void func_0207ffc8(u8 *p);
extern void func_0207ff58(u8 *p);
extern u32 func_0205ecc0(u8 *p);
extern u32 func_02063cd0(void);

u32 func_0205e708(void)
{
    s32 iv;
    s32 i;

    iv = func_0207fe94(data_0214f5c0);
    if (iv == 0) {
        data_0214f578 = *(u32 *)(*(u8 **)(data_02155cf8 + 8) + 0x6c);
        data_0214f59c = 1;
    } else if (data_0214f578 == *(u32 *)(*(u8 **)(data_02155cf8 + 8) + 0x6c)) {
        u32 *pc = &data_0214f59c;
        *pc = *pc + 1;
    } else {
        func_0207ffc8(data_0214f5c0);
        data_0214f578 = *(u32 *)(*(u8 **)(data_02155cf8 + 8) + 0x6c);
        data_0214f59c = 1;
    }
    while ((s32)data_0214f470 > 0) {
        i = (s32)*(vu32 *)&data_0214f470 - 1;
        data_0214f470 = (u32)i;
        data_0214f478[i]();
    }
    data_0214f59c = data_0214f59c - 1;
    if (data_0214f59c == 0) {
        func_0207ff58(data_0214f5c0);
    }
    if (data_0214f468 != 0) {
        data_0214f468();
        data_0214f468 = 0;
    }
    func_0205ecc0(0);
    return func_02063cd0();
}
