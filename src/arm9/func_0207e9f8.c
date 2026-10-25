#include "ctx.h"

typedef struct { void *head; void *tail; } OSThreadQueue;

extern u8 data_027c0000[];
extern OSThreadQueue data_027c0000__2;
extern u32 func_02080b08(void);
extern void func_02080b1c(u32 e);
extern void func_0207f554(OSThreadQueue *q);

#define HW_INTR_CHECK_BUF ((u32)data_027c0000 + 0x3ff8)

void func_0207e9f8(s32 clear, u32 irqFlags)
{
    u32 e = func_02080b08();
    if (clear) {
        *(vu32 *)HW_INTR_CHECK_BUF &= ~irqFlags;
    }
    func_02080b1c(e);
    while (!(irqFlags & *(vu32 *)HW_INTR_CHECK_BUF)) {
        func_0207f554(&data_027c0000__2);
    }
}
