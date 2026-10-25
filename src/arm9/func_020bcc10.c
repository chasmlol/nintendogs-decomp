#include "ctx.h"

extern int data_02159468;
extern void func_020bca08(int arg);
extern void func_0208db60(int arg);

void func_020bcc10(void)
{
    func_020bca08(0);
    func_0208db60(*(int *)(data_02159468 + 0x28));
    data_02159468 = 0;
}
