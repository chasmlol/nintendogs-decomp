#include "ctx.h"

typedef void (*OSIrqFunction)(void);
typedef struct {
    void (*func)(void *);
    u32 enable;
    void *arg;
} OSIrqCallbackInfo;

extern OSIrqFunction data_027c0004[];
extern OSIrqCallbackInfo data_02155c84[];

void func_0207eda4(u32 intrBit, OSIrqFunction function)
{
    int i;
    OSIrqCallbackInfo *info;

    for (i = 0; i < 22; i++) {
        if (intrBit & 1) {
            info = NULL;
            if (8 <= i && i <= 11) {
                info = &data_02155c84[i - 8];
            } else if (3 <= i && i <= 6) {
                info = &data_02155c84[i - 3 + 4];
            } else {
                data_027c0004[i] = function;
            }
            if (info) {
                info->func = (void (*)(void *))function;
                info->arg = 0;
                info->enable = TRUE;
            }
        }
        intrBit >>= 1;
    }
}
