#include "ctx.h"

extern u8 *data_02159060;
extern u8 *data_0215be48;
extern u8 data_0214f004[];
extern u8 *data_02159424;

extern void func_02108e24(u32);
extern s32 func_02112320(s32, u32, u32);
extern s32 func_020930a4(void);
extern void func_02097b94(u32, u32, u32, u32, u32);
extern void func_02112798(s32, s32, s32);
extern s32 func_0209561c(void);
extern void func_02107c60(void);
extern void func_02097b68(void);
extern void func_020a1a40(u32);

typedef struct Ctx {
    s32 f0;
    s32 cnt;
    s32 f8;
    s32 flag;
    s32 state;
    u8 gap14[0x1c18 - 0x14];
    u16 h1c18;
    u16 h1c1a;
} Ctx;

void func_02122c90(s32 param_1)
{
    Ctx *p = (Ctx *)param_1;
    s32 *piVar5;
    u32 bVar1;
    u32 bVar2;
    s32 bVar3;
    s32 iVar4;

    piVar5 = (s32 *)((u8 *)p + 0x1cf4);
    switch (p->state) {
    case 0:
    case 1:
    case 2:
        break;
    case 3:
        bVar3 = 1;
        if (*(s16 *)(data_02159060 + 0x6c) != 1 && *(s16 *)(data_02159060 + 0x6c) != 8) {
            bVar3 = 0;
        }
        if (bVar3) {
            func_02108e24(0);
            return;
        }
        func_02108e24(1);
        if (*(s32 *)(data_0215be48 + 0x48b8) == 1) {
            p->state = 6;
            return;
        }
        if (*(s32 *)(data_0215be48 + 0x4860) == 0) {
            return;
        }
        bVar1 = data_0214f004[0];
        bVar2 = data_0214f004[1];
        iVar4 = func_02112320(2, bVar1, bVar2);
        if ((*(u16 *)(data_0214f004 + 2) & 2) != 0) {
            switch (iVar4) {
            case 0:
                iVar4 = func_020930a4();
                if (iVar4 == 0) {
                    p->flag = 1;
                    func_02097b94(8, 0x2520, 0, 0, 0);
                }
                func_02112798(2, 4, 1);
                *piVar5 = 0;
                break;
            case 1:
                iVar4 = func_0209561c();
                if (iVar4 <= 1) {
                    p->flag = 1;
                    func_02097b94(8, 0x251e, 0, 0, 0);
                } else {
                    iVar4 = func_020930a4();
                    if (iVar4 >= 5) {
                        p->flag = 1;
                        func_02097b94(8, 0x251f, 0, 0, 0);
                    }
                }
                func_02112798(2, 5, 1);
                *piVar5 = 1;
                break;
            case 2:
                iVar4 = func_020930a4();
                if (iVar4 == 0) {
                    p->flag = 1;
                    func_02097b94(8, 0x2520, 0, 0, 0);
                } else {
                    iVar4 = func_0209561c();
                    if (iVar4 >= 3) {
                        p->flag = 1;
                        func_02097b94(8, 0x2521, 0, 0, 0);
                    }
                }
                func_02112798(2, 6, 1);
                *piVar5 = 2;
                break;
            case 3:
                iVar4 = func_0209561c();
                if (iVar4 <= 1 && (iVar4 = func_020930a4(), iVar4 == 0)) {
                    p->flag = 1;
                    func_02097b94(8, 0x2522, 0, 0, 0);
                }
                func_02112798(2, 7, 1);
                *piVar5 = 3;
            }
        }
        if (*piVar5 == -1) {
            return;
        }
        p->state = 4;
        func_02108e24(0);
        func_020a1a40(0x22);
        p->h1c18 = bVar1;
        p->h1c1a = bVar2;
        return;
    case 4:
        p->cnt = p->cnt + 1;
        if (p->cnt <= 10) {
            return;
        }
        func_02112798(2, 4, 0);
        func_02112798(2, 5, 0);
        func_02112798(2, 6, 0);
        func_02112798(2, 7, 0);
        p->cnt = 0;
        p->state = 5;
        return;
    case 5:
        p->cnt = p->cnt + 1;
        if (p->cnt <= 10) {
            return;
        }
        p->cnt = 0;
        if (p->flag != 0) {
            p->flag = 0;
            p->state = 3;
            *piVar5 = -1;
            return;
        }
        func_02107c60();
        func_02097b68();
        return;
    case 6:
        if (*(s32 *)(data_0215be48 + 0x48bc) == 1) {
            *(s32 *)(*(s32 *)(data_02159424 + 4) + 0x1c) = 1;
        }
        break;
    }
}
