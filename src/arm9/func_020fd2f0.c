#pragma opt_dead_assignments off
#include "ctx.h"
#pragma opt_propagation off

extern u8 data_0215be48[];
#define BASE (*(u8 **)data_0215be48)
extern u8 data_0214f004[];

void func_020fd9e0(void);
u32 func_0210e954(void);
void func_0210b780(s32 a, s32 b, u16 *c, u32 d, u32 e);
void func_02113d64(u32 *a);
void func_02113ce8(s32 *a);
void func_02113ae8(s32 *a);
void func_02111c64(u32 a);
void func_02111dfc(u32 a, u32 b);
void func_0210167c(u32 a);
void func_021012b0(void);
void func_0207c910(u32 a, u32 b, u32 c, u32 d);

#define UPD(BASEOFF, LIM, SH)                                                  \
    do {                                                                        \
        u8 *t_ = BASE + 0x1dec;                                                \
        u16 *pu_ = *(u16 **)(BASE + 0x1de8);                                   \
        u8 *s_ = (u8 *)((u32)t_ + (BASEOFF));                                  \
        if (func_0210e954() != 0) {                                            \
            if (*(s32 *)(s_ + 0xc) != 0) {                                     \
                if (*(s32 *)(s_ + 8) != 0) {                                   \
                    func_0210b780(*(s32 *)(s_ + 0xc), *(s32 *)(s_ + 8), pu_,   \
                                  (u32)((u32)(BASE + 0x283c) + (LIM)),         \
                                  (*(u32 *)(BASE + (SH))) >> 7);               \
                }                                                              \
            }                                                                  \
        }                                                                      \
    } while (0)

#define TAIL(SKIP)                                                             \
    do {                                                                        \
        u8 *t3_ = BASE + 0x1dec;                                               \
        s32 *piVar4_;                                                          \
        s32 *piVar3_;                                                          \
        u32 *p7bc_;                                                            \
        piVar3_ = (s32 *)(t3_ + 0x528);                                        \
        p7bc_ = (u32 *)(t3_ + 0x7bc);                                          \
        piVar4_ = piVar3_ + 9;                                                 \
        if (*(s32 *)p7bc_ != 0) {                                              \
            func_02113d64(p7bc_);                                              \
        }                                                                      \
        switch (*(s32 *)(BASE + 0xb8)) {                                       \
        case 10:                                                               \
        case 35:                                                               \
        case 41:                                                               \
        case 42:                                                               \
            SKIP;                                                              \
        }                                                                      \
        if (*piVar3_ != 0) {                                                   \
            func_02113ce8(piVar3_);                                            \
        }                                                                      \
        if (*piVar4_ != 0) {                                                   \
            func_02113ae8(piVar4_);                                            \
        }                                                                      \
    } while (0)


void func_020fd2f0(void)
{
    s32 st;
    s32 k30, k32, k35;

    st = *(s32 *)(BASE + 0xb8);
    if (st == 1 || st == 35) {
        func_020fd9e0();
        return;
    }
    if (st == 42) {
        func_020fd9e0();
        UPD(0x7bc, 0x1800, 0x4848);
        TAIL(return);
        return;
    }
    if (st == 10 || st == 41) {
        if ((*(u16 *)(data_0214f004 + 2) & 1) == 0) goto Lz1;
        func_02111dfc(data_0214f004[0], data_0214f004[1]);
        func_02111c64(1);
        goto La1;
Lz1:
        func_02111c64(0);
La1:
        func_020fd9e0();
        UPD(0x7bc, 0x1800, 0x4848);
        TAIL(return);
        return;
    }
    if ((*(u16 *)(data_0214f004 + 2) & 1) == 0) goto Lz2;
    func_02111dfc(data_0214f004[0], data_0214f004[1]);
    func_02111c64(1);
    goto La2;
Lz2:
    func_02111c64(0);
La2:
    func_020fd9e0();
    UPD(0x7bc, 0x1800, 0x4848);
    UPD(0x528, 0x1000, 0x4844);
    TAIL(goto Lloop);
Lloop:
    { u8 **pb; u8 *e; s32 i; pb = (u8 **)data_0215be48; e = *pb + 0x1dec; e = e + 0x528; e = e + 0x48;  i = 0; do {  if (*(s32 *)e != 0) { *(s32 *)e = 0; k35 = 35; k30 = 30; k32 = 32;  func_0207c910(35, *(u32 *)(*pb + 0x4844) + ((u32)*(s32 *)(e + 0x18) << 7), *(u32 *)(e + 4), *(u32 *)(e + 0x14));  func_0207c910(k30, (u32)*(s32 *)(e + 0x1c) << 5, *(u32 *)(e + 0x10), k32); } e = e + 32; i = i + 1; pb = (u8 **)data_0215be48; } while (i < 18); }
    func_0210167c(0);
    func_021012b0();
}

