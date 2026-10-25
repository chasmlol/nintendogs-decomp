#pragma avoid_byte strb
#include "ctx.h"

typedef struct {
    const char *name[4][4];
} NameTbl;

typedef struct {
    u16 id;
    u16 pad;
    u32 val;
} PickEnt;

typedef struct {
    s8 kind[4];
    PickEnt pick[8];
} Rec;

typedef struct {
    u16 key;
    u16 rest[5];
} Pick;

typedef struct {
    u8 pad00[0xc];
    u16 rows[1][32];
} Res;

typedef struct {
    u8 pad00[0xc];
    void *fc;
    u32 f10;
    void *f14;
} Res2;

typedef struct {
    u32 f0;
    u16 f4;
    u16 f6;
    u16 f8;
    u16 fa;
    u16 fc;
    u16 fe;
} Slot;

typedef struct {
    u8 x;
    u8 y;
    s16 ox;
    s16 oy;
    u8 pad06[0x264 - 0x6];
    u8 map[0x2000];
    u32 f2264;
    u8 pad2268[0x2274 - 0x2268];
    s8 f2274;
    u8 pad2275[0x2295 - 0x2275];
    s8 f2295;
    u8 pad2296[0x22a2 - 0x2296];
    s8 f22a2;
    u8 pad22a3[0x22a5 - 0x22a3];
    u8 f22a5;
    u8 pad22a6[0x22c4 - 0x22a6];
    s8 f22c4;
    u8 pad22c5[0x2305 - 0x22c5];
    u8 f2305;
    u8 pad2306[0x2314 - 0x2306];
    u8 f2314;
    u8 f2315;
    u8 f2316;
    u8 f2317;
    u8 f2318;
    u8 f2319;
} Save;

typedef struct {
    u8 mode;
    u8 pad01[3];
    s32 f4;
    s32 f8;
    s32 fc;
    u8 f10;
    u8 f11;
    u8 pad12[0x1c - 0x12];
    u8 f1c;
    u8 f1d;
    u8 pad1e[2];
    s32 f20;
    u32 f24;
    u8 pad28[0xbe0 - 0x28];
    u16 tbl0[29];
    u16 tbl10[10][72];
    u16 table[8][18];
    u8 pad12da[0x12ec - 0x12da];
    s32 f12ec;
    s32 f12f0;
    s32 f12f4;
    s32 f12f8;
    s32 f12fc;
    u8 pad1300[0x1384 - 0x1300];
    u16 tbl1[8];
    u8 pad1394[0x3394 - 0x1394];
    s32 f3394;
    s32 f3398;
    s32 f339c;
    u8 pad33a0[0x33ac - 0x33a0];
    s32 f33ac;
    u8 pad33b0[0x33b8 - 0x33b0];
    u8 f33b8;
    u8 f33b9;
    u8 f33ba;
    u8 f33bb[6];
    u8 pad33c1[0x33cd - 0x33c1];
    u8 f33cd;
    u8 pad33ce[2];
    s32 h0;
    s32 h1;
    s32 h2;
    s32 h3;
    s32 h4;
    s32 h5;
    s32 hk[4];
    s32 h6;
    Res2 *r33fc;
    Res2 *r3400;
    Res2 *r3404;
    Res *layers[4];
    Res *r3418;
    Slot slots[42];
    void *arc;
    u32 seed;
    Save *save;
    s32 f36c8;
    s32 f36cc;
} Game;

typedef struct {
    s16 flag;
    s16 id;
    u8 pad04[4];
    Save save;
} SaveHdr;

extern SaveHdr *data_02159458;
extern Game *data_ov004_02170320;
extern const NameTbl data_ov004_0216ffcc;
extern char data_ov004_02170138[];
extern char data_ov004_0217015c[];
extern char data_ov004_02170180[];
extern char data_ov004_021701a8[];
extern Pick data_0212fac4[];
extern char data_ov004_021701cc[];
extern char data_ov004_021701ec[];
extern char data_ov004_02170210[];
extern char data_ov004_02170230[];
extern u8 data_ov004_0216fd48[];
extern u8 data_ov004_0216fd34[];
extern u8 *data_0214f130;

