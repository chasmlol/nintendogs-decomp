#include "ctx.h"

typedef void (*MIDmaCallback)(void *arg);

typedef struct {
    volatile BOOL isBusy;
    u32 dmaNo;
    u32 src;
    u32 length;
    MIDmaCallback callback;
    void *arg;
    u32 fifoCond;
    void (*fifoFunc)(void);
} MIiGXDmaParams;

extern MIiGXDmaParams data_02150e88;
extern void func_0206c46c(void *arg);
extern void func_0206bf30(u32 dmaNo, u32 timing);
extern void func_0206bec0(u32 dmaNo, u32 src, u32 size, u32 dir);
extern void func_0206c068(u32 dmaNo);
extern void func_0207eccc(u32 dmaNo, MIDmaCallback callback, void *arg);
extern void func_01ffdc44(u32 dmaNo, u32 src, u32 dest, u32 ctrl);

void func_0206c4ac(u32 dmaNo, const void *src, u32 commandLength, MIDmaCallback callback, void *arg)
{
    if (commandLength == 0) {
        if (callback) {
            (callback)(arg);
        }
        return;
    }

    while (data_02150e88.isBusy) {
    }

    data_02150e88.isBusy = TRUE;
    data_02150e88.dmaNo = dmaNo;
    data_02150e88.callback = callback;
    data_02150e88.arg = arg;

    func_0206bf30(dmaNo, 0x38000000);
    func_0206bec0(dmaNo, (u32)src, commandLength, 0);

    func_0206c068(dmaNo);
    func_0207eccc(dmaNo, func_0206c46c, 0);
    func_01ffdc44(dmaNo, (u32)src, 0x04000400, 0xfc400000 | (commandLength / 4));
}
