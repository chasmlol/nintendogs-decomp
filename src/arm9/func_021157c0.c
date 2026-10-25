#include "ctx.h"

extern u8 *data_0215be48;
extern u8 data_0214f004[];

extern s32 func_021179b0(u8 *p, s32 a, s32 b);
extern void func_0210442c(void);
extern void func_0210443c(void);
extern void func_0210440c(void);
extern void func_02117804(u8 *p);
extern void func_02108e24(s32 a);
extern s32 func_02112320(s32 a, s32 b, s32 c);
extern s32 func_020bc14c(void);
extern void func_020bbfe8(void);
extern void func_021043dc(void);
extern void func_020bc004(s32 a);
extern void func_021043ec(void);
extern s32 func_01ffdb08(s32 a);
extern u8 *func_0202817c(s32 a);
extern s32 func_020953bc(u8 *a);
extern void func_021044fc(void);
extern void func_02116714(u8 *p);

#define OTHERS_LOOP(SELF)                                              \
    do {                                                               \
        s32 k_ = 0;                                                    \
        u8 *a_ = p + 0xcc;                                             \
        u8 *b_ = p + 0x180;                                            \
        do {                                                           \
            if ((SELF) != a_) {                                        \
                func_02117804(a_);                                     \
            }                                                          \
            if ((SELF) != b_) {                                        \
                func_02117804(b_);                                     \
            }                                                          \
            k_ = k_ + 1;                                               \
            a_ = a_ + 0x3c;                                            \
            b_ = b_ + 0x3c;                                            \
        } while (k_ < 3);                                              \
        func_02108e24(0);                                              \
    } while (0)

