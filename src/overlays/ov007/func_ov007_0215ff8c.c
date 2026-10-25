#include "ctx.h"

#pragma opt_propagation off

typedef struct { u32 w[5]; } T5;

extern u16 data_0214efdc[];
extern u32 data_ov007_02160ccc;
extern u32 data_ov007_02160e6c;
extern u32 data_ov007_02160e74;
extern u32 data_ov007_02160e68;
extern u32 data_ov007_02160e70;
extern u32 data_ov007_02160e64;
extern u8 data_ov007_02160d28[];
extern T5 data_ov007_02160d14;
extern u8 data_ov007_02160d30[];
extern u8 data_ov007_02160d4c[];

extern u32 func_0209639c(void);
extern BOOL func_ov007_0215ee80(void);
extern BOOL func_020959dc(void);
extern void func_02097b68(void);
extern void func_ov007_0215dd0c(void);
extern BOOL func_ov007_0215eea4(void);
extern void func_ov007_0215f050(s32 a);
extern void func_ov007_0215f034(u32 a, u32 b);
extern void func_ov007_02160520(void);
extern void func_ov007_0216039c(void);
extern BOOL func_020d5abc(void);
extern void func_020d5aa0(void);
extern void func_ov007_0215dc90(void);
extern void func_ov007_0215ef10(void);
extern u32 func_ov007_0215e1c8(s32 a);
extern void func_02005e78(s32 a, u8 b, void *c, ...);
extern void func_ov007_0215eec8(void);

#define STATE_BODY(KV) \
    data_ov007_02160e6c = KV; \
    switch (KV) { \
    case 0: func_ov007_0215dc90(); break; \
    case 1: func_ov007_0215dd0c(); break; \
    case 4: data_ov007_02160e74 = 0; break; \
    case 2: func_ov007_0215f050(0); func_ov007_0215f034(data_ov007_02160e68, 0x74f8); data_ov007_02160e70 = 0; break; \
    case 3: func_ov007_0215ef10(); break; \
    }

void func_ov007_0215ff8c(void)
{
    u32 uVar6;
    T5 tbl;
    u32 state;

    if ((u16)(data_0214efdc[1] & 8) != 0 && (u16)(data_0214efdc[1] & 4) != 0 &&
        (u16)(data_0214efdc[0] & 0x100) != 0) {
        data_ov007_02160ccc = 0;
    }
    uVar6 = data_ov007_02160ccc;
    if (uVar6 != 0xffffffff) {
        if (uVar6 != 0) {
            data_ov007_02160ccc = uVar6 - 1;
            goto L108;
        }
    }
    if (uVar6 != 0) {
        goto L108;
    }
    if (func_0209639c() != 0) {
        goto L108;
    }
    { u32 ones = 0xffffffff; u32 k4 = 4; u32 *pa = &data_ov007_02160ccc; *pa = ones; STATE_BODY(k4) }
    goto L108;

L108:
    switch (data_ov007_02160e6c) {
    case 0:
        if (func_ov007_0215ee80()) {
            if (func_020959dc()) {
                func_02097b68();
                { u32 k1 = 1; STATE_BODY(k1) }
            }
        }
        break;
    case 1:
        if (func_ov007_0215eea4()) {
            { u32 k2 = 2; STATE_BODY(k2) }
        }
        break;
    case 2:
        func_ov007_02160520();
        break;
    case 3:
        func_ov007_0216039c();
        break;
    case 4:
        if (data_ov007_02160e74 == 0) {
            if (func_020d5abc()) {
                data_ov007_02160e74 = 1;
            }
        } else if (data_ov007_02160e74 == 1) {
            func_020d5aa0();
        }
        break;
    }
    if (data_ov007_02160e64 != 0) {
        uVar6 = func_ov007_0215e1c8(3);
        func_02005e78(0, uVar6 + 1, data_ov007_02160d28);
        state = data_ov007_02160e6c;
        tbl = data_ov007_02160d14;
        func_02005e78(0, uVar6 + 2, data_ov007_02160d30, data_ov007_02160ccc, state, tbl.w[state]);
        func_02005e78(0, uVar6 + 3, data_ov007_02160d4c, func_0209639c(), data_ov007_02160e70, data_ov007_02160e74);
    }
    if ((u16)(data_0214efdc[1] & 0x200) != 0 && (u16)(data_0214efdc[0] & 8) != 0) {
        data_ov007_02160e64 = (data_ov007_02160e64 == 0);
    }
    func_ov007_0215eec8();
}
