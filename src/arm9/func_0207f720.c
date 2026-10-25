#include "ctx.h"

typedef struct OSThread OSThread;
struct OSThread {
    u8 context[0x64];
    u32 state;
    OSThread *next;
    u32 id;
    u32 priority;
    void *profiler;
    void *mutex;
    void *mutexQueue[2];
    u32 stackTop;
    u32 stackBottom;
    u32 stackWarningOffset;
    u16 joinQueue;
};

typedef struct {
    u16 isNeedRescheduling;
    u16 max_entry;
    u16 irqDepth;
    OSThread *current;
    OSThread *list;
    void *switchCallback;
    OSThread *entry[16];
} OSThreadInfo;

extern u32 data_02155cf0;
extern OSThreadInfo data_02155cf8;
extern OSThread **data_02155cec;
extern OSThread data_02155de0;
extern OSThread data_02155d4c;
extern u32 data_02155f3c[];
extern u8 data_027c0000[];
extern u8 data_00001400[];   /* SDK_SYS_STACKSIZE, a linker symbol */
extern u8 data_00000c00[];   /* SDK_IRQ_STACKSIZE */
extern void func_0207f294(void *callback);
extern void func_0207f618(OSThread *thread, void (*func)(void *), void *arg, void *stack, u32 stackSize, u32 prio);
extern void func_0207f280(void *arg);

#define OSi_SYS_STACKSIZE ((u32)data_00001400)
#define OSi_IRQ_STACKSIZE ((u32)data_00000c00)
#define HW_DTCM_SVC_STACK ((u32)data_027c0000 + 0x3f80)

void func_0207f720(void)
{
    void *stackLo;
    int i;

    if (data_02155cf0) {
        return;
    }
    data_02155cf0 = 1;

    for (i = 0; i < 16; i++) {
        data_02155cf8.entry[i] = 0;
    }

    data_02155cec = &data_02155cf8.current;

    data_02155de0.priority = 16;
    data_02155de0.id = 0;
    data_02155de0.state = 1;
    data_02155de0.next = 0;
    data_02155de0.profiler = 0;

    data_02155cf8.entry[0] = &data_02155de0;
    data_02155cf8.list = &data_02155de0;
    data_02155cf8.current = &data_02155de0;

    stackLo = (OSi_SYS_STACKSIZE <= 0) ?
        (void *)(0x027c0be0 - OSi_SYS_STACKSIZE) :
        (void *)((u32)(HW_DTCM_SVC_STACK - OSi_IRQ_STACKSIZE) - OSi_SYS_STACKSIZE);

    data_02155de0.stackBottom = (u32)(HW_DTCM_SVC_STACK - OSi_IRQ_STACKSIZE);
    data_02155de0.stackTop = (u32)stackLo;
    data_02155de0.stackWarningOffset = 0;

    *(u32 *)(data_02155de0.stackBottom - sizeof(u32)) = 0xfddb597d;
    *(u32 *)data_02155de0.stackTop = 0x7bf9dd5b;

    data_02155de0.joinQueue = 0;

    data_02155cf8.max_entry = 16;
    data_02155cf8.isNeedRescheduling = 0;
    data_02155cf8.irqDepth = 0;

    *(OSThreadInfo **)0x027fffa0 = &data_02155cf8;

    func_0207f294(0);

    func_0207f618(&data_02155d4c, func_0207f280, 0, data_02155f3c, 200, 31);
    data_02155d4c.priority = 32;
    data_02155d4c.state = 1;
}
