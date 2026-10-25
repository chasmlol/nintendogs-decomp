#include "ctx.h"

typedef struct Six {
    u32 w[6];
} Six;

extern u32 data_02144b9c[];
extern void func_020e84a4(void);
extern void func_020e8720(int p);
extern void func_020e8674(int p);
extern void func_020e8518(int p);
extern void func_020c87ec(int p, void *f, u32 *v);
extern void func_020c8758(int p, int v);
extern void func_020c866c(int p);

void func_020e83d0(int param_1)
{
    u32 local_28[6];
    s16 sVar;

    sVar = *(s16 *)(param_1 + 0x90);
    switch (sVar) {
    case 0:
        break;
    case 2:
        func_020e8720(param_1);
        return;
    case 3:
        func_020e8674(param_1);
        return;
    case 1:
        func_020e8518(param_1);
        return;
    case 4:
        *(Six *)local_28 = *(Six *)data_02144b9c;
        func_020c87ec(param_1, (void *)func_020e84a4, local_28);
        return;
    case 5:
        func_020c8758(param_1, 0x1000);
        return;
    case 6:
        break;
    case 7:
        break;
    case 8:
        func_020c866c(param_1);
        break;
    }
}
