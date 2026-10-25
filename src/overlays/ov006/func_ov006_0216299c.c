#include "ctx.h"

extern void func_ov006_02162a80(s32 p);
extern void func_02067e68(s32 *a, s32 *b, s32 *c);
extern void func_ov006_02162ef4(s32 p, s32 i);

typedef struct {
    s32 pad0;
    s32 flag[2];
    s32 a[6];
    s32 b[6];
    u8 pad1[16];
    s32 cnt[2];
    u8 *ptr;
    u8 *ptr2[2];
} S;

void func_ov006_0216299c(s32 param_1)
{
    S *s;
    s32 i;
    s32 *piVar5;
    s32 *piVar3;
    s32 *piVar2;
    s32 *piVar4;

    s = *(S **)(param_1 + 0x2c);
    func_ov006_02162a80(param_1);
    piVar3 = s->a;
    piVar5 = (s32 *)s;
    piVar4 = piVar3;
    piVar2 = s->b;
    i = 0;
    do {
        if (s->flag[i] == 1) {
            piVar5[10] = piVar5[10] - 82;
            if (piVar5[4] + piVar5[10] <= 0) {
                piVar5[10] = 0;
            } else {
                func_02067e68(piVar4, piVar2, piVar3);
            }
            if (s->cnt[i] > 0) {
                s->cnt[i] = s->cnt[i] - 1;
                if (s->cnt[i] == 0) {
                    func_ov006_02162ef4(param_1, i);
                }
            }
        }
        func_02067e68((s32 *)(s->ptr + 0x30), piVar4, (s32 *)(s->ptr2[i] + 0x30));
        i++;
        piVar5 += 3;
        piVar3 += 3;
        piVar2 += 3;
        piVar4 += 3;
    } while (i < 2);
}
