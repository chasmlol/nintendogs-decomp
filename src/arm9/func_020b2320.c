#include "ctx.h"

extern u8 *data_02159424;
extern u8 *data_02159444;
extern u8 *data_0215942c;

s32 func_02003a10(void);
void func_021089e0(void);
s32 func_02108a78(void);
void func_02108a24(void);
void func_0209fa4c(u32 a);
void func_020a0cb0(u32 a, u32 b, u32 c);
void func_020a0e04(u32 a);
void func_020b5038(void);
s32 func_021082f8(void);
s32 func_01ffdb08(s32 a);
u32 func_0202817c(s32 a);
void func_02095200(u32 a, u32 b, u32 c);
void func_02028184(s32 a);
void func_020b2694(s32 a, s32 b, s32 c);
void func_020b0564(u8 *a, s32 b);
void func_02108908(void);
void func_02108960(void);
s16 func_ov006_0216204c(void);

typedef struct { u8 pad[6]; s16 v; u8 pad2[2]; } Ent;
typedef struct { u8 pad[0x18]; Ent ent[4]; } Obj;

void func_020b2320(u8 *param_1)
{
    s32 iVar3;
    s32 iVar4;

    switch (*(u16 *)(param_1 + 4)) {
    case 0:
        *(s16 *)(param_1 + 4) = 0x700;
        *(s16 *)(param_1 + 6) = 0;
        {
            Obj *o = *(Obj **)(param_1 + 0x1c);
            s16 i;
            s16 t;
            Ent *e;

            if (o == NULL) {
                return;
            }
            t = func_ov006_0216204c() * 60;
            for (i = 0; i < 4; i++) {
                e = &o->ent[i];
                if (i > 0) {
                    e->v += t;
                }
            }
        }
        return;
    case 0x700:
        iVar4 = func_02003a10();
        if (iVar4 == 0) {
            return;
        }
        if (*(s16 *)data_02159424 == 0) {
            *(s16 *)(param_1 + 4) = 0x706;
            func_021089e0();
        } else {
            *(s16 *)(param_1 + 4) = 0x701;
        }
        *(s16 *)(param_1 + 6) = 0;
        return;
    case 0x701:
        iVar4 = func_02108a78();
        if (iVar4 == 0) {
            return;
        }
        *(s16 *)(param_1 + 4) = 0x702;
        *(s16 *)(param_1 + 6) = 0;
        func_02108a24();
        func_0209fa4c(120);
        func_020a0cb0(0, 0x28, 0x78);
        return;
    case 0x702:
        *(s16 *)(param_1 + 8) = *(s16 *)(param_1 + 8) - 1;
        if (*(s16 *)(param_1 + 8) > 0) {
            return;
        }
        *(s16 *)(param_1 + 4) = 0x703;
        *(s16 *)(param_1 + 6) = 0;
        func_020a0e04(5);
        *(u32 *)(data_02159444 + 0x20) = *(u32 *)(data_02159444 + 0x20) | 1;
        *(u32 *)(data_02159444 + 0x20) = *(u32 *)(data_02159444 + 0x20) | 2;
        func_020b5038();
        return;
    case 0x703:
        if (*(s16 *)(data_02159444 + 0x6a) == 0) {
            return;
        }
        *(s16 *)(param_1 + 4) = 0x704;
        *(s16 *)(param_1 + 6) = 0;
        func_0209fa4c(60);
        *(u32 *)(data_02159444 + 0x20) = *(u32 *)(data_02159444 + 0x20) & 0xfffffffe;
        *(u32 *)(data_02159444 + 0x20) = *(u32 *)(data_02159444 + 0x20) & 0xfffffffd;
        return;
    case 0x706:
        if (*(s16 *)(data_02159444 + 0x100) == 0) {
            return;
        }
        iVar4 = func_01ffdb08(*(s16 *)(data_0215942c + 0xe));
        iVar3 = func_0202817c(iVar4);
        if (*(s16 *)(iVar3 + 0x6a) == 0) {
            func_02095200(iVar3, 1, 1);
            func_02028184(iVar4);
        }
        *(s16 *)(param_1 + 4) = 1;
        *(u32 *)(param_1 + 0xc) = 1;
        return;
    case 0x705:
        goto L705;
    case 0x704:
        break;
    default:
        goto FIN;
    }
    *(s16 *)(param_1 + 6) = *(s16 *)(param_1 + 6) + 1;
    if (*(s16 *)(param_1 + 6) < 0x3c) {
        return;
    }
    func_020b2694(*(s32 *)(param_1 + 0x1c), *(s16 *)(data_02159444 + 100), *(s16 *)(data_02159444 + 0x68));
    func_020b0564(param_1, *(s32 *)(param_1 + 0x1c));
    *(s16 *)(param_1 + 4) = 0x705;
    *(s16 *)(param_1 + 6) = 0;
    if (*(s16 *)(data_02159444 + 0x6a) == 1) {
        func_02108908();
        return;
    }
    func_02108960();
    return;
L705:
    iVar4 = func_021082f8();
    if (iVar4 != 0) {
        *(s16 *)(param_1 + 4) = 1;
        *(u32 *)(param_1 + 0xc) = 1;
    }
FIN:
    return;
}
