#include "ctx.h"

extern u8 data_0214b3a4[];
extern void func_0210f038(void);
extern int func_0209561c(void);
extern u16 *func_020955c0(int idx);

typedef struct { u32 w[8]; } Q8;

int func_0211bb74(u32 *param_1, int param_2, int param_3)
{
    int k;
    int j;
    u8 *tbl;
    u16 *e;
    int b;
    int a;
    u32 *dst;
    int count;
    int zero;
    int n;
    int c;
    u32 m;

    tbl = data_0214b3a4;
    count = 0;
    func_0210f038();
    if (*(s16 *)(tbl + 4) != -1) {
        zero = 0;
        (void)&zero;
        m = 0xffff;
        dst = param_1;
        do {
            j = zero;
            if (param_3 == 4) {
                k = j;
                n = func_0209561c();
                if (n > 0) {
                    do {
                        e = (u16 *)zero;
                        a = -1;
                        b = (int)e;
                        do {
                            a = (s16)(a + 1);
                            while (a < 3 && *func_020955c0(a) == m) {
                                a = (s16)(a + 1);
                            }
                            c = b;
                            b = (s16)(b + 1);
                        } while (c < k);
                        if (a >= 3) {
                            a = -1;
                        }
                        if (a >= 0) {
                            e = func_020955c0(a);
                        }
                        k = k + 1;
                        if (*(s16 *)(tbl + 2) == *(s16 *)((u8 *)e + 6)) {
                            j = j + 1;
                        }
                        n = func_0209561c();
                    } while (k < n);
                }
            }
            if (*(s16 *)(tbl + 4) == param_3 && (int)*(u16 *)(tbl + 12) > j && *(u16 *)(tbl + 20) != 0x80) {
                *(Q8 *)dst = *(Q8 *)tbl;
                dst = dst + 8;
                count = count + 1;
            }
            tbl = tbl + 32;
        } while (*(s16 *)(tbl + 4) != -1);
    }
    return count;
}
