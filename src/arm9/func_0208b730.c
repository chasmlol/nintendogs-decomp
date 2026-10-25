#include "ctx.h"

extern u32 data_0213ea08[];
extern u32 data_0213eb08[];
extern u32 data_0213eb04[];
extern u32 data_0213eb1c[];
extern u32 data_0213eb28[];
extern u32 data_0213eb3c[];
extern void func_0205f050();
extern u32 *func_0208c720(u8 *p, u32 *a, u8 *buf, u32 z);
extern u32 func_0207df48(u8 *buf);
extern u32 func_02006b78(u32 v);
extern void func_0207df9c(u32 *p);

void func_0208b730(u8 *p, u32 idx, u32 *out)
{
    u8 buf[64];
    u32 *e04;
    u32 v5;
    u32 *r4;

    v5 = data_0213ea08[idx];
    e04 = (u32 *)data_0213eb04;
    func_0205f050(buf, 64, data_0213eb08, v5);
    out[0] = 0;
    out[1] = 0;
    out[2] = 0;
    r4 = func_0208c720(p, e04, buf, 0);
    func_0205f050(buf, 64, data_0213eb1c, e04, v5);
    out[0] = func_0207df48(buf);
    func_0205f050(buf, 64, data_0213eb28, e04, v5);
    out[1] = func_0207df48(buf);
    func_0205f050(buf, 64, data_0213eb3c, e04, v5);
    out[2] = func_02006b78(func_0207df48(buf));
    func_0207df9c(r4);
}
