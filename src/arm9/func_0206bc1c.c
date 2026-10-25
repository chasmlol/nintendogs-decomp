#include "ctx.h"

extern int data_0213e4dc;
extern int data_02150e7c;
extern int data_02150e84;
extern int data_02150e80;
extern int data_02150e6c;
extern void func_0206c068(int a);
extern void func_020691e8(int a);

void func_0206bc1c(void)
{
    if (data_0213e4dc != -1) {
        func_0206c068(data_0213e4dc);
    }
    func_020691e8(data_02150e7c);
    data_02150e84 = 0;
    data_02150e80 = 0;
    data_02150e6c = 0;
    data_02150e7c = 0;
}
