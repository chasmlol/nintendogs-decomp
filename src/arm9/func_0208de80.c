#pragma avoid_byte strb
#include "ctx.h"

extern u8 data_021406f8[];
extern u16 data_02159010;
extern u8 data_02140704[];
extern u8 data_02140710[];
extern u8 data_0214071c[];
extern u8 data_02140728[];
extern u8 data_02140734[];
extern u8 data_02140740[];

extern s32 func_02062324(u8 *a, u8 *b);

void func_0208de80(u8 *p)
{
    u8 *tok[2];
    s32 n;
    u8 c;
    s32 inTok;

    n = 0;
    inTok = 0;
    c = *p;
    if (c != 0) {
        do {
            c = *(vu8 *)p;
            if (c == 9 || (s32)c == 0x2020) {
                if (inTok != 0) {
                    *p = 0;
                }
                inTok = 0;
            } else if (inTok == 0) {
                inTok = 1;
                tok[n] = p;
                n = n + 1;
            }
            p = p + 1;
        } while (*p != 0);
    }
    if (n <= 0) {
        return;
    }
    if (func_02062324(tok[0], data_021406f8) == 0) {
        if (tok[1][0] == '1') {
            data_02159010 = data_02159010 | 1;
        }
        return;
    }
    if (func_02062324(tok[0], data_02140704) == 0) {
        if (tok[1][0] == '1') {
            data_02159010 = data_02159010 | 2;
        }
        return;
    }
    if (func_02062324(tok[0], data_02140710) == 0) {
        if (tok[1][0] == '1') {
            data_02159010 = data_02159010 | 4;
        }
        return;
    }
    if (func_02062324(tok[0], data_0214071c) == 0) {
        if (tok[1][0] == '1') {
            data_02159010 = data_02159010 | 8;
        }
        return;
    }
    if (func_02062324(tok[0], data_02140728) == 0) {
        if (tok[1][0] == '1') {
            data_02159010 = data_02159010 | 16;
        }
        return;
    }
    if (func_02062324(tok[0], data_02140734) == 0) {
        if (tok[1][0] == 0x31) {
            data_02159010 = data_02159010 | 32;
        }
        return;
    }
    if (func_02062324(tok[0], data_02140740) == 0) {
        if (tok[1][0] == '1') {
            data_02159010 = data_02159010 | 64;
        }
        return;
    }
}
