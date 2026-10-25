#include "ctx.h"

extern u8 data_0214efdc[];
extern s32 *data_ov011_0215d324;
extern void func_ov011_0215c6cc(void);
extern void func_02003df8(u32 a);
extern void func_0200413c(void);
extern void func_ov011_0215c0e4(void);
extern void func_ov011_0215c0c8(void);
extern s32 func_02003a10(void);
extern void func_02003fb4(void);
extern void func_0208cb94(s32 a);
extern void func_02003efc(void);
extern void func_02003d00(u32 a);
extern void func_02003ab0(u32 a, u32 b);
extern u64 func_0208e36c(void);
extern void func_0208b9b0(s32 a, s32 b);
extern void func_0208d18c(void);
extern void func_02004280(void);
extern void func_020068a4(void);
extern void func_02006348(u32 a, u32 b, u32 c);

s32 func_ov011_0215c000(void)
{
    BOOL bVar1;
    s32 iVar4;
    u64 uVar5;

    bVar1 = TRUE;
    func_ov011_0215c6cc();
    func_02003df8(30);
    do {
        func_0200413c();
        func_ov011_0215c0e4();
        iVar4 = func_02003a10();
        if (iVar4 != 0 && (u16)(*(u16 *)data_0214efdc & 8) != 0) {
            bVar1 = FALSE;
        }
        func_02003fb4();
        func_0208cb94(data_ov011_0215d324[1]);
        func_02003efc();
    } while (bVar1);
    func_02003d00(60);
    func_02003ab0((u32)func_ov011_0215c0e4, (u32)func_ov011_0215c0c8);
    uVar5 = func_0208e36c();
    func_0208b9b0((s32)uVar5, (s32)(uVar5 >> 32));
    func_0208d18c();
    func_02004280();
    func_020068a4();
    data_ov011_0215d324 = 0;
    func_02006348(0, 0, 0);
    return 0;
}
