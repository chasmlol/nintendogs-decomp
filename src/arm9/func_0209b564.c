#include "ctx.h"

extern s32 data_02159074[];
extern u8 data_02141f64[];
extern u8 data_021590b8[];
extern u8 data_02141f7c[];
extern u32 data_02159070;
extern u32 data_0215906c;
extern s16 data_0215907c[];

extern s32 *func_020038b8(s32 *a, s32 b);
extern void func_0206fe7c(void);
extern s32 func_020720c4(s32 *a, s32 b);
extern void func_02071ce8(s32 a, s32 b, s32 c, s32 d);
extern void func_020730d0(s32 a);
extern s32 func_02071f78(s32 *a, s32 b, s32 c, s32 d, s32 e);
extern void func_02071fe8(s32 a);
extern s32 func_02071f20(s32 a);
extern void func_02070b48(s32 *a);
extern void func_0209febc(void);
extern void func_020a26d0(void);
extern void func_0209dc18(void);
extern void func_020a3044(void);
extern void func_020a3600(void);
extern void func_020a4294(void);
extern void func_02072d28(s32 a, s32 b);

void func_0209b564(s32 *param_1)
{
    s32 *p1;
    s32 *p2;
    s32 i;
    s32 iVar1;
    u8 *r4;
    u8 *pp;
    u8 *puVar3;
    s16 *puVar4;

    r4 = (u8 *)data_02159074;
    p1 = func_020038b8(param_1, 0xa0000);
    p2 = func_020038b8(param_1, 0x1b800);
    func_0206fe7c();
    data_02159074[0] = func_020720c4(p1, 0xa0000);
    data_02159074[1] = func_020720c4(p2, 0x1b800);
    func_02071ce8((s32)data_021590b8, (s32)data_02141f64, data_02159074[0], 0);
    func_020730d0(data_02159074[0]);
    data_02159070 = func_02071f78(p1, 0x4e38, 0, 0, 0);
    data_0215906c = func_02071f78(p1, 0x4e38, 0, 0, 0);
    func_02071fe8(data_02159074[1]);
    func_02071ce8((s32)(u32)(void *)data_021590b8, (s32)data_02141f7c, data_02159074[1], 0);
    func_020730d0(data_02159074[1]);
    *(s16 *)((u8 *)data_02159074 + 20) = (s16)func_02071f20(data_02159074[1]);
    *(s16 *)((u8 *)data_02159074 + 22) = -1;
    i = 0;
    do {
        pp = r4 + i * 2;
        i = (s16)(i + 1);
        *(s16 *)(pp + 8) = -1;
    } while (i < 5);
    *(s16 *)(r4 + 24) = 0;
    *(s16 *)(r4 + 26) = 0;
    *(s32 *)(r4 + 0x1c) = 0;
    func_02070b48((s32 *)(r4 + 32));
    *(s16 *)(r4 + 36) = 0;
    *(s32 *)(r4 + 0x28) = 0;
    *(s32 *)(r4 + 0x2c) = 0;
    *(s32 *)(r4 + 0x30) = 0;
    *(s32 *)(r4 + 0x34) = 0;
    *(s32 *)(r4 + 0x38) = 0;
    *(s16 *)(r4 + 60) = 0;
    *(s16 *)((u8 *)data_02159074 + 62) = -1;
    *(s32 *)((u8 *)data_02159074 + 0x40) = 0;
    func_0209febc();
    func_020a26d0();
    func_0209dc18();
    func_020a3044();
    func_020a3600();
    func_020a4294();
    func_02072d28(27, *(s32 *)r4);
    puVar4 = (s16 *)data_0215907c;
    *puVar4 = (s16)func_02071f20(data_02159074[0]);
    puVar4[5] = 0;
}
