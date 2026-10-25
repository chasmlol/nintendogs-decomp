#pragma avoid_byte strb
#include "ctx.h"

extern u8 *data_02159428;
extern u8 data_027c0bb0[];
extern u8 data_02132f28[];
extern u8 data_02132f2a[];
extern u8 data_02132f2c[];
extern u8 *func_020038b8(u8 *p, s32 n);
extern void func_0208f028(u8 *p, s32 v);
extern void func_0208f544(u8 *p, u32 f);
extern void func_020e9378(void);
extern void func_020e9a54(void);
extern void func_020e946c(void);
extern u32 func_020e96b4(s32 a, s32 b);

u8 *func_020e9268(u8 *param_1, s32 param_2)
{
    u8 *puVar4;
    s32 iVar7;
    s32 o18;
    s32 o6;
    s16 r;
    s32 mode;

    mode = param_2;
    puVar4 = func_020038b8(param_1, 0x34);
    iVar7 = 0;
    func_0208f028(puVar4, mode);
    if (data_02159428 != 0 && *(u16 *)(data_02159428 + 6) == 24) {
        iVar7 = 1;
    }
    if (*(s32 *)(puVar4 + 0x24) == 0) {
        data_027c0bb0[0] = 4;
        func_020e9a54();
    }
    if (*(s32 *)(puVar4 + 0x24) == 0) {
        mode = 0;
    } else if (*(s32 *)(puVar4 + 0x24) == 1) {
        mode = 1;
    } else if (*(s32 *)(puVar4 + 0x24) == 2) {
        mode = 2;
    } else {
        mode = 0;
    }
    r = (s16)func_020e96b4(iVar7, mode);
    o18 = iVar7 * 18;
    o6 = mode * 6;
    *(s16 *)(puVar4 + 0x28) = r;
    *(s16 *)(puVar4 + 0x2a) = *(s16 *)((u32)(data_02132f28 + o18) + o6);
    *(s16 *)(puVar4 + 0x2c) = *(s16 *)((u32)(data_02132f2a + o18) + o6);
    *(s16 *)(puVar4 + 0x2e) = *(s16 *)((u32)(data_02132f2c + o18) + o6);
    if (*(s32 *)(puVar4 + 0x24) == 0) {
        func_020e946c();
    }
    func_0208f544(puVar4, (u32)func_020e9378);
    return puVar4;
}
