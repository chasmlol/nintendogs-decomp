#include "ctx.h"

extern u32 data_0215b734;
extern u32 data_0215b768;
extern u32 data_0215b73c;
extern u32 data_0215b754;
extern u32 data_0215b738;
extern u32 data_0215b740;
extern u32 data_0215b730;
extern u32 data_0215b77c;
extern u32 data_0215be10;
extern void func_020e218c(void);

extern void func_0207fe04(void *a, void *b, u32 c);
extern void func_0207f618(void *a, void *b, u32 c, void *d, u32 e, u32 f);
extern void func_0207f4ac(void *p);

void func_020e20d0(void)
{
    if (data_0215b734 != 0) {
        return;
    }
    func_0207fe04(&data_0215b768, &data_0215b73c, 1);
    func_0207fe04(&data_0215b754, &data_0215b738, 1);
    func_0207fe04(&data_0215b740, &data_0215b730, 1);
    func_0207f618(&data_0215b77c, (void *)func_020e218c, 0, &data_0215be10, 0x600, 0x18);
    func_0207f4ac(&data_0215b77c);
    data_0215b734 = 1;
}
