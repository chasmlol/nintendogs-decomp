#include "ctx.h"

extern u8 *data_021594d0;
extern void func_020d5cc8(void);
extern u32 func_020d6ca4(void);

void func_020d532c(void)
{
    if (*(u32 *)(data_021594d0 + 0x2c) != 0) {
        *(u32 *)(data_021594d0 + 0x2c) = 0;
        *(u16 *)(data_021594d0 + 0x28) = 0;
        *(u16 *)(data_021594d0 + 0x2a) = 0;
    }
    switch (*(u32 *)(data_021594d0 + 0x20)) {
    case 0:
    case 1:
        goto done;
    case 2:
    case 3:
        goto tail;
    case 4:
        func_020d5cc8();
        switch (func_020d6ca4()) {
        case 0:
        case 1:
        case 2:
            goto done;
        case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10: case 11:
    *(u32 *)(data_021594d0 + 0x20) = 4;
    *(u32 *)(data_021594d0 + 0x24) = 1;
    if (*(s16 *)(data_021594d0 + 0x30) == 0) {
        *(u16 *)(data_021594d0 + 0x30) = 1;
    }
            goto done;
        default:
            goto done;
        }
    default:
        goto done;
    }
tail:
    func_020d5cc8();
    switch (func_020d6ca4()) {
    case 0:
    case 1:
    case 2:
        goto done;
    case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10: case 11:
        break;
    default:
        goto done;
    }
setp:
    *(u32 *)(data_021594d0 + 0x20) = 4;
    *(u32 *)(data_021594d0 + 0x24) = 1;
    if (*(s16 *)(data_021594d0 + 0x30) == 0) {
        *(u16 *)(data_021594d0 + 0x30) = 1;
    }
done:
    return;
}