extern s32 func_01ffdb08(s32 a);
extern Game *func_020038b8(void *heap, u32 size);
extern void func_02068368(s32 a);
extern u32 func_02080858(void);
extern s32 func_0208c87c(void *arc, const char *name);
extern void func_02093298(Rec *rec);
extern void func_0209323c(Rec *rec);
extern void func_0205f050(char *buf, s32 n, const char *fmt, ...);
extern void func_020737d8(s32 h, void *out);
extern void func_02073828(s32 h, void *out);
extern void func_02073768(s32 h, void *out);
extern u32 func_02085cb8(s32 h);
extern u32 func_02085cc0(s32 h);
extern void func_0207c910(s32 a, s32 b, void *src, u32 size);
extern void func_0207c990(void);
extern BOOL func_020f5220(void);
extern s32 func_ov004_021601b8(void);
extern void func_020f3dfc(s32 a);
extern u8 *func_0202817c(s32 a);
extern void func_ov004_02163510(void);
extern void func_ov004_021632e0(void);
extern void func_ov004_02163168(void);
extern void func_ov004_02162e74(void);
extern void func_0209fb38(s32 a, s32 b, s32 c);
extern void func_0209f59c(s32 a);
extern void func_020f3b54(void);
extern u16 func_02028118(s32 a);

#define G data_ov004_02170320

static inline u16 Rand(void)
{
    u32 s = G->seed * 0x10dcd + 1;
    G->seed = s;
    return (u16)s;
}

static inline u16 RandMax(u16 max)
{
    return (u16)(((u32)Rand() * max) >> 16);
}

