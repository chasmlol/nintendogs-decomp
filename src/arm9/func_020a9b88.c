#include "ctx.h"

extern u32 data_02159070;
extern u8 *data_02159064;

u8 *func_020955c0(u32 a);
void func_0200719c(u32 *a, s32 *b);
s32 func_020927e0(u8 *p);
void func_02092140(u8 *p, u32 *a, s32 *b);
void func_020971e8(void);
s32 func_02093e58(void);
void func_020ae674(void);
void func_0209320c(u32 a);
u8 func_02093d68(void);
void func_020df53c(u32 a);
s32 func_02093c2c(void);
u32 func_0209531c(void);

void func_020a9b88(u8 *param_1)
{
    s32 iVar11;
    u32 auStack_44[4];
    u8 *puVar8;
    s32 aiStack_34[4];
    u32 uVar10;
    int bVar6;
    s32 bVar7;

    iVar11 = 0;
    do {
        puVar8 = func_020955c0(iVar11);
        if (*(u16 *)puVar8 != 0xffff) {
            func_0200719c(auStack_44, aiStack_34);
            if (func_020927e0(puVar8 + 0x7f8) != 0) {
                func_02092140(puVar8 + 0x7f8, auStack_44, aiStack_34);
            }
            if (func_020927e0(0x834 + puVar8) != 0) {
                func_02092140(0x834 + puVar8, auStack_44, aiStack_34);
            }
            if (func_020927e0(puVar8 + 0x848) != 0) {
                func_02092140(0x848 + puVar8, auStack_44, aiStack_34);
            }
        }
        iVar11 = (s16)(1 + iVar11);
    } while (iVar11 < 3);
    func_020971e8();
    if (func_02093e58() != 0) {
        func_020ae674();
    }
    func_0209320c(data_02159070);
    bVar6 = func_02093d68();
    func_020df53c(bVar6);
    bVar7 = func_02093c2c();
    if (bVar7 != 0) {
        *(u16 *)data_02159064 = *(u16 *)data_02159064 | 1;
        *(u32 *)(data_02159064 + 8) = 0;
    } else {
        *(u16 *)data_02159064 = *(u16 *)data_02159064 & ~1;
    }
    uVar10 = func_0209531c();
    *(u32 *)(param_1 + 0x28) = uVar10;
    *(u16 *)(4 + param_1) = 0xd;
    *(u16 *)(param_1 + 6) = 0;
}
