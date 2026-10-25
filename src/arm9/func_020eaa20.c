#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_strength_reduction off
#pragma opt_common_subs off

extern u8 *data_02159444;
extern s32 data_02144c30[];
extern s32 data_02144bfc[];
extern u16 data_0214efdc[];
extern void func_02044ca0(s32 a);
extern s32 func_02085d0c(s32 a, s32 b, s32 c);
extern s32 func_0209c5b0(s32 a);
extern s32 func_01ffdb08(s32 a);
extern s32 func_020341fc(s32 a);
extern s32 func_020a1a40(s32 a);
extern s32 func_0209d0dc(s32 *a, s32 b);

typedef struct { s32 w[39]; } T39;
typedef struct { s32 w[13]; } T13;
typedef struct { s32 w[3]; } T3;

void func_020eaa20(u8 *param_1)
{
    u32 *puVar14;
    s32 r5;
    s32 r4;
    s32 i;
    u8 *iVar6;
    u32 *q;
    s32 flag;
    s32 r9;
    s32 iVar15;
    u16 uVar1;
    s32 aiStack_bc[39];
    s32 aiStack_f0[13];

    func_02044ca0(*(s16 *)(param_1 + 0x9c));
    puVar14 = *(u32 **)(param_1 + 0x214);
    iVar6 = *(u8 **)(data_02159444 + 0x1c);
    *(T3 *)(param_1 + 0xbc) = *(T3 *)(iVar6 + 0x30);

    i = 0;
    do {
        q = puVar14 + i * 4;
        q[14] = 1;
        i++;
    } while (i < 40);

    puVar14[0x9e] = 0;
    puVar14[0xa2] = 0;
    puVar14[0xa6] = 0;
    puVar14[0xaa] = 0;
    switch (*(s8 *)((u8 *)puVar14 + 8)) {
    case -1:
        puVar14[0x9e] = 1;
        break;
    case 0:
        puVar14[0xa2] = 1;
        break;
    case 1:
        puVar14[0xa6] = 1;
        break;
    case 2:
        puVar14[0xaa] = 1;
        break;
    }
    switch (puVar14[0]) {
    case 0:
        puVar14[0x8a] = 0;
        break;
    case 1:
        puVar14[0x8e] = 0;
        break;
    case 2:
        puVar14[0x92] = 0;
        break;
    case 3:
        puVar14[0x96] = 0;
        break;
    case 4:
        puVar14[0x9a] = 0;
        break;
    }
    if (((u8 *)puVar14)[9] != 0) {
        ((u8 *)puVar14)[9]--;
        return;
    }

    iVar6 = data_02159444;
    if ((*(u16 *)(iVar6 + 0x84) & 1) == 0) {
        return;
    }
    r5 = func_02085d0c(puVar14[3], *(s16 *)(iVar6 + 0x86) + 0x80, 0x60 - *(s16 *)(iVar6 + 0x88));
    if (r5 == -1) {
        return;
    }
    if ((*(u16 *)(data_02159444 + 0x84) & 2) != 0) {
        switch (r5) {
        case 21:
            puVar14[0] = 0;
            func_0209c5b0((s16)puVar14[0]);
            return;
        case 22:
            puVar14[0] = 1;
            func_0209c5b0((s16)puVar14[0]);
            return;
        case 23:
            puVar14[0] = 2;
            func_0209c5b0((s16)puVar14[0]);
            return;
        case 24:
            puVar14[0] = 3;
            func_0209c5b0((s16)puVar14[0]);
            return;
        case 25:
            puVar14[0] = 4;
            func_0209c5b0((s16)puVar14[0]);
            return;
        }
        if (r5 == 26) {
            flag = 0;
            r9 = *(s8 *)((u8 *)puVar14 + 8) + 1;
            if (r9 < 3) {
                s32 k1 = 1;
                s32 k3 = 3;
                s32 k79 = 79;
                vu8 *p8;
                do {
                    if (func_01ffdb08((s16)r9) != 0) {
                        if (func_020341fc(func_01ffdb08((s16)r9)) == 0) {
                            p8 = (vu8 *)((u8 *)puVar14 + 8);
                            *p8 = r9;
                            flag = k1;
                            r9 = k3;
                            func_020a1a40(k79);
                        }
                    }
                    r9++;
                } while (r9 < 3);
            }
            if (flag) {
                return;
            }
            *(volatile s8 *)((u8 *)puVar14 + 8) = -1;
            func_020a1a40(80);
            return;
        }
    }

    r4 = -1;
    switch (r5) {
    case 0:
    case 8:
        r4 = 0;
        break;
    case 1:
    case 9:
        r4 = 1;
        break;
    case 2:
    case 10:
        r4 = 2;
        break;
    case 3:
    case 11:
        r4 = 3;
        break;
    case 4:
    case 12:
        r4 = 4;
        break;
    case 5:
    case 13:
        r4 = 5;
        break;
    case 6:
    case 14:
        r4 = 6;
        break;
    case 7:
    case 15:
        r4 = 7;
        break;
    case 16:
        r4 = 8;
        break;
    case 17:
        r4 = 9;
        break;
    case 18:
        r4 = 10;
        break;
    case 19:
        r4 = 11;
        break;
    case 20:
        r4 = 12;
        break;
    }
    if (r4 == -1) {
        return;
    }

    *(T39 *)aiStack_bc = *(T39 *)data_02144c30;
    *(T13 *)aiStack_f0 = *(T13 *)data_02144bfc;
    iVar15 = 13;
    uVar1 = data_0214efdc[1];
    if (((u16)(uVar1 & 0x80)) != 0 || ((u16)(uVar1 & 2)) != 0) {
        iVar15 -= 13;
    }
    if (((u16)(uVar1 & 0x40)) != 0 || ((u16)(uVar1 & 0x400)) != 0) {
        iVar15 += 13;
    }
    func_0209d0dc((s32 *)(param_1 + 400), aiStack_bc[r4 + iVar15]);
    *(u32 *)((u8 *)puVar14 + aiStack_f0[r4] * 16 + 0x38) = 0;
    puVar14[1] = r5;
    *(u32 *)(param_1 + 0xa8) = 0x1f40000;
    return;
}
