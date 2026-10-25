#include "ctx.h"

extern u32 data_0215900c;

u32 func_020038b8(u8 *p, s32 n);
void func_0208efac(u8 *p);
u32 func_02003500(u8 *p, s32 n);
void func_0207dc3c(u32 a, u32 b);
void func_02088364(u8 *p);
void func_02006700(u32 a, u32 b);
void func_0208dcf0(void);

u8 *func_0208dbc8(u8 *param_1)
{
    s32 m;
    u8 *obj;
    s32 i;
    u8 *q;
    s32 j;
    s32 k;

    obj = (u8 *)func_020038b8(param_1, 0x278);
    *(u16 *)obj = 0;
    *(u16 *)(obj + 2) = 0;
    func_0208efac(obj + 4);
    *(u32 *)(obj + 0x28) = func_02003500(param_1, 0xc800);
    func_0207dc3c(*(u32 *)(obj + 0x28), 0x49464348);
    i = 0;
    *(u32 *)(obj + 0x2c) = 0;
    *(u16 *)(obj + 50) = 0;
    *(u16 *)(obj + 52) = 0;
    *(u16 *)(obj + 54) = 0;
    q = obj + 56;
    j = 0;
    do {
        func_02088364(q);
        *(u32 *)(q + 0x44) = j;
        i = i + 1;
        *(u32 *)(q + 0x48) = j;
        q = q + 76;
    } while (i < 4);
    q = obj + 360;
    k = 0;
    j = 0;
    do {
        *(u16 *)q = 0;
        *(u16 *)(q + 2) = 0;
        *(u32 *)(q + 4) = 0;
        *(u32 *)(q + 8) = 0;
        j = j + 1;
        *(u32 *)(q + 0xc) = 0;
        q = q + 16;
    } while (j < 4);
    q = obj + 424;
    m = 0;
    do {
        *(u16 *)q = 0xffff;
        *(u16 *)(q + 2) = 0;
        *(u32 *)(q + 4) = 0;
        *(u32 *)(q + 8) = 0;
        m = (s16)(m + 1);
        q = q + 12;
    } while (m < 16);
    *(u32 *)(obj + 0x268) = 0;
    *(u32 *)(obj + 0x270) = 0;
    *(u32 *)(obj + 0x26c) = 0;
    *(u32 *)(obj + 0x274) = 0;
    func_02006700(7, (u32)func_0208dcf0);
    *(u32 *)&data_0215900c = (u32)obj;
    return obj;
}
