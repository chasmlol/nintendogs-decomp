#include "ctx.h"

extern u8 *data_02150e80;
extern u8 *data_02150e6c;
extern u32 data_02150e84;
extern u32 data_0213e4dc;

extern void func_0206c804(u32 *p, u8 *q, u32 n);
extern void func_0206c360(u32 a, u32 b, u8 *c, u32 d);
extern void func_0206c0d8(u32 a, u32 b, u8 *c, u32 d, u8 *e, u32 f);

#pragma opt_propagation off
void func_0206bc8c(u32 *param_1, u32 param_2, u32 param_3)
{
    u32 lim;
    u8 *q;
    u8 *puVar2;
    u32 rem;

    puVar2 = data_02150e80;
    if (puVar2 == NULL) {
        q = data_02150e6c + param_2;
    } else {
        lim = data_02150e84;
        if (param_2 + param_3 < lim) {
            q = data_02150e6c + param_2;
        } else if (param_2 >= lim) {
            q = puVar2 + param_2 - lim;
        } else {
            u8 *x;
            rem = lim - param_2;
            x = data_02150e6c + param_2;
            if (data_0213e4dc != -1 && rem > 0x30) {
                func_0206c360(data_0213e4dc, (u32)param_1, x, rem);
            } else {
                func_0206c804(param_1, x, rem);
            }
            if (data_0213e4dc != -1) {
                func_0206c0d8(data_0213e4dc, (u32)param_1 + rem, puVar2, param_3 - rem, NULL, 0);
                return;
            }
            func_0206c804((u32 *)((u8 *)param_1 + rem), puVar2, param_3 - rem);
            return;
        }
    }
    if (data_0213e4dc != -1) {
        func_0206c0d8(data_0213e4dc, (u32)param_1, q, param_3, NULL, 0);
        return;
    }
    func_0206c804(param_1, q, param_3);
}
