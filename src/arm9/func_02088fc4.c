#include "ctx.h"

extern u32 data_021560cc;

void func_02088fc4(u32 tag, u32 data, BOOL err)
{
    u16 command = (u16)((data & 0x7f00) >> 8);
    u16 result = (u16)(data & 0xff);

    if (err) {
        result = 0xff;
    }
    switch (command) {
    case 0x23:
        if (result == 0) {
            data_021560cc = 0;
        } else {
            data_021560cc = 1;
        }
        break;
    case 0x20:
        if (result == 0) {
            data_021560cc = 5;
        } else {
            data_021560cc = 3;
        }
        break;
    case 0x25:
        if (result == 0) {
            data_021560cc = 7;
        } else {
            data_021560cc = 5;
        }
        break;
    case 0x22:
        if (result == 0) {
            data_021560cc = 9;
        } else {
            data_021560cc = 7;
        }
        break;
    case 0x21:
        if (result == 0) {
            data_021560cc = 0;
        } else {
            data_021560cc = 10;
        }
        break;
    }
}
