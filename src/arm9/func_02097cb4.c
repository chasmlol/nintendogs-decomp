#include "ctx.h"

typedef volatile s16 vs16;

typedef struct Obj {
    u8 p00[12];
    u8 *p0c;
    u8 *p10;
    u8 *p14;
    u32 *p18;
    u8 p1c[64];
    u32 *p5c;
    u8 p60[12];
    s16 state;
    s16 counter;
    s16 c70;
    s16 c72;
    s16 p74;
    u8 p76[4];
    u16 p7a;
    u8 p7c[8];
    u32 p84;
    u8 p88[4];
    u32 cb;
    s16 p90;
    s16 p92;
    s16 p94;
    s16 p96;
    s16 p98;
    s16 p9a;
    s16 p9c;
    u8 p9e[2];
    u32 pa0;
    u32 pa4;
    u8 pa8[4];
    u32 flag_ac;
} Obj;

typedef struct { u8 b0; u8 b1; u16 h2; } Tab4;
typedef struct { u8 pad[0x18]; u32 fn18; } Vt;

extern Obj *data_02159060;
extern u32 data_0215905c;
extern u32 data_02159058;
extern u16 data_0212f708;
extern Tab4 data_0214f004;
extern Vt data_02136984;

extern s32 func_02098aec(void *o);
extern void func_02099de4(void);
extern void func_02099c30(void);
extern void func_02099cec(void);
extern void func_02099920(void);
extern void func_020999e0(void);
extern void func_02099ac8(void);
extern void func_0209f438(void);
extern void func_0209f2d4(void);
extern s32 func_02067898(s32 a, s32 b);
extern s32 func_02098a94(void);
extern void func_02098984(s32 a, s32 b, s32 c);
extern void func_02098798(s32 a, s32 b);
extern void func_0206c7bc(u16 data, void *dest, u32 size);
extern s32 func_020905f8(u32 a, u32 b, s32 c, u32 d);
extern void func_0206c7d4(void *d, void *s, u32 n);
extern void func_0207c910(s32 a, s32 b, void *c, s32 d);
extern void func_020a1a40(s32 a);

typedef struct {
    s16 x : 12;
    u16 align : 2;
    u16 mode : 2;
} TextPos;

extern s32 func_0208fd90(void *buf, u32 font, u32 *item, TextPos x, TextPos y, s32 p6, s32 p7, u32 str, s32 p9, u32 cb);

#define FXM(v) ((s32)(((s64)(v) * 786432 + 0x800) >> 12) >> 12)

