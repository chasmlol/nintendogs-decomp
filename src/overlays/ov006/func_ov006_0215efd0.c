#include "ctx.h"
#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))
extern s32 func_02035770(u8 *obj, s32 n);
extern void func_02025e94(u8 *obj);
extern s32 func_0203579c(u8 *obj, s32 n);
extern s32 func_02028124(u8 *obj);
extern void func_ov006_0215f0e8(u8 *obj);
void func_ov006_0215efd0(u8 *obj)
{
    if (func_02035770(obj, 10))
        func_02025e94(obj);
    if (func_0203579c(obj, 10)) {
        *(s32 *)(obj + 0x25c) = FX_Mul(func_02028124(obj), -112);
        *(s32 *)(obj + 0x264) = *(s32 *)(obj + 0x25c) * -14;
    }
    func_ov006_0215f0e8(obj);
}
