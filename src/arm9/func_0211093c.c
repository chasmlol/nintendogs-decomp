#include "ctx.h"

typedef struct {
    u16 w0;         /* 0x00 */
    s16 id;         /* 0x02 */
    u8 pad04[8];
    u16 cnt;        /* 0x0c */
    u8 pad0e[18];
} Rec;              /* 0x20 */

typedef struct {
    s32 num;        /* 0x00 */
    u8 pad04[8];
    s32 sel;        /* 0x0c */
    u8 pad10[4];
    s32 cur;        /* 0x14 */
    u8 pad18[0x94 - 0x18];
    Rec recs[70];   /* 0x94 */
    s16 slot[2][3]; /* 0x954 */
} Board;

extern u16 data_02136764[];
extern u16 data_0213676c[];

extern s32 func_0211b228(s32 a);
extern s32 func_0211b190(s32 a);
extern void func_02110f30(s32 *a, s32 b);
extern void func_020ec510(s32 a);
extern void func_020280c0(s32 a, s32 b);
extern void func_02112798(s32 a, u16 b, s32 c);
extern s32 func_02112dec(s32 a, s32 b);
extern void func_02112dc4(s32 a, s32 b, s32 c);
extern void func_020a1a40(s32 a);
extern void func_02110c1c(Board *a, s32 b);
extern void func_020bc004(s32 a);
extern void func_020ec59c(s32 a);
extern void func_020a01cc(s32 a);
extern void func_02110dbc(Board *a, s32 *b, Rec *c);

#pragma opt_propagation off
#pragma opt_loop_invariants off

s32 func_0211093c(Board *b, s32 base)
{
    s32 ret = 0;
    s32 n = 0;
    Rec *rec = &b->recs[b->sel];
    s32 who = func_0211b228(b->cur);
    s32 h = func_0211b190(b->cur);
    s32 old = b->slot[0][who];
    s32 buf[9];
    s32 i;

    func_02110f30(buf, base);
    {
        s32 one;
        s32 id;
        i = 0;
        id = rec->id;
        do {
            one = 1;
            n += (id == b->slot[0][i]) ? one : 0;
            n += (id == b->slot[1][i]) ? one : 0;
            i++;
        } while (i < 3);
        if (h != 0 && b->cur < b->num) {
            if (id == b->slot[0][who]) {
                func_020ec510(who);
                func_020280c0(h, -1);
                func_02112798(2, base + data_02136764[b->cur], 0);
                func_02112dc4(2, base + data_0213676c[b->cur], func_02112dec(2, 40));
                b->slot[0][who] = -1;
                func_020a1a40(38);
                func_02110c1c(b, old);
                func_020bc004(who);
                ret = 1;
            } else if (rec->cnt > n) {
                func_020ec59c(who);
                func_020280c0(h, rec->id);
                func_020a01cc(rec->id);
                func_02112798(2, base + data_02136764[b->cur], 1);
                func_02112dc4(2, base + data_0213676c[b->cur], func_02112dec(2, 41));
                b->slot[0][who] = rec->id;
                func_02110dbc(b, buf, rec);
                if (rec->cnt <= n + 1) {
                    i = 0;
                    if (b->num > 0) {
                        do {
                            if (rec->id != b->slot[0][func_0211b228(i)]) {
                                func_02112dc4(2, base + data_0213676c[i], func_02112dec(2, 42));
                            }
                            i++;
                        } while (i < b->num);
                    }
                }
                if (old != -1) {
                    func_02110c1c(b, old);
                }
                func_020a1a40(37);
                func_020bc004(who);
                ret = 1;
            }
        }
    }
    return ret;
}
