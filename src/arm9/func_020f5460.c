#pragma avoid_byte strb
#include "ctx.h"

typedef volatile s32 vs32;
typedef volatile s8 vs8;

typedef struct { vu16 v; } S2;

typedef struct { vs32 w; vs32 x; } Rec;

typedef struct {
    vs32 state;      /* 0x00 */
    vs32 next;       /* 0x04 */
    vs32 f08;        /* 0x08 */
    vs32 a0c;        /* 0x0c */
    vs32 b10;        /* 0x10 */
    vs32 c14;        /* 0x14 */
    vs32 d18;        /* 0x18 */
    vs32 h1c;        /* 0x1c */
    Rec rec[4];      /* 0x20: rec[i].w; rec[3].x is 0x3c */
    vs32 f40;        /* 0x40 */
    vs32 g44;        /* 0x44 */
    vs32 f48;        /* 0x48 */
    vs32 flag4c;     /* 0x4c */
    vs8 sel;         /* 0x50 */
    u8 pad51[3];
    u8 spr[0x1c];    /* 0x54: sprite object passed as the first argument */
    vs32 f70;        /* 0x70 */
    u8 pad74[0x94];
    vs32 arr108[4];  /* 0x108 */
    vs32 x118;       /* 0x118 */
    vs32 x11c;       /* 0x11c */
} Obj;

extern u8 *data_0215be48;
extern u8 data_0214f004[];
extern u8 data_021331fc[];
extern u8 data_02146228[];
extern u8 data_02146240[];

extern s32 func_020039d8(void);
extern void func_02109084(void);
extern void func_020a1a40(s32 a);
extern void func_02108e24(s32 a);
extern s32 func_02112320(s32 a, u32 b, u32 c);
extern void func_02117a58(void *a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j, s32 k);
extern void func_021179b0(void *a, s16 b, s16 c);
extern u32 func_02085c30(S2 a, u32 b);
extern u32 func_02085be8(S2 a, u32 b);
extern void func_02112798(s32 a, s32 b, s32 c);
extern void func_02109010(void);
extern s32 func_0210e968(s32 a, u8 *b);
extern s32 func_02073828(s32 a, s32 *b);
extern void func_0207c910(s32 a, s32 b, s32 c, s32 d);
extern s32 func_02067898(s32 a, s32 b);
extern s32 func_021178a8(void *a);
extern void func_02003c10(s32 a);
extern void func_020fddc0(s32 a);
extern s32 func_02003a44(void);
extern void func_020f6c28(void *p);

static inline BOOL InBox(u32 x, u32 y, u32 ox, u32 oy, u32 w, u32 h)
{
    u32 ex = ox + w;
    u32 ey = oy + h;
    if (ox > x) goto no;
    if (x > ex) goto no;
    if (oy > y) goto no;
    if (y <= ey) return TRUE;
no:
    return FALSE;
}

/* box record at o + off: {u16 x; u16 y; u8 w; u8 h;} */
static inline BOOL HitBox(u8 *o, s32 off, u32 px, u32 py)
{
    u8 *b = o + off;
    u32 ox = func_02085c30(*(S2 *)(o + off), b[4]);
    u32 oy = func_02085be8(*(S2 *)(b + 2), b[5]);
    return InBox(px, py, ox, oy, b[4], b[5]);
}

