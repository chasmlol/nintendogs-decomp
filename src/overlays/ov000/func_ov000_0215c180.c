#pragma avoid_byte strb
#include "ctx.h"

extern u8 *data_ov000_0215c584;
extern u8 data_0214f138[];
extern void func_0206b714(u32 a, u32 b, u32 c);
extern void func_0206b6ac(u32 a, u32 b, u32 c);
extern void func_020fcbb4(void);
extern void func_0207c990(void);
extern void func_020fcacc(void);

void func_ov000_0215c180(void)
{
    u8 *q;
    void (*cb)(u8 *);

    q = *(u8 **)data_ov000_0215c584;
    func_0206b714(*(u32 *)(q + 4), 0, (u32)*(u16 *)q << 3);
    q = *(u8 **)(data_ov000_0215c584 + 4);
    func_0206b6ac(*(u32 *)(q + 4), 0, (u32)*(u16 *)q << 3);
    func_020fcbb4();
    cb = *(void (**)(u8 *))(data_0214f138 + 0x14);
    if (cb != 0) {
        cb(data_0214f138);
    }
    func_0207c990();
    func_020fcacc();
}
