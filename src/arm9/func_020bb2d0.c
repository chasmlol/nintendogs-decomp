#include "ctx.h"

extern u8 data_021425ec[];
extern u8 *data_02159444;
extern int func_02093990(void);
extern int func_0210befc(u32 p1);
extern int func_01ffdb08(int a);
extern int func_0202817c(int a);
extern u8 func_02028100(int a);
extern int func_0208fc60(u32 a, u32 b);

int func_020bb2d0(u32 p1, u32 p2)
{
    int r;
    int t;

    r = (int)data_021425ec;
    if (p1 > 0x30005) goto big;
    if (p1 < 0x30000) goto done;
    if (p1 == 0x30000) goto c0;
    if (p1 == 0x30002) goto c2;
    if (p1 != 0x30005) goto done;
    goto c5;
    goto done;
big:
    if (p1 != 0x3000d) goto done;
    goto c13;
    goto done;
c0:
    r = func_02093990();
    goto done;
c2:
    if (p2 == 0) goto c2z;
    r = func_0210befc(p1);
    goto done;
c2z:
    t = func_01ffdb08(*(s16 *)(data_02159444 + 0x11c));
    r = func_0202817c(t);
    r = r + 120;
    goto done;
c13:
    t = func_01ffdb08(*(s16 *)(data_02159444 + 0x11c));
    r = func_0202817c(t);
    r = *(s16 *)(data_02159444 + 0x11e) * 60 + (r + 0x90);
    r = r + 0x12;
    goto done;
c5:
    t = func_01ffdb08(*(s16 *)(data_02159444 + 0x11c));
    if (t != 0) {
        r = func_0208fc60(func_02028100(t), p2);
    }
done:
    return r;
}
