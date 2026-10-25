#include "ctx.h"

typedef struct {
    s16 idx;
    s16 state;
    s16 next;
    s16 pad6;
    s32 f8;
    s32 count;
    s32 f10;
    s32 f14;
    s32 f18;
    s32 f1c;
    s32 f20;
    s32 f24;
    s32 f28;
    s32 f2c;
    s32 f30;
    u8 pad34[0xc144 - 0x34];
    s32 c144;
    s32 c148;
    s32 c14c;
    s32 c150;
    s32 c154;
    s32 c158;
    s32 c15c;
} OvState;

extern OvState *data_ov001_0215e260;
extern u8 *data_0215be48;
extern u8 data_0214f004[];
extern u8 data_ov001_0215dfbc[];
extern u8 data_ov001_0215e024[];
extern s32 func_020039d8(void);
extern void func_02108e24(s32 a);
extern s32 func_02085d0c(s32 a, s32 b, s32 c);
extern void func_020a2284(s32 a, s32 b);
extern void func_02003ca0(s32 a);
extern void func_0209fa4c(s32 a);
extern s32 func_02003a7c(void);
extern void func_ov001_0215d808(void);
extern void func_ov001_0215d70c(void);
extern void func_ov001_0215d5f0(void);

void func_ov001_0215c8fc(void)
{
    s32 bVar2;
    s32 iVar3;
    u32 uVar4;

    data_ov001_0215e260->state = data_ov001_0215e260->next;
    switch (data_ov001_0215e260->state) {
    case 0:
        if (func_020039d8() != 0) {
            data_ov001_0215e260->next = 1;
        }
        break;
    case 1:
        func_02108e24(1);
        if (*(s32 *)(data_0215be48 + 0x48b8) == 1) {
            data_ov001_0215e260->next = 5;
            return;
        }
        iVar3 = -1;
        {
            u16 w = *(u16 *)(data_0214f004 + 2);
            u8 d0 = data_0214f004[0];
            u8 d1 = data_0214f004[1];
            if ((w & 2) != 0) {
                iVar3 = func_02085d0c(data_ov001_0215e260->c15c, d0, d1);
            }
        }
        if (iVar3 == 1 && data_ov001_0215e260->count > 0) {
            data_ov001_0215e260->f18 = 0;
            data_ov001_0215e260->f2c = 1;
            data_ov001_0215e260->f10 = data_ov001_0215e260->count - 1;
            data_ov001_0215e260->next = 2;
            func_020a2284(0x47, 2);
            func_02108e24(0);
            func_02108e24(0);
        }
        if (iVar3 == 0) {
            if (data_ov001_0215e260->count < (s32)(data_ov001_0215dfbc[data_ov001_0215e260->idx] - 1)) {
                data_ov001_0215e260->f18 = 1;
                data_ov001_0215e260->f30 = 1;
                data_ov001_0215e260->f10 = data_ov001_0215e260->count + 1;
                data_ov001_0215e260->next = 2;
                func_020a2284(0x47, 3);
                func_02108e24(0);
                func_02108e24(0);
            }
        }
        break;
    case 2:
        data_ov001_0215e260->f20 -= 0x2aaa;
        if (data_ov001_0215e260->f20 <= 0) {
            data_ov001_0215e260->f20 = 0;
            uVar4 = (data_ov001_0215e024 + data_ov001_0215e260->idx * 14)[data_ov001_0215e260->f10];
            if (data_ov001_0215e260->c144 != uVar4) {
                data_ov001_0215e260->c154 = uVar4;
                data_ov001_0215e260->c158 = 0;
            }
            data_ov001_0215e260->next = 3;
        }
        break;
    case 3:
        bVar2 = 1;
        if (data_ov001_0215e260->f18 == 0) {
            data_ov001_0215e260->f1c += 0xcccc;
            if (data_ov001_0215e260->f1c < 0x100000) {
                bVar2 = 0;
            } else {
                data_ov001_0215e260->f1c = 0x100000;
                data_ov001_0215e260->f2c = 0;
            }
        } else {
            data_ov001_0215e260->f1c -= 0xcccc;
            if (data_ov001_0215e260->f1c <= -0x100000) {
                data_ov001_0215e260->f1c = -0x100000;
                data_ov001_0215e260->f30 = 0;
            } else {
                bVar2 = 0;
            }
        }
        data_ov001_0215e260->f24 -= 0xcccc;
        iVar3 = data_ov001_0215e260->f24;
        if (iVar3 <= -0x28000) {
            data_ov001_0215e260->f24 = -0x28000;
        } else {
            bVar2 = 0;
        }
        data_ov001_0215e260->f28 += 0xcccc;
        if (data_ov001_0215e260->f28 < 0x28000) {
            bVar2 = 0;
        } else {
            data_ov001_0215e260->f28 = 0x28000;
        }
        if (bVar2) {
            data_ov001_0215e260->count = data_ov001_0215e260->f10;
            func_ov001_0215d808();
            data_ov001_0215e260->f1c = 0;
            data_ov001_0215e260->next = 4;
        }
        break;
    case 4:
        data_ov001_0215e260->f20 += 0x2aaa;
        bVar2 = 1;
        if (data_ov001_0215e260->f20 >= 0x10000) {
            data_ov001_0215e260->f20 = 0x10000;
        } else {
            bVar2 = 0;
        }
        if (data_ov001_0215e260->count > 0) {
            data_ov001_0215e260->f24 += 0xcccc;
            if (data_ov001_0215e260->f24 >= 0) {
                data_ov001_0215e260->f24 = 0;
            } else {
                bVar2 = 0;
            }
        }
        if (data_ov001_0215e260->count < (s32)(data_ov001_0215dfbc[data_ov001_0215e260->idx] - 1)) {
            data_ov001_0215e260->f28 -= 0xcccc;
            if (data_ov001_0215e260->f28 <= 0) {
                data_ov001_0215e260->f28 = 0;
            } else {
                bVar2 = 0;
            }
        }
        if (bVar2) {
            data_ov001_0215e260->f18 = -1;
            data_ov001_0215e260->next = 1;
        }
        break;
    case 5:
        if (*(s32 *)(data_0215be48 + 0x48bc) == 1) {
            func_02003ca0(0x1e);
            func_0209fa4c(0x1e);
        }
        if (func_02003a7c() != 0) {
            data_ov001_0215e260->f8 = 1;
        }
        break;
    }
    func_ov001_0215d70c();
    func_ov001_0215d5f0();
}
