#include "ctx.h"
extern u8 data_02159424[];
extern u8 data_0214f138[];
extern u8 data_02159438[];
extern void func_0206b714(void *a, s32 b, s32 c);
extern void func_0206b6ac(void *a, s32 b, s32 c);
extern void func_020fcbb4(void);
extern s32 func_020f523c(void);
extern void func_ov004_0215cbec(void);
extern void func_020bc7d4(void);
extern void func_020ec630(void);
extern void func_0207c990(void);
extern void func_020425f8(void);
extern void func_020aa18c(void);
extern void func_020fcacc(void);

void func_020a5060(void)
{
    u16 * p;
    int iVar1;
    void (*fp)(u8 *);

    p = *(u16 **)(*(u8 **)data_02159424 + 0xc);
    func_0206b714(*(void **)(2 + p), 0, (*p) << 3);
    p = *(u16 **)(*(u8 **)data_02159424 + 0x10);
    func_0206b6ac(*(void **)(2 + p), 0, (*p) << 3);
    func_020fcbb4();
    fp = (void (*)(u8 *))(*(u32 *)(0x14 + data_0214f138));
    if (fp != 0) {
        fp(data_0214f138);
    }
    iVar1 = func_020f523c();
    if (iVar1 != 0) {
        func_ov004_0215cbec();
    }
    func_020bc7d4();
    func_020ec630();
    func_0207c990();
    func_020425f8();
    if ((*(u16 *)(*(u8 **)data_02159438 + 4) & 1) != 0) {
        func_020aa18c();
    }
    func_020fcacc();
}
