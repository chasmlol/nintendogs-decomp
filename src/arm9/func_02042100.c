#include "ctx.h"

extern u32 data_0214f464;
extern u32 data_0215942c;
extern u32 data_0213b448;
extern u32 data_0214f460;
extern void func_020421b8(s32 a);
extern void func_0203e910(s32 a);
extern void func_0208b9b0(void);
extern void func_02043edc(void);

void func_02042100(void)
{
    s32 i;
    s32 iVar3;

    i = 0;
    do {
        if (i < 0 || i >= 3) {
            iVar3 = 0;
        } else {
            iVar3 = *(s32 *)(*(u8 **)&data_0214f464 + i * 4 + 0x54);
        }
        func_020421b8(i);
        if (iVar3 != 0) {
            func_0203e910(iVar3);
        }
        i = (s8)(i + 1);
    } while (i < 3);
    func_0208b9b0();
    func_02043edc();
    if (*(u16 *)*(u8 **)&data_0215942c == 0) {
        data_0213b448 = 0;
    }
    data_0214f460 = 0;
    data_0214f464 = 0;
}
