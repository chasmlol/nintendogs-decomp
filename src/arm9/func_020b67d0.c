#include "ctx.h"

extern u32 data_0215945c;
extern u32 data_02159060;
extern void func_020b69e0(void);
extern void func_020b69d4(void);

extern void func_020b6b70(void);
extern void func_02003df8(u32 a);
extern void func_0200413c(void);
extern s32 func_0209aaf0(void);
extern s32 func_02003a10(void);
extern void func_020931cc(s32 a);
extern void func_02096a4c(u32 a);
extern void func_02095a38(u32 a);
extern s32 func_020959dc(void);
extern void func_02097b94(u32 a, u32 b, u32 c, u32 d, u32 e);
extern void func_020a19dc(u32 a, u32 b);
extern void func_02003fb4(void);
extern void func_0207c990(void);
extern void func_02003efc(void);
extern void func_02003ca0(u32 a);
extern void func_02003d00(u32 a);
extern void func_02003ab0(u32 a, u32 b);
extern void func_020959d0(void);
extern u32 func_02097b40(void);
extern void func_0208c564(void);
extern void func_02090e30(void);
extern void func_020075b4(void);
extern void func_02004280(void);
extern void func_020068a4(void);
extern void func_0200277c(void);

int func_020b67d0(void)
{
    u32 loc[2];
    s16 *p9;
    s32 r8;
    s16 sVar;

    loc[0] = 67;
    loc[1] = 30;
    func_020b6b70();
    func_02003df8(30);
    do {
        func_0200413c();
        p9 = *(s16 **)&data_0215945c;
        switch (*p9) {
        case 0:
            r8 = func_0209aaf0();
            if (func_02003a10() != 0 && *(s16 *)(*(u8 **)&data_02159060 + 108) == 2) {
                p9[0] = 2;
                p9[1] = 0;
                if (r8 != 0) {
                    func_020931cc(r8);
                }
                func_02096a4c(0);
                func_02095a38(1);
            }
            break;
        case 2:
            p9[1] = p9[1] + 1;
            if (func_020959dc() != 0) {
                p9[0] = 3;
                p9[1] = 0;
            }
            break;
        case 3:
            p9[1] = p9[1] + 1;
            p9[0] = 4;
            p9[1] = 0;
            func_02097b94(0, 0x4c5, 0, 0, 0);
            func_020a19dc(loc[0], loc[1]);
            break;
        case 4:
            if (*(u32 *)(*(u8 **)&data_02159060 + 0xa4) != 0) {
                sVar = *(s16 *)(*(u8 **)&data_02159060 + 0x9a);
                if (sVar != 0) {
                    if (sVar == 1) {
                        *(u32 *)((u8 *)p9 + 4) = 0;
                    }
                } else {
                    *(u32 *)((u8 *)p9 + 4) = 1;
                }
                p9[0] = 5;
                p9[1] = 0;
                *(u32 *)((u8 *)p9 + 8) = 1;
            }
            break;
        }
        func_02003fb4();
        func_0207c990();
        func_02003efc();
    } while (*(u32 *)(*(u8 **)&data_0215945c + 8) == 0);
    if (*(u32 *)(*(u8 **)&data_0215945c + 4) != 0) {
        func_02003d00(60);
    } else {
        func_02003ca0(60);
    }
    func_02003ab0((u32)func_020b69e0, (u32)func_020b69d4);
    func_020959d0();
    func_02097b40();
    func_0208c564();
    func_02090e30();
    func_020075b4();
    func_02004280();
    func_020068a4();
    if (*(u32 *)(*(u8 **)&data_0215945c + 4) != 0) {
        func_0200277c();
    }
    *(vu32 *)&data_0215945c = 0;
    return 0;
}
