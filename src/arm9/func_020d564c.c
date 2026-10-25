#include "ctx.h"

typedef struct {
  u8 pad0[0x20];
  s32 f20;
  s32 f24;
  u8 pad1[0x08];
  s16 f30;
  u8 pad2[0x0e];
  s32 f40;
  u8 pad4[0x08];
  s16 f4c;
  s16 f4e;
  s16 f50;
  u8 pad3[0x1e];
  s16 f70;
} G;

extern u32 data_021594d0;
extern u8 data_02132da0[];
extern int func_020d6268(u32 a, void *b);
extern int func_020d6c84(void);
extern u32 func_02080858(void);
extern void func_020d4abc(void);

#define P (*(G **)&data_021594d0)

void func_020d564c(void)
{
    s16 asStack_8[2];
    s16 sVar2;

    if (P->f30 != 0 && P->f30 == 1) {
        if (func_020d6268((u32)func_020d4abc, asStack_8) != 0) {
            P->f20 = 4;
        }
    }
    P->f30 = 0;
    sVar2 = P->f50;
    if (sVar2 > 0) {
        P->f50 = sVar2 - 1;
    }
    if (P->f40 != 1) {
        return;
    }
    if (P->f20 != 2) {
        return;
    }
    if (func_020d6c84() != 0) {
        return;
    }
    if (P->f50 > 0) {
        return;
    }
    P->f70 = P->f70 - 16;
    if (P->f70 < 0) {
        P->f4c = P->f4c + 1;
        if (P->f4c >= 4) {
            P->f4c = 0;
            P->f4e = func_02080858() & 3;
        }
        if ((data_02132da0 + P->f4e * 4)[P->f4c] != 0) {
            P->f70 = 900;
            return;
        }
        P->f24 = 3;
        if (P->f30 == 0) {
            P->f30 = 1;
        }
    }
}
