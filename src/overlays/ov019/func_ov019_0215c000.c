#include "ctx.h"

typedef struct { s32 w[3]; } V3;
typedef struct { s32 w[12]; } M12;

typedef struct {
    u8 pad0[0x1c];
    s16 f1c;
    u8 pad1e[2];
    s16 f20;
    s16 f22;
    s16 f24;
    s16 f26;
    s16 f28;
    u8 pad2a[2];
    s32 f2c;
    s32 f30;
    s32 f34;
    s32 pad38;
    s32 f3c;
    s32 f40;
    s32 f44;
    s32 f48;
    s32 f4c;
    s32 f50;
    s32 f54;
    s32 f58;
    V3 v5c;
    V3 v68;
    V3 v74;
    V3 v80;
    M12 m8c;
    u16 bc;
    u16 be;
    u16 c0;
} Obj;

typedef struct {
    u8 pad0[0x30];
    V3 v30;
    V3 v3c;
    V3 v48;
    u8 pad54[0xc];
    V3 v60;
    s16 s6c;
    s16 s6e;
} Glb;

typedef struct { u8 b0; u8 b1; u16 fl; } FlagA;
typedef struct { u16 f0; u16 f2; } FlagB;

extern u32 data_0215902c;
extern M12 data_02152d24;
extern FlagA data_0214f004;
extern FlagB data_0214efdc;
extern s16 data_02126868[];

extern Glb *func_0208f698(u32 a);
extern s32 func_020bc14c(void);
extern void func_02067e34(s32 *a, s32 *b, s32 *c);
extern s32 func_02067c30(s32 *a);
extern s32 func_01ff8958(s32 a, s32 b);
extern void func_01ff832c(s32 a, s32 *b, s32 *c, s32 *d);
extern void func_01ff89d0(s32 *a);
extern void func_02067d04(s32 *a, s32 *b, s32 *c);
extern void func_02006a30(s32 *a, s32 *b);
extern void func_0200b644(s32 *a, s32 *b, s32 *c, s32 *d, s32 *e);
extern void func_02066b80(s32 *a);
extern void func_01ff8000(s32 *a, s32 b, s32 c);
extern void func_01ff8020(s32 *a, s32 b, s32 c);
extern void func_01ff803c(s32 *a, s32 b, s32 c);
extern void func_020672ec(s32 *a, s32 *b, s32 c, s32 d, s32 e);
extern void func_01ff810c(s32 *a, s32 *b, s32 *c);
extern s32 func_ov019_0215d344(s32 i);
extern void func_ov019_0215cd98(s32 a);
extern void func_ov019_0215cdbc(s32 a, s32 b);
extern void func_ov019_0215d134(s32 a, s32 b);
extern void func_ov019_0215d12c(s32 a, s32 b);
extern s32 func_ov019_0215cdc8(s32 a);

