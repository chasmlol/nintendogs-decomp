#include "ctx.h"

extern u8 *data_ov006_021661c0;
extern void func_ov006_02164678(void);
extern void func_0208f5c4(u8 *p, u32 v);
extern void func_0208f544(u8 *p, u32 f);
extern void func_0208f588(u8 *p, u8 *q);

void func_ov006_021646a4(u8 *param_1)
{
    func_0208f5c4(param_1, 0xff);
    *(u32 *)(param_1 + 0x28) = 0;
    func_0208f544(param_1, (u32)func_ov006_02164678);
    func_0208f588(data_ov006_021661c0 + 4, param_1);
}
