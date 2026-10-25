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

#define reg_G3X_GXSTAT (*(vu32 *)0x04000600)

extern MIiGXDmaParams data_02150e88;
extern void func_0206bec0(u32 dmaNo, u32 src, u32 size, u32 dir);
extern void func_0206c068(u32 dmaNo);
extern u32 func_02080b08(void);
extern void *func_0207ed18(u32 mask);
extern void func_0207eda4(u32 mask, void (*func)(void));
extern u32 func_0207ec14(u32 mask);
extern void func_0206c5e0(void);
extern u32 func_02080b1c(u32 enabled);

void func_0206c6a8(u32 dmaNo, const void *src, u32 commandLength, MIDmaCallback callback, void *arg)
{
    if (commandLength == 0) {
        if (callback) {
            (callback)(arg);
        }
        return;
    }

    while (data_02150e88.isBusy) {
    }

    while (!(((reg_G3X_GXSTAT & 0x07000000) >> 24) & 2)) {
    }

    data_02150e88.isBusy = TRUE;
    data_02150e88.dmaNo = dmaNo;
    data_02150e88.src = (u32)src;
    data_02150e88.length = commandLength;
    data_02150e88.callback = callback;
    data_02150e88.arg = arg;

    func_0206bec0(dmaNo, (u32)src, commandLength, 0);
    func_0206c068(dmaNo);
    {
        u32 enabled = func_02080b08();

        data_02150e88.fifoCond = (reg_G3X_GXSTAT & 0xc0000000) >> 30;
        data_02150e88.fifoFunc = (void (*)(void))func_0207ed18(0x200000);

        reg_G3X_GXSTAT = (reg_G3X_GXSTAT & ~0xc0000000) | (1 << 30);
        func_0207eda4(0x200000, func_0206c5e0);

        (void)func_0207ec14(0x200000);
        func_0206c5e0();

        (void)func_02080b1c(enabled);
    }
}
