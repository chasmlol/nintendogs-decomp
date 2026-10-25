#include "ctx.h"

typedef struct OSiVAlarm OSVAlarm;

typedef struct {
    OSVAlarm *head;
    OSVAlarm *tail;
} OSVAlarmQueue;

extern u16 data_02155ff0;
extern OSVAlarmQueue data_02155ffc;
extern s32 data_02155ff8;
extern s32 data_02155ff4;

extern u32 func_0207ebcc(u32 mask);

void func_02080a84(void)
{
    if (!data_02155ff0) {
        data_02155ff0 = TRUE;

        data_02155ffc.head = NULL;
        data_02155ffc.tail = NULL;

        (void)func_0207ebcc(4);

        data_02155ff8 = 0;
        data_02155ff4 = 0;
    }
}
