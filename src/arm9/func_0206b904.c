#include "ctx.h"

extern s32 data_0213e4dc;
extern s32 data_02150e68;
extern s32 data_02150e78;
extern void func_0206c068(s32 a);
extern void func_02068fb4(s32 a);

void func_0206b904(void)
{
    if (data_0213e4dc != -1) {
        func_0206c068(data_0213e4dc);
    }
    func_02068fb4(data_02150e68);
    data_02150e68 = 0;
    data_02150e78 = 0;
}
