#include "ctx.h"

extern vu16 data_0214efdc;
extern u8 *data_ov021_0215c6a0;
extern u8 data_0214f004[];

typedef struct { s32 x; s32 y; } Vec2;
typedef volatile s32 vs32;

void func_ov021_0215c31c(Vec2 *a, Vec2 *b, s32 *c, s32 d);
void func_0206c7f0(u32 a, u32 *b, u32 c);
void func_02006c14(u16 *a, u16 *b, s32 *c, s32 *d, u32 e, u32 f);

void func_ov021_0215c110(void)
{
    Vec2 a;
    Vec2 b;
    vu32 local_8;
    s32 *piVar1;
    s32 iVar2;
    s32 iVar3;
    s32 i;
    u16 *puVar4;

    if ((u16)(data_0214efdc & 0x40) != 0) {
        iVar3 = *(s32 *)(data_ov021_0215c6a0 + 4) + 1;
        *(s32 *)(data_ov021_0215c6a0 + 4) = iVar3 % 3;
    }
    if ((u16)(data_0214efdc & 4) != 0) {
        piVar1 = (s32 *)data_ov021_0215c6a0;
        if (*piVar1 != 0) {
            *piVar1 = 0;
        } else {
            *piVar1 = 1;
        }
    }
    if ((*(u16 *)(data_0214f004 + 2) & 1) != 0) {
        a.x = (u32)data_0214f004[0] << 12;
        a.y = (u32)data_0214f004[1] << 12;
        iVar3 = (s32)data_ov021_0215c6a0;
        switch (*(s32 *)(iVar3 + 4)) {
        case 1:
            func_ov021_0215c31c(&b, &a, (s32 *)(iVar3 + 0x24), 1);
            *(s32 *)(data_ov021_0215c6a0 + 0x1c) = a.x + b.x;
            *(s32 *)(data_ov021_0215c6a0 + 0x20) = a.y + b.y;
            break;
        case 2:
            func_ov021_0215c31c(&b, &a, (s32 *)(iVar3 + 0x24), 5);
            *(s32 *)(data_ov021_0215c6a0 + 0x1c) = a.x + b.x;
            *(s32 *)(data_ov021_0215c6a0 + 0x20) = a.y + b.y;
            break;
        default: {
            s32 t = a.y;
            *(s32 *)(iVar3 + 0x1c) = a.x;
            *(s32 *)(iVar3 + 0x20) = t;
            break;
        }
        }
        i = 1;
        iVar3 = (s32)data_ov021_0215c6a0;
        do {
            s32 v0;
            s32 v1;
            iVar2 = iVar3 + (u32)i * 8;
            v0 = *(vs32 *)(iVar2 + 0x1c);
            v1 = *(vs32 *)(iVar2 + 0x20);
            i = i + 1;
            *(s32 *)(iVar2 + 0x24) = v0;
            *(s32 *)(iVar2 + 0x28) = v1;
        } while (i < 5);
        {
            s32 x = *(vs32 *)&a.x;
            s32 y = *(vs32 *)&a.y;
            *(s32 *)(iVar3 + 0x24) = x;
            *(s32 *)(iVar3 + 0x28) = y;
        }
    }
    puVar4 = *(u16 **)(data_ov021_0215c6a0 + 8);
    puVar4[1] = 0;
    local_8 = 0xc0;
    func_0206c7f0(local_8, *(u32 **)(puVar4 + 2), (u32)puVar4[0] << 3);
    iVar3 = (s32)data_ov021_0215c6a0;
    func_02006c14(*(u16 **)(iVar3 + 8), *(u16 **)(iVar3 + 0x18), (s32 *)0, (s32 *)(iVar3 + 0x1c), 0, 0);
}
