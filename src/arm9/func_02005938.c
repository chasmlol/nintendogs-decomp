#include "ctx.h"

extern u8 data_0214e858[];
extern u8 data_0214e77c[];
extern void func_02005d78(u8 *a, u32 b);
extern void func_02007c10(void);
extern void func_0206833c(u32 a, s32 b);

void func_02005938(void)
{
    func_02005d78(data_0214e858, 0);
    func_02005d78(data_0214e77c, 1);
    func_02007c10();
    func_0206833c(0x0400006c, *(s16 *)(data_0214e858 + 24));
    func_0206833c(0x0400106c, *(s16 *)(data_0214e77c + 24));
}
