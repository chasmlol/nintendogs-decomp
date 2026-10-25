#include "ctx.h"

extern u8 *data_02159424;

extern u32 func_0209536c(void);
extern u32 func_020931a8(u32 a);
extern void func_0206c7d4(u32 a, u8 *b, u32 c);
extern void func_02095578(u8 *a, u32 b);
extern void func_02095670(u8 *a);
extern void func_02093160(u8 *a, u32 b);
extern void func_02094aa4(u8 *a, u32 b, u32 c);
extern void func_02094a48(u8 *a, u32 b, u32 c);
extern void func_0206c7bc(u32 a, u8 *b, u32 c);
extern void func_020949ec(u8 *a, u32 b, u32 c);
extern void func_0209493c(u8 *a, u32 b, u32 c);
extern void func_020948e0(u8 *a, u32 b, u32 c);
extern void func_02094884(u8 *a, u32 b, u32 c);

void func_020a4a54(u32 p)
{
    u32 sv;
    u32 iv1;
    u8 *puVar5;
    u32 iv2;
    vu16 z1;
    vu16 z2;
    u32 i;

    iv1 = func_0209536c();
    puVar5 = *(u8 **)(data_02159424 + 0x30);
    iv2 = func_020931a8(p);
    func_0206c7d4(iv2, puVar5, 0x85c);
    sv = iv1;
    func_02095578(puVar5, sv);
    func_02095670(puVar5);
    func_02093160(puVar5, p);
    i = 0;
    do {
        func_02094aa4(puVar5 + 0x85c, p, i);
        func_02094a48(puVar5 + 0x85c, sv, i);
        z1 = 0;
        func_0206c7bc(z1, puVar5 + 0x85c, 0x13c);
        func_020949ec(puVar5 + 0x85c, p, i);
        func_0209493c(puVar5 + 0x998, p, i);
        func_020948e0(puVar5 + 0x998, sv, i);
        z2 = 0;
        func_0206c7bc(z2, puVar5 + 0x998, 64);
        func_02094884(puVar5 + 0x998, p, i);
        i = (s16)(i + 1);
    } while ((s32)i < 20);
}