void func_02097cb4(void)
{
    s32 flag;
    Obj *p1;
    TextPos y;
    vu16 fill;
    TextPos x;
    u8 buf[20];
    if (data_0215905c != 0) return;
    flag = 0;
    data_02159060->flag_ac = 0;
    switch (data_02159060->state) {
    case 0:
        if (func_02098aec(data_02159060) == 0) return;
        data_02159060->state = 1;
        data_02159060->counter = 0;
        data_02159060->cb = (u32)func_02099de4;
        data_02159060->p90 = 0;
        data_02159060->p92 = -192;
        func_0209f438();
        return;
    case 1:
        data_02159060->counter++;
        if (data_02159060->counter >= 15) {
            data_02159060->state = 2;
            data_02159060->counter = 0;
            data_02159060->cb = (u32)func_02099c30;
            data_02159060->p90 = -8;
            data_02159060->p92 = 0;
            return;
        }
        data_02159060->cb = (u32)func_02099cec;
        p1 = data_02159060;
        {
            s32 t = p1->counter * -8;
            p1->p90 = t / 15;
        }
        {
            s32 v = ((s32 (*)(s32))data_02136984.fn18)(func_02067898((s32)data_02159060->counter << 12, 0xf000));
            data_02159060->p92 = FXM(v) - 192;
        }
        return;
    case 2:
        switch (data_02159060->p94) {
        case 0:
            if (data_02159060->p98 > 0) {
                data_02159060->p98--;
                if (data_02159060->p98 <= 0) flag = 1;
            }
            break;
        case 5:
            data_02159060->c70++;
            if (data_02159060->c70 >= 9) {
                data_02159060->c70 = 0;
                data_02159060->c72 = (data_02159060->c72 + 1) % 3;
                {
                    u32 off = (s32)data_02159060->c72 * 384u;
                    u8 *base = data_02159060->p14;
                    if (data_02159060->p74 != 0) {
                        u8 *q = base + 12;
                        func_0207c910(11, 1152, q + off, 384);
                    } else {
                        u8 *q = base + 12;
                        func_0207c910(24, 1152, q + off, 384);
                    }
                }
            }
            if (data_02159060->p98 > 0) {
                data_02159060->p98--;
                if (data_02159060->p98 <= 0) flag = 1;
            }
            break;
        case 1:
            if ((data_0214f004.h2 & 2) != 0) {
                u8 b0 = data_0214f004.b0;
                u8 b1 = data_0214f004.b1;
                if (b0 >= 192 && b0 <= 223 && b1 >= 152 && b1 <= 183) flag = 1;
            }
            if (flag != 0) {
                u8 *base = data_02159060->p10;
                if (data_02159060->p74 != 0) {
                    u32 *q = (u32 *)base + 3;
                    func_0207c910(11, 1152, (u8 *)q + 1152, 384);
                } else {
                    u32 *q = (u32 *)base + 3;
                    func_0207c910(24, 1152, (u8 *)q + 1152, 384);
                }
                func_020a1a40(14);
            }
            break;
        case 2:
            if ((data_0214f004.h2 & 2) != 0) {
                u8 b0 = data_0214f004.b0;
                u8 b1 = data_0214f004.b1;
                if (b0 >= 192 && b0 <= 223 && b1 >= 152 && b1 <= 183) flag = 1;
            }
            if (flag != 0) {
                u8 *base = data_02159060->p10;
                if (data_02159060->p74 == 0) {
                    u32 *q = (u32 *)base + 3;
                    func_0207c910(11, 1152, (u8 *)q + 1152, 384);
                } else {
                    u32 *q = (u32 *)base + 3;
                    func_0207c910(24, 1152, (u8 *)q + 1152, 384);
                }
                func_020a1a40(14);
            }
            break;
        case 3:
            if (data_02159060->p9c >= 0) {
                data_02159060->p9a = data_02159060->p9c;
                data_02159060->p9c = -1;
            } else {
                data_02159060->p9a = (s16)func_02098a94();
            }
            if (data_02159060->p9a >= 0) {
                flag = 1;
                if (data_02159060->p9a != 0) {
                    data_02159060->p96 = 0;
                    func_020a1a40(flag);
                } else {
                    data_02159060->p96 = flag;
                    func_020a1a40(0);
                }
            }
            break;
        case 4:
            if (data_02159060->p9c < 0) {
                s16 v = -1;
                if ((data_0214f004.h2 & 2) != 0) {
                    u8 b0 = data_0214f004.b0;
                    u8 b1 = data_0214f004.b1;
                    if (b0 >= 56 && b0 <= 199 && b1 >= 154 && b1 <= 182) v = flag;
                }
                data_02159060->p9a = v;
            } else {
                data_02159060->p9a = data_02159060->p9c;
                data_02159060->p9c = -1;
            }
            if (data_02159060->p9a >= 0) {
                flag = 1;
                data_02159060->p96 = flag;
                func_020a1a40(12);
            }
            break;
        default:
            break;
        }
        if (flag != 0) {
            if (data_02159060->state == 2) {
                data_02159060->state = 3;
                data_02159060->counter = 0;
            }
            data_02159060->flag_ac = 1;
        }
        return;
    case 3:
        data_02159060->counter++;
        if (data_02159060->p96 >= 0) func_02098984(data_02159060->p96, data_02159060->counter, 10);
        if (data_02159060->counter < 10) return;
        data_02159060->state = 4;
        data_02159060->counter = 0;
        switch (data_02159060->p94) {
        case 1:
            {
                u8 *base = data_02159060->p0c;
                if (data_02159060->p74 != 0) {
                    u32 *q = (u32 *)base + 3;
                    func_0207c910(11, 1152, (u8 *)q + 1152, 384);
                } else {
                    u32 *q = (u32 *)base + 3;
                    func_0207c910(24, 1152, (u8 *)q + 1152, 384);
                }
            }
            return;
        case 2:
            {
                u8 *base = data_02159060->p0c;
                if (data_02159060->p74 == 0) {
                    u32 *q = (u32 *)base + 3;
                    func_0207c910(11, 1152, (u8 *)q + 1152, 384);
                } else {
                    u32 *q = (u32 *)base + 3;
                    func_0207c910(24, 1152, (u8 *)q + 1152, 384);
                }
            }
            return;
        }
        return;
    case 4:
        data_02159060->counter++;
        if (data_02159060->p96 >= 0) func_02098984(data_02159060->p96, (s16)(10 - data_02159060->counter), 10);
        if (data_02159060->counter < 10) return;
        if (data_02159060->pa0 == 0) {
            data_02159060->state = 8;
            data_02159060->counter = 0;
            data_02159060->cb = (u32)func_02099ac8;
            func_0209f2d4();
            return;
        }
        data_02159060->state = 5;
        data_02159060->counter = 0;
        return;
    case 5:
        data_02159060->counter++;
        func_02098798(data_02159060->counter, 20);
        if (data_02159060->counter < 20) return;
        data_02159060->state = 6;
        data_02159060->counter = flag;
        return;
    case 6:
        {
            u32 *pp = data_02159060->p5c;
            fill = 0xffff;
            func_0206c7bc(fill, (void *)pp[0], pp[4]);
        }
        {
            Obj *o = data_02159060;
            u32 old = o->pa0;
            s32 w;
            x = *(TextPos *)&data_0212f708;
            {
                TextPos z = {0};
                y = z;
            }
            w = func_020905f8(data_02159058, old, 5, o->p84);
            y.x = (80 - w) / 2;
            o->pa0 = func_0208fd90((void *)buf, data_02159058, o->p5c, x, y, 1, 5, old, 9, o->p84);
        }
        {
            u32 *pp = data_02159060->p5c;
            if (data_02159060->p74 != 0) func_0207c910(7, 0, (void *)pp[0], pp[4]);
            else func_0207c910(20, 0, (void *)pp[0], pp[4]);
        }
        data_02159060->state = 7;
        data_02159060->counter = 0;
        return;
    case 7:
        data_02159060->counter++;
        func_02098798((s16)(20 - data_02159060->counter), 20);
        if (data_02159060->counter < 20) return;
        data_02159060->state = 2;
        data_02159060->counter = flag;
        func_0206c7d4((void *)((u8 *)data_02159060->p18[3] + 448), data_02159060->p1c, 64);
        {
            u8 *pb = data_02159060->p1c;
            if (data_02159060->p74 != 0) func_0207c910(15, 448, pb, 64);
            else func_0207c910(31, 448, pb, 64);
        }
        return;
    case 8:
        data_02159060->counter++;
        if (data_02159060->counter >= 15) {
            data_02159060->state = 0;
            data_02159060->counter = 0;
            data_02159060->cb = (u32)func_02099920;
            data_02159060->p90 = 0;
            data_02159060->p92 = 192;
            if (data_02159060->p7a == 0xffff) data_02159060->pa4 = 1;
            return;
        }
        data_02159060->cb = (u32)func_020999e0;
        {
            s32 t = data_02159060->counter * -8;
            data_02159060->p90 = -8 - t / 15;
        }
        {
            s32 v = ((s32 (*)(s32))data_02136984.fn18)(func_02067898((s32)data_02159060->counter << 12, 0xf000));
            data_02159060->p92 = FXM(v);
        }
        break;
    default:
        break;
    }
}
