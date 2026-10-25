#include "ctx.h"

extern u8 *data_02159444;
extern void func_020ad7c8(u8 *p, u32 n);
extern void func_020ad6fc(u8 *p, u32 n);
extern s32 func_020a4e44(void);
extern void func_0209fb38(s32 a, u32 b, u32 c);
extern void func_021089e0(void);

void func_020b5038(void)
{
    s32 uVar1;

    func_020ad7c8(data_02159444, 0x1c);
    func_020ad6fc(data_02159444, 0);
    uVar1 = func_020a4e44();
    if (uVar1 >= 0) {
        func_0209fb38(uVar1, 0x7f, 0);
    }
    func_021089e0();
    *(u16 *)(data_02159444 + 0x68) = 0;
}
