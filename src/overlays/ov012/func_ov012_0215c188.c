#include "ctx.h"

extern u8 *data_ov012_0215c720;
extern u8 data_0214f004[];
extern void func_0208f6ac(u32 a);
extern void func_0206c7f0(u32 a, u32 b, u32 c);
extern void func_020fcf7c(void);
extern void func_02080d84(u32 *a);

void func_ov012_0215c188(void)
{
    u32 auStack_18[2];
    vu32 local_10;
    vu32 local_c;
    u8 *puVar4;
    s32 iVar3;
    u8 bVar1;

    func_0208f6ac(*(u32 *)data_ov012_0215c720);
    puVar4 = *(u8 **)(data_ov012_0215c720 + 0x1c);
    *(u16 *)(puVar4 + 2) = 0;
    local_10 = 0xc0;
    func_0206c7f0(local_10, *(u32 *)(puVar4 + 4), (u32)*(u16 *)puVar4 << 3);
    puVar4 = *(u8 **)(data_ov012_0215c720 + 0x20);
    *(u16 *)(puVar4 + 2) = 0;
    local_c = 0xc0;
    func_0206c7f0(local_c, *(u32 *)(puVar4 + 4), (u32)*(u16 *)puVar4 << 3);
    func_020fcf7c();
    iVar3 = (*(u16 *)(data_0214f004 + 2) & 1) != 0;
    *(s32 *)(data_ov012_0215c720 + 0xc) = iVar3;
    if (*(s32 *)(data_ov012_0215c720 + 0xc) != 0) {
        bVar1 = *(vu8 *)(data_0214f004 + 1);
        *(u32 *)(data_ov012_0215c720 + 0x10) = *(vu8 *)data_0214f004;
        *(u32 *)(data_ov012_0215c720 + 0x14) = bVar1;
    }
    func_02080d84(auStack_18);
}
