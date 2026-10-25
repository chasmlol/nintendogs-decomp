#include "ctx.h"

typedef struct { u32 f; u32 z; } FP2;

extern FP2 data_021517c8;
extern FP2 data_021517d4;
extern u32 data_021517c4;
extern s8 data_021517bc;
extern u32 data_021517c0;
extern void func_0206fdb4(void);
extern void func_0206fda8(void);
extern void func_02089c1c(void);
extern void func_02002250(void *p);
extern void func_02002238(void *p);
extern void func_0206ff24(void);
extern void func_020715fc(void);
extern void func_0207072c(void);

void func_0206fe7c(void)
{
    if (data_021517c4 != 0) {
        return;
    }
    data_021517c4 = 1;
    func_02089c1c();
    data_021517c8.f = (u32)func_0206fdb4;
    data_021517c8.z = 0;
    data_021517d4.f = (u32)func_0206fda8;
    data_021517d4.z = 0;
    func_02002250((void *)&data_021517c8);
    func_02002238((void *)&data_021517d4);
    func_0206ff24();
    func_020715fc();
    func_0207072c();
    data_021517bc = -1;
    data_021517c0 = 1;
}