void func_021157c0(u8 *p)
{
    s32 iVar2;
    s32 iVar5;
    s32 bVar8;
    s32 r;
    s32 uVar3;
    s16 uVar4;

    *(s32 *)(p + 0x1cbc) = 0;
    if (*(s32 *)(data_0215be48 + 0x4860) != 0 && (*(u16 *)(data_0214f004 + 2) & 2) != 0) {
        uVar3 = (s16)(s32)*(vu8 *)data_0214f004;
        uVar4 = (s16)(s32)*(vu8 *)(data_0214f004 + 1);
        r = func_02112320(2, uVar3, uVar4);
        switch (r) {
        case 8:
            func_021179b0(p + 0x90, uVar3, uVar4);
            func_021044fc();
            break;
        case 0:
            iVar2 = func_021179b0(p + 0x54, uVar3, uVar4);
            if (iVar2 != 0) {
                func_0210442c();
                if (p + 0x54 != p + 0x18) {
                    func_02117804(p + 0x18);
                }
                if (p + 0x54 != p + 0x90) {
                    func_02117804(p + 0x90);
                }
                OTHERS_LOOP(p + 0x54);
            }
            break;
        case 7:
            iVar2 = func_021179b0(p + 0x18, uVar3, uVar4);
            if (iVar2 != 0) {
                func_0210443c();
                if (p + 0x18 != p + 0x54) {
                    func_02117804(p + 0x54);
                }
                if (p + 0x18 != p + 0x90) {
                    func_02117804(p + 0x90);
                }
                OTHERS_LOOP(p + 0x18);
            }
            break;
        case 1:
            iVar2 = func_021179b0(p + 0xcc, uVar3, uVar4);
            if (iVar2 != 0 && *(s32 *)(p + 0xc) != 0) {
                iVar2 = func_020bc14c();
                if (iVar2 == 0) {
                    func_020bbfe8();
                    func_021043dc();
                } else {
                    func_020bc004(0);
                    func_021043ec();
                }
            }
            break;
        case 2:
            iVar2 = func_021179b0(p + 0x108, uVar3, uVar4);
            if (iVar2 != 0 && *(s32 *)(p + 0x10) != 0) {
                iVar2 = func_020bc14c();
                if (iVar2 == 1) {
                    func_020bbfe8();
                    func_021043dc();
                } else {
                    func_020bc004(1);
                    func_021043ec();
                }
            }
            break;
        case 3:
            iVar2 = func_021179b0(p + 0x144, uVar3, uVar4);
            if (iVar2 != 0 && *(s32 *)(p + 0x14) != 0) {
                iVar2 = func_020bc14c();
                if (iVar2 == 2) {
                    func_020bbfe8();
                    func_021043dc();
                } else {
                    func_020bc004(2);
                    func_021043ec();
                }
            }
            break;
        case 4:
            bVar8 = 0;
            iVar2 = func_01ffdb08(0);
            if (iVar2 != 0) {
                u8 *q = func_0202817c(iVar2);
                if (*(u16 *)(q + 0x78) != 0) {
                    iVar5 = func_020953bc(q);
                    if (iVar5 != 0) {
                        bVar8 = 1;
                    } else {
                        bVar8 = 0;
                        if (*(s32 *)(q + 0x640) != 0xffff || *(s32 *)(q + 0x644) != 0xffff) {
                            bVar8 = 1;
                        }
                    }
                }
            }
            if (bVar8 != 0) {
                iVar2 = func_021179b0(p + 0x180, uVar3, uVar4);
                if (iVar2 != 0) {
                    func_0210440c();
                    if (p + 0x180 != p + 0x18) {
                        func_02117804(p + 0x18);
                    }
                    if (p + 0x180 != p + 0x54) {
                        func_02117804(p + 0x54);
                    }
                    if (p + 0x180 != p + 0x90) {
                        func_02117804(p + 0x90);
                    }
                    OTHERS_LOOP(p + 0x180);
                }
            }
            break;
        case 5:
            bVar8 = 0;
            iVar2 = func_01ffdb08(1);
            if (iVar2 != 0) {
                u8 *q = func_0202817c(iVar2);
                if (*(u16 *)(q + 0x78) != 0) {
                    iVar5 = func_020953bc(q);
                    if (iVar5 != 0) {
                        bVar8 = 1;
                    } else {
                        bVar8 = 0;
                        if (*(s32 *)(q + 0x640) != 0xffff || *(s32 *)(q + 0x644) != 0xffff) {
                            bVar8 = 1;
                        }
                    }
                }
            }
            if (bVar8 != 0) {
                iVar2 = func_021179b0(p + 0x1bc, uVar3, uVar4);
                if (iVar2 != 0) {
                    func_0210440c();
                    if (p + 0x1bc != p + 0x18) {
                        func_02117804(p + 0x18);
                    }
                    if (p + 0x1bc != p + 0x54) {
                        func_02117804(p + 0x54);
                    }
                    if (p + 0x1bc != p + 0x90) {
                        func_02117804(p + 0x90);
                    }
                    OTHERS_LOOP(p + 0x1bc);
                }
            }
            break;
        case 6:
            bVar8 = 0;
            iVar2 = func_01ffdb08(2);
            if (iVar2 != 0) {
                u8 *q = func_0202817c(iVar2);
                if (*(u16 *)(q + 0x78) != 0) {
                    iVar5 = func_020953bc(q);
                    if (iVar5 != 0) {
                        bVar8 = 1;
                    } else {
                        bVar8 = 0;
                        if (*(s32 *)(q + 0x640) != 0xffff || *(s32 *)(q + 0x644) != 0xffff) {
                            bVar8 = 1;
                        }
                    }
                }
            }
            if (bVar8 != 0) {
                iVar2 = func_021179b0(p + 0x1f8, uVar3, uVar4);
                if (iVar2 != 0) {
                    func_0210440c();
                    if (p + 0x1f8 != p + 0x18) {
                        func_02117804(p + 0x18);
                    }
                    if (p + 0x1f8 != p + 0x54) {
                        func_02117804(p + 0x54);
                    }
                    if (p + 0x1f8 != p + 0x90) {
                        func_02117804(p + 0x90);
                    }
                    OTHERS_LOOP(p + 0x1f8);
                }
            }
            break;
        }
    }
    if (*(s32 *)(data_0215be48 + 0x5128) == 1) {
        func_02117804(p + 0x18);
        func_02117804(p + 0x54);
        func_02117804(p + 0x90);
        {
            s32 k_ = 0;
            u8 *a_ = p + 0xcc;
            u8 *b_ = p + 0x180;
            do {
                func_02117804(a_);
                func_02117804(b_);
                k_ = k_ + 1;
                a_ = a_ + 0x3c;
                b_ = b_ + 0x3c;
            } while (k_ < 3);
        }
    }
    func_02116714(p);
}
