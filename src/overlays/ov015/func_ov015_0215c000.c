#include "ctx.h"

extern u8 data_0214efdc[];
extern s32 data_ov015_0215caec;
extern void func_ov015_0215c47c(void);
extern void func_02003df8(s32 a);
extern void func_0200413c(void);
extern void func_ov015_0215c0a4(void);
extern void func_ov015_0215c0a0(void);
extern s32 func_02003a10(void);
extern void func_02003fb4(void);
extern void func_02003efc(void);
extern void func_02003d00(s32 a);
extern void func_02003ab0(void *a, void *b);
extern void func_0208e36c(void);
extern void func_02004280(void);
extern void func_020068a4(void);
extern void func_020e9078(void);

s32 func_ov015_0215c000(void)
{
    BOOL bVar1;
    s32 iVar3;

    bVar1 = TRUE;
    func_ov015_0215c47c();
    func_02003df8(30);
    do {
        func_0200413c();
        func_ov015_0215c0a4();
        iVar3 = func_02003a10();
        if (iVar3 != 0 && (u16)(*(u16 *)data_0214efdc & 8) != 0) {
            bVar1 = FALSE;
        }
        func_02003fb4();
        func_02003efc();
    } while (bVar1);
    func_02003d00(60);
    func_02003ab0((void *)func_ov015_0215c0a4, (void *)func_ov015_0215c0a0);
    func_0208e36c();
    func_02004280();
    func_020068a4();
    data_ov015_0215caec = 0;
    func_020e9078();
    return 0;
}
