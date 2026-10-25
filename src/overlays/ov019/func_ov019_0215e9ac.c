#include "ctx.h"

extern s32 func_ov019_0215cca8(s32 a);
extern s32 func_ov019_0215c9b4(s32 a, void *b, u32 c);
extern s32 func_ov019_0215cbc0(s32 a);
extern void func_ov019_0215cb10(s32 a, void *b);
extern void func_02067e34(void *a, void *b, void *c);
extern BOOL func_02009eb8(void *a, void *b);

void func_ov019_0215e9ac(u8 *param_1)
{
    BOOL bVar1;
    s32 iVar2;
    s32 iVar3;
    u32 buf[9];
    u32 v1, v2, v3;

    iVar2 = func_ov019_0215cca8((s16)*(s16 *)(param_1 + 44));
    if (iVar2 == 0) {
        return;
    }
    iVar3 = func_ov019_0215c9b4(iVar2, *(u8 **)(param_1 + 0xac) + 0x18, 0x19a);
    if (iVar3 == 0) {
        return;
    }
    iVar3 = func_ov019_0215cbc0(iVar2);
    if (iVar3 != 3) {
        return;
    }
    func_ov019_0215cb10(iVar2, buf);
    v1 = *(u32 *)(param_1 + 0x68);
    v2 = *(u32 *)(param_1 + 0x64);
    v3 = *(u32 *)(param_1 + 0x60);
    buf[3] = v3;
    buf[4] = v2;
    buf[5] = v1;
    func_02067e34(param_1 + 60, buf, buf + 6);
    bVar1 = func_02009eb8(buf + 3, buf + 6);
    if (bVar1) {
        *(u16 *)(*(u8 **)(param_1 + 0xac) + 6) = 0x200;
    } else {
        *(u16 *)(*(u8 **)(param_1 + 0xac) + 6) = 0xfe00;
    }
    *(u16 *)(param_1 + 30) = 6;
}
