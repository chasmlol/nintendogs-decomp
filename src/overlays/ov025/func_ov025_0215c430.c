#pragma avoid_byte strb
#include "ctx.h"

extern u32 data_ov025_0215c750;
extern u16 data_0214efdc[];
extern void func_ov025_0215c530(void);
extern void func_02003df8(s32 a);
extern void func_0200413c(void);
extern void func_0208f6ac(s32 a);
extern void func_ov025_0215c000(void);
extern void func_020d7e44(void);
extern s32 func_02003a10(void);
extern void func_02003fb4(void);
extern void func_02003efc(void);
extern void func_02003d00(s32 a);
extern void func_02003ab0(void *a, void *b);
extern void func_020d7fd4(void);
extern void func_0208e36c(void);
extern void func_02004280(void);
extern void func_020068a4(void);
extern void func_ov025_0215c500(void);
extern void func_ov025_0215c4fc(void);

u32 func_ov025_0215c430(void)
{
    u32 g;
    u16 *puVar2;
    s32 bVar1;
    s32 iVar4;

    bVar1 = 1;
    func_ov025_0215c530();
    func_02003df8(0x1e);
    puVar2 = data_0214efdc;
    g = (u32)&data_ov025_0215c750;
    do {
        func_0200413c();
        func_0208f6ac(*(s32 *)*(u32 *)g);
        func_ov025_0215c000();
        func_020d7e44();
        iVar4 = func_02003a10();
        if (iVar4 != 0 && (u16)(*puVar2 & 8) != 0 && (u16)(puVar2[1] & 4) != 0) {
            bVar1 = 0;
        }
        func_02003fb4();
        func_02003efc();
    } while (bVar1);
    func_02003d00(0x3c);
    func_02003ab0((void *)func_ov025_0215c500, (void *)func_ov025_0215c4fc);
    func_020d7fd4();
    func_0208e36c();
    func_02004280();
    func_020068a4();
    data_ov025_0215c750 = 0;
    return 0;
}