void func_ov019_0215c000(Obj *p)
{
    s32 Va[3];
    s32 Vb[3];
    s32 Vc[3];
    s32 Vd[3];
    s32 Ve[3];
    s32 Vf[3];
    s32 Vg[3];
    s32 Ma[12];
    s32 Mrx[12];
    s32 Mry[12];
    s32 Mrz[12];
    s32 fr48[9];
    u32 x13;
    Glb *g;
    s32 x12;
    s32 iv6;
    s32 uv15;
    s32 uv14;
    s32 bv;
    s32 t;
    s32 a;
    s32 b;

    if (p == 0) {
        return;
    }
    g = func_0208f698(data_0215902c);
    x13 = 0;
    x12 = 0x1000;
    if (g != 0) {
        p->v68 = g->v30;
        p->v74 = g->v3c;
        p->v80 = g->v48;
        p->m8c = data_02152d24;
        x13 = g->s6c;
        x12 = g->s6e;
    }
    p->f20 = (s16)func_020bc14c();
    p->f2c = (data_0214f004.fl & 1) != 0;
    p->f30 = (data_0214f004.fl & 2) != 0;
    p->f34 = (data_0214f004.fl & 4) != 0;
    if (p->f2c != 0) {
        a = data_0214f004.b0 - 127;
        b = 95 - data_0214f004.b1;
        if (a <= 128 && a >= -127 && b <= 95 && b >= -96) {
            p->f54 = p->f4c;
            p->f58 = p->f50;
            p->f4c = p->f44;
            p->f50 = p->f48;
            p->f44 = p->f3c;
            p->f48 = p->f40;
            p->f3c = a;
            p->f40 = b;
        }
    }
    if (p != 0) {
        s32 t6 = p->m8c.w[6];
        s32 t3 = p->m8c.w[3];
        s32 t0 = p->m8c.w[0];
        Va[0] = t0;
        Va[1] = t3;
        Va[2] = t6;
    }
    if (p != 0) {
        s32 t7 = p->m8c.w[7];
        s32 t4 = p->m8c.w[4];
        s32 t1 = p->m8c.w[1];
        Vb[0] = t1;
        Vb[1] = t4;
        Vb[2] = t7;
    }
    if (p != 0) {
        s32 t8 = p->m8c.w[8];
        s32 t5 = p->m8c.w[5];
        s32 t2 = p->m8c.w[2];
        Vc[0] = t2;
        Vc[1] = t5;
        Vc[2] = t8;
    }
    func_02067e34(g->v3c.w, g->v30.w, Vd);
    iv6 = func_02067c30(Vd);
    x12 = func_01ff8958(x13, x12);
    uv15 = (s32)((((s64)iv6 * x12) + 0x800) >> 12);
    uv14 = (s32)((((s64)uv15 * 43) + 0x800) >> 12);
    func_01ff832c(uv14 * p->f3c, Va, p->v68.w, p->v5c.w);
    func_01ff832c(uv14 * p->f40, Vb, p->v5c.w, p->v5c.w);
    func_01ff832c(-iv6, Vc, p->v5c.w, p->v5c.w);
    bv = 0;
    if ((u16)(data_0214efdc.f0 & 1) != 0) {
        if (p->f26 == 1) {
            goto st_a;
        }
        if (p->f26 != 7) {
            goto st_c;
        }
        goto st_b;
    st_a:
        p->f26 = 7;
        goto st_j;
    st_b:
        p->f26 = 1;
        goto st_j;
    st_c:
        p->f26 = 1;
    st_j:
        {
            s16 i;
            for (i = 0; i < 50; i++) {
                t = func_ov019_0215d344(i);
                if (t != 0) {
                    func_ov019_0215cd98(t);
                }
            }
        }
        bv = 1;
    }
    switch ((s32)p->f26) {
    case 0:
    case 2:
    case 3:
    case 4:
    case 6:
        break;
    case 1: {
        s32 r7v;
        s32 z;
        s32 k;
        r7v = func_ov019_0215d344(0);
        if (r7v == 0) {
            return;
        }
        if (r7v != 0 && bv != 0) {
            p->f22 = 0;
            func_ov019_0215cdbc(r7v, p->f1c);
            func_ov019_0215d134(r7v, 1);
            func_ov019_0215d12c(r7v, 2);
        }
        t = func_ov019_0215cdc8(r7v);
        if ((t == 0 || func_ov019_0215cdc8(r7v) == 7) && p->f30 != 0) {
            p->f22 = 0;
            func_ov019_0215cdbc(r7v, p->f1c);
            func_ov019_0215d12c(r7v, 2);
        }
        if (func_ov019_0215cdc8(r7v) != 6) {
            return;
        }
        *(V3 *)Ve = g->v48;
        *(V3 *)Vf = g->v60;
        x12 = p->f3c;
        z = 0;
        if (x12 > 0) {
            x12 = 50 - x12;
        } else {
            x12 = x12 + 50;
        }
        if (x12 < 0) {
            x12 = 0;
        }
        k = 0x1000;
        Ve[1] = z;
        Vg[1] = k;
        Vf[1] = z;
        Vg[0] = z;
        Vg[2] = z;
        func_01ff832c(x12 << 4, Ve, g->v30.w, g->v30.w);
        if (g->v30.w[2] < -0x15ff8) {
            g->v30.w[2] = -0x15ff8;
        }
        if (g->v30.w[2] > 0x15ff8) {
            g->v30.w[2] = 0x15ff8;
        }
        if (g->v30.w[0] < -0x15ff8) {
            g->v30.w[0] = -0x15ff8;
        }
        if (g->v30.w[0] > 0x15ff8) {
            g->v30.w[0] = 0x15ff8;
        }
        func_01ff832c(-((p->f3c << 4) >> 4), Vf, Ve, Ve);
        func_01ff89d0(Ve);
        func_01ff832c(0x8000, Ve, g->v30.w, g->v3c.w);
        g->v3c.w[1] = 0x4010;
        func_02067e34(g->v3c.w, g->v30.w, g->v48.w);
        func_02067d04(Vg, g->v48.w, g->v60.w);
        func_02006a30(g->v48.w, g->v48.w);
        func_02006a30(g->v60.w, g->v60.w);
        return;
    }
    case 5: {
        s32 r5v;
        r5v = func_ov019_0215d344(0);
        if (r5v == 0) {
            return;
        }
        if (bv == 0) {
            return;
        }
        p->f22 = 0;
        func_ov019_0215cdbc(r5v, p->f1c);
        func_ov019_0215d134(r5v, 5);
        func_ov019_0215d12c(r5v, 3);
        return;
    }
    case 7: {
        s32 r8v;
        s16 j;
        if (bv != 0) {
            for (j = 0; j < 50; j++) {
                r8v = func_ov019_0215d344(j);
                func_ov019_0215cdbc(r8v, p->f1c);
                func_ov019_0215d134(r8v, 7);
                func_ov019_0215d12c(r8v, 0);
            }
        }
        if ((u16)(data_0214efdc.f0 & 0x400) != 0) {
            p->f28 = p->f28 + 1;
        }
        if (p->f28 < 1 || p->f28 > 3) {
            p->f28 = 1;
        }
        {
            s32 v28 = p->f28;
            s32 v30 = p->f30;
            if (v30 != 0 && v28 == 2) {
                p->f24 = p->f22;
                p->f22 = p->f22 + 1;
                if (p->f22 >= 50) {
                    p->f22 = 0;
                }
                r8v = func_ov019_0215d344(p->f22);
                func_ov019_0215d344(p->f24);
                if (r8v != 0) {
                    func_ov019_0215d12c(r8v, 3);
                }
            }
        }
        if (((0 != p->f30 && (p->f28 == 2 || 3 == p->f28)) || (0 != p->f30 && 1 == p->f28)) && p != 0) {
            u16 k7;
            fr48[3] = 0;
            k7 = 0x1000;
            fr48[4] = 0;
            fr48[5] = 0;
            fr48[6] = 0;
            fr48[8] = 0;
            fr48[7] = k7;
            func_0200b644(g->v3c.w, p->v68.w, p->v5c.w, 3 + fr48, fr48 + 6);
        }
        if ((u16)(data_0214efdc.f2 & 0x40) != 0) {
            p->bc = p->bc - 256;
        } else if ((u16)(data_0214efdc.f2 & 0x80) != 0) {
            p->bc = p->bc + 256;
        }
        if (0x8000 < p->bc && p->bc < 0xd000) {
            p->bc = 0xd000;
        }
        if (0x8000 < p->bc && 0xf800 < p->bc) {
            p->bc = 0xf800;
        }
        if ((u16)(data_0214efdc.f2 & 0x20) != 0) {
            p->be = p->be - 256;
        } else if ((u16)(data_0214efdc.f2 & 0x10) != 0) {
            p->be = p->be + 256;
        }
        func_02066b80(Ma);
        func_01ff8000(Mrx, data_02126868[(p->bc >> 4) * 2], data_02126868[(p->bc >> 4) * 2 + 1]);
        func_01ff8020(Mry, data_02126868[(p->be >> 4) * 2], data_02126868[(p->be >> 4) * 2 + 1]);
        func_01ff803c(Mrz, data_02126868[(p->c0 >> 4) * 2], data_02126868[(p->c0 >> 4) * 2 + 1]);
        func_020672ec(Ma, Ma, g->v3c.w[0], g->v3c.w[1], g->v3c.w[2]);
        func_01ff810c(Mry, Ma, Ma);
        func_01ff810c(Mrx, Ma, Ma);
        func_01ff810c(Mrz, Ma, Ma);
        func_020672ec(Ma, Ma, 0, 0, 0x8000);
        {
            s32 t11 = Ma[11];
            s32 t10 = Ma[10];
            s32 t9 = Ma[9];
            g->v30.w[0] = t9;
            g->v30.w[1] = t10;
            g->v30.w[2] = t11;
        }
        func_02067e34(g->v3c.w, g->v30.w, g->v48.w);
        fr48[0] = 0;
        fr48[2] = 0;
        fr48[1] = 0x1000;
        func_02067d04(fr48, g->v48.w, g->v60.w);
        func_02006a30(g->v48.w, g->v48.w);
        func_02006a30(g->v60.w, g->v60.w);
        return;
    }
    case 8: {
        s32 r5v;
        r5v = func_ov019_0215d344(0);
        if (r5v == 0) {
            return;
        }
        if (bv == 0) {
            return;
        }
        p->f22 = 0;
        func_ov019_0215cdbc(r5v, p->f1c);
        func_ov019_0215d134(r5v, 8);
        func_ov019_0215d12c(r5v, 2);
        return;
    }
    case 9: {
        s32 r5v;
        r5v = func_ov019_0215d344(0);
        if (r5v == 0) {
            return;
        }
        if (bv == 0) {
            return;
        }
        p->f22 = 0;
        func_ov019_0215cdbc(r5v, p->f1c);
        func_ov019_0215d134(r5v, 9);
        func_ov019_0215d12c(r5v, 2);
        break;
    }
    }
}