#pragma opt_loop_invariants off
void func_ov004_021639ec(void *heap)
{
    s32 id;
    s32 i;
    s32 j;
    s32 k;
    BOOL done;
    s32 round;
    char buf[64];
    NameTbl tbl;
    u8 usedKey[22];
    u8 used[32];
    Rec rec;

    id = func_01ffdb08(data_02159458->id);
    G = func_020038b8(heap, sizeof(Game));
    G->arc = heap;
    func_02068368(0);
    *(vu16 *)0x0400100a = (*(vu16 *)0x0400100a & 0x43) | 0xc808;
    *(vu16 *)0x0400100c = (*(vu16 *)0x0400100c & 0x43) | 0xcc08;
    *(vu16 *)0x0400100e = (*(vu16 *)0x0400100e & 0x43) | 0xd808;
    *(vu16 *)0x0400100a = (*(vu16 *)0x0400100a & ~3) | 2;
    *(vu16 *)0x0400100c = (*(vu16 *)0x0400100c & ~3) | 3;
    *(vu16 *)0x0400100e = (*(vu16 *)0x0400100e & ~3) | 1;
    *(vu32 *)0x04001000 |= 0x1e00;
    *(vu16 *)0x04001050 = 0;
    G->seed = func_02080858();
    G->save = &data_02159458->save;
    tbl = data_ov004_0216ffcc;
    G->h0 = func_0208c87c(G->arc, data_ov004_02170138);
    G->h1 = func_0208c87c(G->arc, data_ov004_0217015c);
    G->h2 = func_0208c87c(G->arc, data_ov004_02170180);
    G->h3 = func_0208c87c(G->arc, data_ov004_021701a8);
    func_02093298(&rec);
    if (rec.kind[0] == -1) {
        for (i = 0; i < 4; i++) {
            rec.kind[i] = RandMax(4);
        }
        for (i = 0; i < 21; i++) {
            usedKey[i] = 0;
        }
        usedKey[func_02028118(id)] = 1;
        for (i = 0; i < 32; i++) {
            used[i] = 0;
        }
        for (round = 0; round < 8; round++) {
            done = FALSE;
            if (round == 7) {
                rec.pick[round].id = 31;
            } else {
                do {
                    s16 idx = RandMax(31);
                    if (used[idx] == 0 && usedKey[((Pick *)(u32)data_0212fac4)[idx].key] == 0) {
                        used[idx] = 1;
                        done = TRUE;
                        usedKey[((Pick *)(u32)data_0212fac4)[idx].key] = 1;
                        rec.pick[round].id = idx;
                    }
                } while (!done);
            }
        }
        func_0209323c(&rec);
    }
    for (i = 0; i < 4; i++) {
        func_0205f050(buf, 64, data_ov004_021701cc, tbl.name[i][rec.kind[i]]);
        G->hk[i] = func_0208c87c(G->arc, buf);
    }
    G->h6 = func_0208c87c(G->arc, data_ov004_021701ec);
    G->h4 = func_0208c87c(G->arc, data_ov004_02170210);
    G->h5 = func_0208c87c(G->arc, data_ov004_02170230);
    func_020737d8(G->h3, &G->r33fc);
    for (i = 0; i < 4; i++) {
        func_02073828(G->hk[i], &G->layers[i]);
    }
    func_02073828(G->h6, &G->r3418);
    func_02073768(G->h4, &G->r3400);
    func_020737d8(G->h5, &G->r3404);
    {
        u32 size = func_02085cb8(G->h2);
        func_0207c910(35, 0, (void *)func_02085cc0(G->h2), size);
    }
    func_0207c910(26, 0, G->layers[0]->rows, 0x600);
    func_0207c910(26, 0x800, G->layers[1]->rows, 0x600);
    func_0207c910(26, 0x600, G->layers[2]->rows, 0x200);
    func_0207c910(26, 0x1000, (u8 *)G->layers[2]->rows + 0x200, 0x400);
    func_0207c910(26, 0xe00, G->layers[3]->rows, 0x200);
    func_0207c910(26, 0x1800, (u8 *)G->layers[3]->rows + 0x200, 0x400);
    func_0207c910(22, 0, G->r3400->f14, G->r3400->f10);
    func_0207c910(30, 0, G->r33fc->fc, 448);
    func_0207c910(31, 0, G->r3404->fc, 448);
    for (i = 0; i < 29; i++) {
        G->tbl0[i] = G->r3418->rows[0][i];
    }
    for (i = 0; i < 8; i++) {
        G->tbl1[i] = G->r3418->rows[1][i];
    }
    {
    s32 ro;
    for (i = 0, ro = 0; i < 10; i++) {
        s32 row = i + 2;
        if (i != 0) {
            row += 2;
        }
        j = 0;
        if (j < data_ov004_0216fd48[i]) {
            s32 off = row * 32;
            do {
                ((u16 *)((u32)ro + (u32)G->tbl10))[j] = (G->r3418->rows[0] + off)[j];
                j++;
            } while (j < data_ov004_0216fd48[i]);
        }
        ro += 144;
    }
    }

    {
    s32 ro;
    for (i = 0, ro = 0; i < 8; i++) {
        j = 0;
        if (j < data_ov004_0216fd34[i]) {
            s32 off = (i + 16) * 32;
            do {
                ((u16 *)((u32)ro + (u32)G->table))[j] = (G->r3418->rows[0] + off)[j];
                j++;
            } while (j < data_ov004_0216fd34[i]);
        }
        ro += 36;
    }
    }
    if (data_02159458->flag != 0) {
        G->save->f2305 = *(u32 *)(data_0214f130 + 0x2c) >> 2;
        if (G->save->f2305 >= 6) {
            G->save->f2305 = 5;
        }
    }
    func_ov004_02163510();
    func_ov004_021632e0();
    func_ov004_02163168();
    for (i = 0; i < 42; i++) {
        G->slots[i].f0 = 0;
        G->slots[i].f6 = 0;
        G->slots[i].f8 = 0;
        G->slots[i].fa = 0;
        G->slots[i].fc = 0;
        G->slots[i].f4 = 1;
    }
    G->f36c8 = -1;
    G->f20 = 0;
    G->f10 = 1;
    G->f11 = 1;
    G->f1c = 32;
    G->f1d = 23;
    G->mode = 0;
    G->f24 = *(u16 *)(func_0202817c(id) + 0x76);
    G->f4 = 0;
    G->f8 = 0;
    G->fc = 0;
    G->f12f4 = 0;
    G->f12f8 = 0;
    G->f12fc = 0;
    G->f33cd = 0;
    G->f12ec = 0;
    G->f33b8 = 0;
    G->f33b9 = 0;
    G->f339c = 0;
    G->f33ac = -1;
    G->save->f2315 = 0;
    func_020f3b54();
    G->f33ba = 0;
    for (i = 0; i < 6; i++) {
        G->f33bb[i] = 0;
    }
    if (data_02159458->flag == 0) {
        G->mode = 4;
        func_0207c910(25, 0, G->save->map, 0x2000);
        G->f3394 = (s16)((G->save->x << 3) - G->save->ox);
        G->f3398 = (s16)((G->save->y << 3) - G->save->oy);
        if (G->save->f2316 != 0) {
            G->save->f2316 = 0;
        } else {
            func_0209fb38(27, 127, 0);
            func_0209f59c(2);
        }
    } else {
        func_ov004_02162e74();
        G->save->f2264 = 0;
        G->save->f2274 = -1;
        G->save->f2295 = -1;
        G->save->f22a2 = -1;
        G->save->f22c4 = -1;
        G->save->f2314 = 5;
        G->save->f22a5 = 0;
        G->save->f2316 = 0;
        func_0209fb38(27, 127, 0);
        G->save->f2317 = 1;
        G->save->f2318 = 0;
        G->save->f2319 = 0;
    }
    func_0207c990();
    if (!func_020f5220()) {
        return;
    }
    func_020f3dfc(func_ov004_021601b8());
}



