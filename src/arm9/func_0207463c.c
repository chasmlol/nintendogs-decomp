#include "ctx.h"

extern u8 data_02152d94[];
extern u8 data_02152d24[];
extern u8 data_02152e08[];
extern u8 data_02152cd8[];
extern u8 data_02152e38[];
extern void func_02066cd4(void *a, void *b, void *c);
extern void func_020672ac(void *a, void *b, int c, int d, int e);
extern s64 func_02066ef4(void *a, void *b);

s64 func_0207463c(void)
{
    func_02066cd4(data_02152d94, data_02152d24, data_02152e08);
    func_020672ac(data_02152e08, data_02152e08, *(int *)(data_02152cd8 + 0xec),
                  *(int *)(data_02152cd8 + 0xf0), *(int *)(data_02152cd8 + 0xf4));
    return func_02066ef4(data_02152e08, data_02152e38);
}
