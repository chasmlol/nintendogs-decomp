#include "ctx.h"

typedef struct {
    void (*func)(void *);
    u32 enable;
    void *arg;
} OSIrqCallbackInfo;

extern OSIrqCallbackInfo data_02155c84[];
extern void func_0207ec14(u32 mask);

void func_0207ec80(u32 timerNo, void (*callback)(void *), void *arg)
{
    (data_02155c84 + 4)[timerNo].func = callback;
    (data_02155c84 + 4)[timerNo].arg = arg;
    func_0207ec14(1 << (timerNo + 3));
    (data_02155c84 + 4)[timerNo].enable = 1;
}
