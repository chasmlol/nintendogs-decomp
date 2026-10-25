#include "ctx.h"
extern u8 data_0215be48[];
extern u8 data_02147974[];
extern u8 data_02147948[];
extern u8 data_0214795c[];
extern u8 data_02147970[];
extern void func_020fc76c(u32 a, void *b, void *c, void *d, void *e);
extern void func_02104198(void);
extern void func_02003d90(u32 a);
void func_020fe3c0(u32 *param_1)
{
    *param_1 = 0;
    *(u32 *)(*(u8 **)data_0215be48 + 0xc838) = 3;
    *(u32 *)(*(u8 **)data_0215be48 + 0xc83c) = 0;
    func_020fc76c(0x2b, data_02147948, data_0214795c, data_02147970, data_02147974);
    func_02104198();
    func_02003d90(0x10);
}
