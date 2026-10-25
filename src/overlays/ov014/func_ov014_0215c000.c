#pragma avoid_byte strb
#include "ctx.h"

extern u8 data_0214efdc[];
extern u8 *data_ov014_0215c7c0;
extern void func_ov014_0215c450(void);
extern void func_02003df8(s32 a);
extern void func_0200413c(void);
extern void func_ov014_0215c118(void);
extern s32 func_02003a10(void);
extern void func_02003fb4(void);
extern void func_0208010c(u32 a, u32 b);
extern void func_02007354(u32 a, s32 b, s32 c);
extern void func_02003efc(void);
extern void func_02003d00(s32 a);
extern void func_02003ab0(u32 a, u32 b);
extern void func_0208e36c(void);
extern void func_02004280(void);
extern u64 func_020068a4(void);
extern void func_0208c564(u64 v);
extern void func_ov014_0215c0d0(void);

u32 func_ov014_0215c000(void)
{
    s32 bVar1;
    s32 iVar4;

    bVar1 = 1;
    func_ov014_0215c450();
    func_02003df8(30);
    do {
        func_0200413c();
        func_ov014_0215c118();
        iVar4 = func_02003a10();
        if (iVar4 != 0 && (u16)(*(u16 *)data_0214efdc & 8) != 0) {
            bVar1 = 0;
        }
        func_02003fb4();
        func_0208010c(**(u32 **)(data_ov014_0215c7c0 + 0x398), (*(u32 **)(data_ov014_0215c7c0 + 0x398))[4]);
        func_02007354(*(u32 *)(data_ov014_0215c7c0 + 0x398), 0, 0);
        func_02003efc();
    } while (bVar1);
    func_02003d00(60);
    func_02003ab0((u32)func_ov014_0215c118, (u32)func_ov014_0215c0d0);
    func_0208e36c();
    func_02004280();
    func_0208c564(func_020068a4());
    data_ov014_0215c7c0 = 0;
    return 0;
}
