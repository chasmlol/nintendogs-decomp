#include "ctx.h"

extern u8 *data_02159428;
extern u8 data_027c0bb4;
extern u8 data_02132f28[];
extern u8 data_02132f2a[];
extern u8 data_02132f2c[];
extern u32 func_020e96b4(s32, s32);
extern void func_020e9a54(void);
extern void func_020e946c(void);
extern void func_0208eff8(u8 *);

void func_020e9378(u8 *p)
{
    s32 iVar6;
    s32 iVar4;
    u32 uVar5;

    iVar6 = 0;
    if (data_02159428 != NULL && *(u16 *)(data_02159428 + 6) == 0x18) {
        iVar6 = 1;
    }
    if (data_027c0bb4 == 0 && *(s32 *)(p + 0x24) == 0) {
        func_020e9a54();
    }
    iVar4 = *(s32 *)(p + 0x24);
    if (iVar4 == 0) {
        iVar4 = 0;
    } else if (iVar4 == 1) {
        iVar4 = 1;
    } else if (iVar4 == 2) {
        iVar4 = 2;
    } else {
        iVar4 = 0;
    }
    uVar5 = func_020e96b4(iVar6, iVar4);
    iVar6 = iVar6 * 0x12;
    iVar4 = iVar4 * 6;
    *(s16 *)(p + 0x28) = (s16)uVar5;
    *(s16 *)(p + 0x2a) = *(s16 *)(data_02132f28 + iVar6 + iVar4);
    *(s16 *)(p + 0x2c) = *(s16 *)(data_02132f2a + iVar6 + iVar4);
    *(s16 *)(p + 0x2e) = *(s16 *)(data_02132f2c + iVar6 + iVar4);
    if (*(s32 *)(p + 0x24) == 0) {
        func_020e946c();
    }
    func_0208eff8(p);
}
