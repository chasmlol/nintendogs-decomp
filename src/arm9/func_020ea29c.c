#pragma avoid_byte strb
#include "ctx.h"

extern u32 data_0215be34;
extern void func_020bdd1c(u8 *p, u32 v);
extern u8 *func_020038b8(u8 *p, u32 v);
extern u32 *func_0208122c(s32 a, u32 b, u8 *c);
extern void func_020ea198(void);
extern void func_020e9d94(void);
extern void func_020ea20c(void);

static inline void SwapByte(u32 v, u8 *p) { *(u8 *)(p) = (u8)(v); }

void func_020ea29c(u8 *param_1, u8 *param_2, s32 param_3)
{
    u8 *obj;
    u32 *puVar6;
    s32 iVar4;
    u32 *piVar5;
    s16 st;

    func_020bdd1c(param_1, (s16)param_3);
    *(void **)(param_1 + 500) = (void *)func_020ea198;
    *(void **)(param_1 + 0x1f8) = (void *)func_020e9d94;
    *(void **)(param_1 + 0x1f0) = (void *)func_020ea20c;
    obj = func_020038b8(param_2, 8);
    *(u8 **)(param_1 + 0x214) = obj;
    puVar6 = *(u32 * volatile *)(param_1 + 0x214);
    if ((u32)puVar6 == 0) {
        goto after;
    }
    {
        iVar4 = 0;
        *puVar6 = 0;
        st = *(s16 *)(param_1 + 0x94);
        if (st == 0x6b) {
            goto c1;
        }
        if (st == 0x6c) {
            goto c2;
        }
        if (st != 0x6d) {
            goto end;
        }
        goto c3;
c1:
        iVar4 = (data_0215be34 != 0) ? (s32)*(u32 *)data_0215be34 : 0;
        piVar5 = func_0208122c(iVar4, 9, param_1 + 0xbc);
        puVar6[1] = (u32)piVar5;
        goto end;
c2:
        iVar4 = (data_0215be34 != 0) ? (s32)*(u32 *)data_0215be34 : 0;
        piVar5 = func_0208122c(iVar4, 10, param_1 + 0xbc);
        puVar6[1] = (u32)piVar5;
        goto end;
c3:
        iVar4 = (data_0215be34 != 0) ? (s32)*(u32 *)data_0215be34 : 0;
        piVar5 = func_0208122c(iVar4, 8, param_1 + 0xbc);
        puVar6[1] = (u32)piVar5;
    }
after:
end:
    *(u32 *)(param_1 + 0x124) = 0x19a;
    *(u32 *)(param_1 + 0xac) = 0xbb8;
    *(u32 *)(param_1 + 0xf8) = 0xe6a;
    *(u32 *)(param_1 + 0xfc) = 0xdc6;
    *(u32 *)(param_1 + 0x100) = 0x1806;
    *(u32 *)(param_1 + 0x104) = 0xdc6;
    SwapByte(2, param_1 + 0x160);
    *(u32 *)(param_1 + 0x128) = 0;
    *(u32 *)(param_1 + 0x12c) = 0;
    *(u32 *)(param_1 + 0x108) = 0x1806;
    *(u32 *)(param_1 + 0x10c) = 0x1806;
    *(u32 *)(param_1 + 0x110) = 0x29;
    *(u32 *)(param_1 + 0x114) = 0x6e3;
    *(u32 *)(param_1 + 0x118) = 0x300c;
    *(u32 *)(param_1 + 0x11c) = 0x300c;
}
