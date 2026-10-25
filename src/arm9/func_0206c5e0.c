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
extern void func_0206c56c(void *arg);
extern void func_0207eccc(u32 dmaNo, MIDmaCallback callback, void *arg);
extern void func_01ffdc44(u32 dmaNo, u32 src, u32 dest, u32 ctrl);
extern u32 func_0207eb98(u32 mask);

#define MIi_GX_LENGTH_ONCE (118 * sizeof(u32))

void func_0206c5e0(void)
{
    u32 src;
    u32 length;

    length = data_02150e88.length;
    if (length == 0) {
        return;
    }
    if (length >= MIi_GX_LENGTH_ONCE) {
        length = MIi_GX_LENGTH_ONCE;
    }
    src = data_02150e88.src;

    data_02150e88.length -= length;
    data_02150e88.src = src + length;

    if (data_02150e88.length == 0) {
        func_0207eccc(data_02150e88.dmaNo, func_0206c56c, 0);
        func_01ffdc44(data_02150e88.dmaNo, src, 0x04000400, 0xc4400000 | (length / 4));
        (void)func_0207eb98(0x200000);
    } else {
        func_01ffdc44(data_02150e88.dmaNo, src, 0x04000400, 0x84400000 | (length / 4));
        (void)func_0207eb98(0x200000);
    }
}