void func_020f5460(Obj *self)
{
    vs32 *pv = (vs32 *)((u8 *)self + 0x1c98);
    s32 i;

    self->state = self->next;
    switch (self->state) {
    case 0: {
        if (func_020039d8() != 0) {
            s32 flag = 1;
            self->a0c -= 0x7800;
            if (self->a0c <= 0) self->a0c = 0; else flag = 0;
            self->b10 += 0x71c;
            if (self->b10 >= 0x10000) self->b10 = 0x10000; else flag = 0;
            for (i = 0; i < 4; i++) {
                self->rec[i].w -= 0x7800;
                if (self->rec[i].w <= 0) self->rec[i].w = 0; else flag = 0;
            }
            self->rec[3].x -= 0x7800;
            if (self->rec[3].x <= 0) self->rec[3].x = 0; else flag = 0;
            self->d18 -= 0x7800;
            if (self->d18 <= 0) self->d18 = 0; else flag = 0;
            if (flag) {
                self->next = 1;
                func_02109084();
                if (*(s32 *)(data_0215be48 + 0xbc) == 15) func_020a1a40(0x2e);
            }
        }
        break;
    }
    case 1:
        self->f40 -= 0x6000;
        if (self->f40 <= 0) {
            self->f40 = 0;
            self->next = 2;
        }
        break;
    case 2: {
        s32 bVar1, bVar2;
        s32 bVar5;
        func_02108e24(1);
        if (*(s32 *)(data_0215be48 + 0x48b8) == 1) {
            self->next = 3;
            return;
        }
        if (*(s32 *)(data_0215be48 + 0x4860) != 0) {
            bVar1 = data_0214f004[0];
            bVar2 = data_0214f004[1];
            if (func_02112320(2, bVar1, bVar2) == 0) {
                func_02117a58(self->spr, 2, 0x20, 0, 0, 0, 1, 2, 2, 10, 10);
                func_021179b0(self->spr, bVar1, bVar2);
                self->sel = -2;
                self->next = 7;
                func_02108e24(0);
                func_02108e24(0);
                func_020a1a40(0x2f);
                return;
            }
            if ((*(u16 *)(data_0214f004 + 2) & 2) != 0) {
                bVar5 = 1;
                if (HitBox(*(u8 **)(data_0215be48 + 0x2318) + 8, 30, bVar1, bVar2)) {
                    self->sel = 0;
                } else if (HitBox(*(u8 **)(data_0215be48 + 0x2318) + 8, 36, bVar1, bVar2)) {
                    self->sel = 1;
                } else if (HitBox(*(u8 **)(data_0215be48 + 0x2318) + 8, 42, bVar1, bVar2)) {
                    self->sel = 2;
                } else if (HitBox(*(u8 **)(data_0215be48 + 0x2318) + 8, 48, bVar1, bVar2)) {
                    self->sel = 3;
                } else {
                    bVar5 = 0;
                }
                if (bVar5) {
                    s32 sel = self->sel;
                    if (sel == 0) {
                        func_02117a58(self->spr, 2, 7, 0, 0, 0, 1, 2, 2, 10, 10);
                        func_02112798(2, 0x42, 1);
                    } else {
                        func_02117a58(self->spr, 2, data_021331fc[sel * 6], 1, 4, 5, 0, 0, 0, 10, 10);
                    }
                    func_021179b0(self->spr, bVar1, bVar2);
                    pv[1] = 1;
                    self->next = 7;
                    func_02108e24(0);
                    func_020a1a40(2);
                }
            }
        }
        break;
    }
    case 3:
        if (*(s32 *)(data_0215be48 + 0x48bc) == 1) {
            self->next = 9;
            func_02109010();
            func_020a1a40(0x35);
        }
        break;
    case 4: {
        s32 flag = 1;
        s32 loc;
        s32 lim, ar;
        if (self->flag4c == 0) goto loop4;
        self->b10 -= 0x2492;
        if (self->b10 > 0) goto zero4;
        self->b10 = 0;
        if (func_02073828(func_0210e968(19, data_02146228), &loc) != 0) {
            func_0207c910(25, 0, loc + 12, 0x800);
        }
        self->flag4c = 0;
        goto loop4;
zero4:
        flag = 0;
loop4:
        for (i = 0; i < 4; i++) {
            self->rec[i].w += 0x7800;
            ar = self->arr108[i];
            if (self->rec[i].w >= ar) self->rec[i].w = ar;
            else flag = 0;
        }
        self->d18 += 0x7800;
        lim = self->x11c;
        if (self->d18 >= lim) self->d18 = lim; else flag = 0;
        self->rec[3].x += 0x7800;
        if (self->rec[3].x >= 0x50000) self->rec[3].x = 0x50000; else flag = 0;
        self->f40 += 0x6000;
        if (self->f40 >= 0x3c000) self->f40 = 0x3c000; else flag = 0;
        if (flag) self->next = 5;
        break;
    }
    case 5: {
        s32 flag = 1;
        s32 lim;
        self->b10 += 0x2492;
        if (self->b10 >= 0x10000) self->b10 = 0x10000; else flag = 0;
        self->g44 += 0x11111;
        if (self->g44 >= 0) self->g44 = 0; else flag = 0;
        self->h1c += 0x11111;
        if (self->h1c >= 0) self->h1c = 0; else flag = 0;
        self->c14 -= func_02067898(-self->x118, 0xf000);
        lim = self->x118;
        if (self->c14 > lim) flag = 0;
        else self->c14 = lim;
        if (flag) self->next = 6;
        break;
    }
    case 6: {
        s32 bVar1, bVar2;
        s32 bVar5;
        func_02108e24(1);
        if (*(s32 *)(data_0215be48 + 0x48b8) == 1) {
            func_020a1a40(0x41);
            self->next = 8;
            return;
        }
        if (*(s32 *)(data_0215be48 + 0x4860) != 0) {
            bVar1 = data_0214f004[0];
            bVar2 = data_0214f004[1];
            if ((*(u16 *)(data_0214f004 + 2) & 2) != 0) {
                bVar5 = 1;
                if (HitBox(*(u8 **)(data_0215be48 + 0x2318) + 8, 6, bVar1, bVar2)) {
                    self->sel = 0;
                } else if (HitBox(*(u8 **)(data_0215be48 + 0x2318) + 8, 12, bVar1, bVar2)) {
                    self->sel = 1;
                } else if (HitBox(*(u8 **)(data_0215be48 + 0x2318) + 8, 18, bVar1, bVar2)) {
                    self->sel = 2;
                } else if (HitBox(*(u8 **)(data_0215be48 + 0x2318) + 8, 24, bVar1, bVar2)) {
                    self->sel = 3;
                } else {
                    bVar5 = 0;
                }
                if (bVar5) {
                    func_02117a58(self->spr, 2, data_021331fc[self->sel * 6], 1, 4, 5, 0, 0, 0, 10, 10);
                    func_021179b0(self->spr, bVar1, bVar2);
                    pv[1] = 0;
                    self->next = 7;
                    func_02108e24(0);
                    func_020a1a40(2);
                }
            }
        }
        break;
    }
    case 7:
        if (func_021178a8(self->spr) != 0) {
            if (self->sel == -2) {
                self->next = 4;
            } else {
                func_02003c10(20);
                self->next = 12;
            }
        }
        if (self->f70 == 2) func_02112798(2, 0x42, 0);
        break;
    case 8:
        if (*(s32 *)(data_0215be48 + 0x48bc) == 1) {
            self->next = 11;
            func_02108e24(0);
        }
        break;
    case 9: {
        s32 flag = 1;
        self->a0c += 0x7800;
        if (self->a0c >= 0xb4000) self->a0c = 0xb4000; else flag = 0;
        self->b10 -= 0xaaa;
        if (self->b10 <= 0) self->b10 = 0;
        for (i = 0; i < 4; i++) {
            self->rec[i].w += 0x7800;
            if (self->rec[i].w >= 0xb4000) self->rec[i].w = 0xb4000; else flag = 0;
        }
        self->rec[3].x += 0x7800;
        if (self->rec[3].x >= 0xb4000) self->rec[3].x = 0xb4000; else flag = 0;
        self->d18 += 0x7800;
        if (self->d18 >= 0xb4000) self->d18 = 0xb4000; else flag = 0;
        self->g44 -= 0x11111;
        if (self->g44 <= -0x100000) self->g44 = -0x100000; else flag = 0;
        self->f40 += 0x6000;
        if (self->f40 >= 0x3c000) self->f40 = 0x3c000; else flag = 0;
        if (flag) {
            *pv = -1;
            func_020fddc0(15);
        }
        break;
    }
    case 10: {
        s32 flag = 1;
        s32 loc2;
        if (self->flag4c != 0) goto else10;
        self->b10 -= 0x2492;
        if (self->b10 > 0) goto zero10;
        self->b10 = 0;
        if (func_02073828(func_0210e968(19, data_02146240), &loc2) != 0) {
            func_0207c910(25, 0, loc2 + 12, 0x800);
        }
        self->flag4c = 1;
        goto loop10;
zero10:
        flag = 0;
        goto loop10;
else10:
        self->b10 += 0x2492;
        if (self->b10 >= 0x10000) self->b10 = 0x10000; else flag = 0;
loop10:
        for (i = 0; i < 4; i++) {
            self->rec[i].w -= 0x7800;
            if (self->rec[i].w <= 0) self->rec[i].w = 0; else flag = 0;
        }
        self->d18 -= 0x7800;
        if (self->d18 <= 0) self->d18 = 0; else flag = 0;
        self->rec[3].x -= 0x7800;
        if (self->rec[3].x <= 0) self->rec[3].x = 0; else flag = 0;
        self->f40 -= 0x6000;
        if (self->f40 <= 0) self->f40 = 0; else flag = 0;
        if (flag) self->next = 2;
        break;
    }
    case 11: {
        s32 flag = 1;
        self->g44 -= 0x11111;
        if (self->g44 <= -0x100000) self->g44 = -0x100000; else flag = 0;
        self->h1c -= 0x11111;
        if (self->h1c <= -0x100000) self->h1c = -0x100000; else flag = 0;
        self->c14 += func_02067898(-self->x118, 0xf000);
        if (self->c14 >= 0) self->c14 = 0; else flag = 0;
        if (flag) {
            self->next = 10;
            func_020a1a40(0x2e);
        }
        break;
    }
    case 12:
        if (func_02003a44() != 0) {
            *pv = self->sel;
            switch (*pv) {
            case 0:
                func_020fddc0(18);
                break;
            case 2:
                func_020fddc0(19);
                break;
            }
        }
        break;
    }
    func_020f6c28(self);
}
