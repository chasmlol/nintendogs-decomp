#include "ctx.h"

extern u32 data_02159010;
extern u32 data_02159018;
extern void func_0206c7bc(u32 a, u32 b, u32 c);
extern void func_02080d08(u8 *a);

void func_0208e0d0(void)
{
    vu16 z;
    u8 local_56[82];

    z = 0;
    *(u16 *)((u8 *)&data_02159010 + 0) = 0;
    *(u16 *)((u8 *)&data_02159010 + 2) = 0;
    *(u16 *)((u8 *)&data_02159010 + 4) = 1;
    func_0206c7bc(z, (u32)&data_02159018, 8);
    func_02080d08(local_56);
    switch (local_56[0]) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        *(u16 *)((u8 *)&data_02159010 + 4) = (u16)local_56[0];
        break;
    }
}
