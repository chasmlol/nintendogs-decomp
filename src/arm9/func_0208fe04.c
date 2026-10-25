#include "ctx.h"

typedef struct {
    u16 lo : 14;
    u16 mode : 2;
} F16;

typedef struct {
    s16 x;
    s16 y;
    s16 w;
    s16 h;
    s32 e[3];
} TextRect;

typedef struct {
    u8 pad[0x17];
    u8 lineFeed;
} Font;

typedef struct {
    u16 depth;
    const u16 *str[2];
} StrStack;

static inline u32 AlignOf(F16 f)
{
    return f.mode;
}

extern const u16 *func_02090374(Font *font, const u16 *str, s32 *w, s32 hspace, u8 *ctx, s32 fixedw);
extern u32 func_02090618(Font *font, const u16 *str, s32 vspace, s32 a, s32 b);
extern s32 func_02086688(F16 align, s32 w);
extern s32 func_02086640(F16 valign, u32 h);
extern u8 func_02085e50(Font *font, u32 c);
extern void func_02086390(Font *font, s32 dst, s32 x, s32 y, u32 c, u32 color);
extern u8 func_02085f84(Font *font, u32 c);
extern const u16 *func_02090848(TextRect *out, const u16 *p, u32 color0, u32 *color, s32 *upper, u8 *ctx);

const u16 *func_0208fe04(TextRect *out, Font *font, s32 dst, F16 align, F16 valign, s32 hspace,
                         s32 vspace, const u16 *str, u32 color0, u8 *ctx, s32 fixedw)
{
    s32 x0;
    s32 y;
    BOOL cont;
    s32 adv;
    BOOL step;
    u32 i;
    s16 k;
    s32 maxw;
    const u16 *q;
    s32 x;
    const u16 *result;
    s32 w;
    s32 upper;
    u32 color;
    s32 lw;
    StrStack st;

    result = NULL;
    cont = TRUE;
    upper = 0;
    color = color0;
    st.depth = 0;
    for (i = 0; i < 2; i++) {
        st.str[i] = NULL;
    }
    out->x = 0;
    out->y = 0;
    out->w = 0;
    out->h = -1;
    for (k = 0; k < 3; k++) {
        out->e[k] = -1;
    }
    maxw = 0;
    q = str;
    lw = 0;
    if (str != NULL) {
        do {
            q = func_02090374(font, q, &lw, hspace, ctx, 0);
            if (maxw < lw) {
                maxw = lw;
            }
        } while (q != NULL);
    }
    {
        u32 h = func_02090618(font, str, vspace, 0, 1);
        x = func_02086688(align, maxw);
        y = func_02086640(valign, h);
    }
    {
        u32 m = AlignOf(align);
        if (m == 1) {
            maxw = (maxw + 1) / 2;
        } else if (m != 2) {
            maxw = 0;
        }
    }
    x += maxw;
    x0 = x;
    func_02090374(font, str, &w, hspace, ctx, fixedw);
    {
        u32 m = AlignOf(align);
        s32 d = w;
        if (m == 1) {
            d = (d + 1) / 2;
        } else if (m != 2) {
            d = 0;
        }
        x -= d;
    }
    st.str[st.depth] = str;
    do {
        const u16 *p;
        u16 c;
        adv = 2;
        step = TRUE;
        p = st.str[st.depth];
        c = *p;
        switch (c) {
        case 26: {
            const u16 *q;
            adv = p[1] & 0xff;
            q = func_02090848(out, p, color0, &color, &upper, ctx);
            if (q != NULL) {
                step = FALSE;
                st.str[st.depth] = (const u16 *)((u32)adv + (u32)p);
                st.depth++;
                st.str[st.depth] = q;
            }
            break;
        }
        case 10: {
            u32 m;
            s32 d;
            x = x0;
            func_02090374(font, p + 1, &w, hspace, ctx, fixedw);
            m = AlignOf(align);
            d = w;
            if (m == 1) {
                d = (d + 1) / 2;
            } else if (m != 2) {
                d = 0;
            }
            x -= d;
            y += font->lineFeed + vspace;
            break;
        }
        case 0:
            if (st.depth == 0) {
                cont = FALSE;
                result = NULL;
            } else {
                st.str[st.depth] = NULL;
                step = FALSE;
                st.depth--;
            }
            break;
        default:
            if (upper != 0) {
                if (c >= 'a' && c <= 'z') {
                    c = (u16)(c - 0x20);
                } else if (c >= 0xe0 && c <= 0xfd && c != 0xf7) {
                    c = (u16)(c - 0x20);
                }
                upper = 0;
            }
            func_02086390(font, dst, x - func_02085e50(font, c), y, c, color);
            if (fixedw != 0) {
                x += fixedw + hspace;
            } else {
                x += hspace + func_02085f84(font, c);
            }
            break;
        case 13:
            break;
        }
        if (step) {
            st.str[st.depth] = (const u16 *)((u32)adv + (u32)st.str[st.depth]);
            if (out->x == 1 && st.depth == 0) {
                result = st.str[st.depth];
                cont = FALSE;
                while (*result == 10) {
                    result++;
                }
                if (*result == 0) {
                    result = NULL;
                }
            }
        }
    } while (cont);
    return result;
}
