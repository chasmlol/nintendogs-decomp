#include "ctx.h"

#pragma opt_strength_reduction off

typedef struct SaveData {
    u8 body[0x74f2];
    u8 tail[6];
} SaveData;

extern SaveData *data_ov007_02160e68;
extern void *data_ov007_02160e60;
extern s32 data_ov007_02160ccc;
extern s32 data_ov007_02160e64;
extern char data_ov007_02160d70[];

extern void *func_020038b8(void *heap, u32 size);
extern void func_ov007_0215f0a8(void *heap, void *buf, u32 size);
extern void func_0209378c(void *p);
extern void *func_0208c87c(void *heap, const char *path);
extern void func_0206c7d4(const void *src, void *dst, u32 size);

void func_ov007_02160794(void *heap)
{
    void *buf;
    s16 i;
    BOOL empty;

    data_ov007_02160e68 = func_020038b8(heap, sizeof(SaveData));
    buf = func_020038b8(heap, sizeof(SaveData));
    data_ov007_02160ccc = 36000;
    data_ov007_02160e60 = buf;
    data_ov007_02160e64 = 0;
    func_ov007_0215f0a8(heap, buf, sizeof(SaveData));
    func_0209378c(data_ov007_02160e68);
    empty = TRUE;
    for (i = 0; i < 6; i++) {
        if (data_ov007_02160e68->tail[i] != 0) {
            empty = FALSE;
            break;
        }
    }
    if (empty) {
        buf = func_0208c87c(heap, data_ov007_02160d70);
        func_0206c7d4(buf, data_ov007_02160e68, sizeof(SaveData));
    }
}
