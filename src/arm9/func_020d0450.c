#include "ctx.h"

extern u8 *data_021594a8;
extern u8 data_02142e74[];
extern u8 data_021594ac[];
extern void func_020d1214(u8 *p);
extern void func_020d14e8(u32 a, u32 b, u32 *buf);
extern void func_020d04a8(u8 *a, u8 *b);

void func_020d0450(void)
{
    u32 buf[11];
    func_020d1214(data_021594a8);
    func_020d14e8(*(u32 *)(data_021594a8 + 0x38), *(u32 *)(data_021594a8 + 8), buf);
    *(u32 *)(data_02142e74 + 0x28) = buf[10];
    func_020d04a8(data_02142e74, data_021594ac);
}
