#include "ctx.h"

typedef u32 OSIntrMode;
typedef u32 OSIrqMask;
typedef struct PMiSleepCallbackInfo PMiSleepCallbackInfo;

extern PMiSleepCallbackInfo *data_0214e6e8;
extern PMiSleepCallbackInfo *data_0214e6f0;
extern void func_02002268(PMiSleepCallbackInfo *list);
extern OSIntrMode func_02080b08(void);
extern OSIntrMode func_02080b1c(OSIntrMode mode);
extern OSIrqMask func_0207ebcc(OSIrqMask mask);
extern OSIrqMask func_0207ec4c(OSIrqMask mask);
extern BOOL func_02000cd0(void);
extern BOOL func_02002340(void);
extern u32 func_020026d4(int *up, int *low);
extern u32 func_020027d0(int lcd, int sw);
extern void func_02068444(void);
extern u32 func_02002b24(u16 trigger, u16 keyIntrData);
extern void func_02080b6c(void);
extern void func_02080b78(u32 cycle);
extern u32 func_0200237c(int sw, int led, BOOL skip, BOOL sync);
extern void func_020683f8(void);
extern u32 func_0200289c(int sw);
extern u32 func_0200277c(void);

static inline BOOL OS_DisableIrq(void)
{
    u16 prep = *(vu16 *)0x04000208;
    *(vu16 *)0x04000208 = 0;
    return (BOOL)prep;
}

static inline BOOL OS_EnableIrq(void)
{
    u16 prep = *(vu16 *)0x04000208;
    *(vu16 *)0x04000208 = 1;
    return (BOOL)prep;
}

static inline BOOL OS_RestoreIrq(BOOL enable)
{
    u16 prep = *(vu16 *)0x04000208;
    *(vu16 *)0x04000208 = (u16)enable;
    return (BOOL)prep;
}

static inline u32 OS_GetVBlankCount(void)
{
    return *(vu32 *)0x027ffc3c;
}

static inline void GXS_DispOff(void)
{
    *(vu32 *)0x04001000 &= ~0x10000;
}

void func_0200246c(u32 trigger, u32 logic, u16 keyPattern)
{
    BOOL prepIrq;
    OSIntrMode prepIntrMode;
    OSIrqMask prepIntrMask;
    BOOL powerOffFlag = FALSE;
    int lcdUp;
    int lcdLow;
    BOOL isLCDOn;
    u32 preGX;
    u32 preGXS;
    vu32 vcount;

    func_02002268(data_0214e6e8);

    prepIrq = OS_DisableIrq();
    prepIntrMode = func_02080b08();
    prepIntrMask = func_0207ebcc(0x3fffff);
    (void)func_0207ec4c(0x40000);
    (void)func_02080b1c(prepIntrMode);
    (void)OS_EnableIrq();

    if (trigger & 8) {
        if (*(vu16 *)0x027ffc40 == 2) {
            trigger &= ~8;
        }
    }
    if (trigger & 16) {
        if (!func_02000cd0()) {
            trigger &= ~16;
        }
    }

    preGX = *(vu32 *)0x04000000;
    preGXS = *(vu32 *)0x04001000;
    isLCDOn = func_02002340();
    (void)func_020026d4(&lcdUp, &lcdLow);
    (void)func_020027d0(2, 0);

    vcount = OS_GetVBlankCount();
    while (vcount == OS_GetVBlankCount()) {
    }
    vcount = OS_GetVBlankCount();
    func_02068444();
    GXS_DispOff();
    while (vcount == OS_GetVBlankCount()) {
    }
    vcount = OS_GetVBlankCount();
    while (vcount == OS_GetVBlankCount()) {
    }

    {
        u16 param = (u16)(trigger | (lcdUp << 5) | (lcdLow << 6));
        while (func_02002b24(param, (u16)(logic | keyPattern)) != 0) {
        }
    }

    func_02080b6c();
    func_02080b78(0x332340);

    if (trigger & 8) {
        if (*(vu32 *)0x04000214 & 0x100000) {
            powerOffFlag = TRUE;
        }
    }

    if (!powerOffFlag) {
        if (isLCDOn == TRUE) {
            (void)func_0200237c(1, 1, TRUE, FALSE);
            func_020683f8();
        } else {
            (void)func_0200289c(1);
        }
        *(vu32 *)0x04000000 = preGX;
        *(vu32 *)0x04001000 = preGXS;
    }

    (void)func_02080b08();
    (void)func_0207ec4c(prepIntrMask);
    (void)func_02080b1c(prepIntrMode);
    (void)OS_RestoreIrq(prepIrq);

    if (powerOffFlag) {
        (void)func_0200277c();
    }

    func_02002268(data_0214e6f0);
}
