#pragma avoid_byte strb
#include "ctx.h"

typedef struct { u32 w[34]; } B136;

#define SB(v, a) (*(vu8 *)(a) = (u8)(v))

extern u32 data_0215ae60;
extern u32 data_0215ae48;
extern B136 data_0215b064[];
extern B136 data_0215aecc[];
extern u32 data_02144a44;
extern s32 data_02144a4c;
extern u32 data_0215ae5c;
extern u32 data_0215ae4c;
extern s32 data_0215ae84;
extern u8 data_0215ae10;
extern u16 data_0215ae28;
extern u32 data_0215ae74;
extern s32 data_0215ae2c;
extern u32 data_0215ae88;
extern u32 data_0215ae34;
extern u32 data_0215ae68;
extern u32 data_0215ae6c;
extern u32 data_0215ae3c;
extern u32 data_0215ae78;
extern u32 data_0215ae70;
extern s32 data_0215ae7c;
extern s16 data_0215ae1c;
extern s32 data_0215ae44;
extern s16 data_0215ae18;
extern s8 data_0215ae0c;
extern s16 data_0215ae20;
extern s16 data_0215ae24;
extern s8 data_0215ae14;
extern u32 data_0215ae64;
extern u32 data_0215ae40;
extern s32 data_0215ae80;
extern u32 data_0215ae30;

extern u32 func_020e206c(void);
extern void func_020e1fe0(void);
extern s16 *func_020dfa1c(void);
extern s32 func_020dd654(void *p, u32 *q, s32 v);
extern void func_0206c7d4(void *p, s32 v, s32 n);
extern void func_020dfc38(void);
extern s32 func_020dec08(void);
extern s32 func_0205e270(s32 a, s32 b);
extern void func_0206c7bc(u16 a, s32 b, s32 c);
extern void func_020e0114(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);
extern void func_020e01a8(u32 a, u32 b, u32 c, u32 d);
extern void func_02072fe4(void *p, s32 a, s32 b);
extern void func_02070b20(void *p, s32 a);

#define ADJ_AE68() \
  do { \
    if (data_0215ae68 < 70 && data_0215ae78 == 0) \
      data_0215ae68 = data_0215ae68 * 3; \
    else \
      data_0215ae68 = data_0215ae68 << 1; \
  } while (0)

void func_020de098(void)
{
  s16 *psVar15;
  u32 uVar14;
  s32 iVar27;
  s32 r5;
  s32 aiStack[5];
  s32 k;
  s32 bestK;
  s32 best;
  u32 bits;
  B136 *src;
  B136 *dst;
  s32 r7;
  s32 r8v;
  s32 r2v;
  s32 r3v;
  s32 r1v;
  s32 r0v;
  s32 a2;
  s32 a1;
  s32 x;
  s32 q;
  u32 t;
  u32 t2;
  s32 s4;
  s32 s5;
  s32 nv;
  s32 v;
  u8 c;
  s32 sv;
  s32 ret;
  s32 bVar4;
  s32 kB;

  if (data_0215ae60 != 0) {
    uVar14 = func_020e206c();
    data_0215ae48 = 0;
    if (uVar14 == 0x10000000) goto LB;
    if (uVar14 != 0x20000000) goto L234;
    best = 0;
    bestK = -1;
    for (k = 0; k < 3; k++) {
      if (data_0215ae60 & (1 << k)) {
        data_0215aecc[k] = data_0215b064[k];
        if (data_0215aecc[k].w[32] != 0 && data_0215aecc[k].w[0] == 0) {
          if (best < (s32)data_0215aecc[k].w[3]) {
            if (bestK != -1) {
              data_0215aecc[bestK].w[32] = 0;
              data_0215aecc[bestK].w[33] = -1;
            }
            bestK = k;
            best = data_0215aecc[k].w[3];
          } else {
            data_0215aecc[k].w[32] = 0;
            data_0215aecc[k].w[33] = -1;
          }
        }
      }
    }
    data_02144a44 = data_0215ae60;
    data_0215ae60 = 0;
    goto L234;

  LB:
    if (data_02144a4c == -7) goto L1b4;
    for (kB = 0; kB < 3; kB++) {
      if (data_0215ae60 & (1 << kB)) {
        data_0215aecc[kB] = data_0215b064[kB];
        if (data_0215aecc[kB].w[32] != 0) data_02144a4c = data_0215aecc[kB].w[0];
        else data_02144a4c = data_0215b064[kB].w[33];
      }
    }

  L1b4:
    data_02144a44 = data_0215ae60;
    data_0215ae60 = 0;
    if (data_0215ae5c != 0) {
      if (data_0215ae4c != 0) goto L208;
    }
    func_020dfc38();
    data_0215ae4c = 0;
    data_0215ae5c = 0;
    goto L234;

  L208:
    {
      s32 vv = data_0215ae84;
      SB(2, &data_0215ae10);
      data_0215ae28 = 0;
      data_0215ae2c = vv;
      data_0215ae74 = 0;
    }

  L234:
    func_020e1fe0();
  }

  psVar15 = func_020dfa1c();
  if (data_0215ae4c == 0) goto Zb4;
  if (data_0215ae88 != 0) goto Zb4;
  if (data_0215ae60 != 0) goto Zb4;
  if (data_0215ae34 == 0) {
    bVar4 = 1;
    goto Jb4;
  }
Zb4:
  bVar4 = 0;
Jb4:
  if (bVar4 == 0) return;

  if (psVar15[1] > psVar15[0] - 16) {
    s5 = (s16)(psVar15[0] - 32);
  } else if (psVar15[1] < 16) {
    s5 = 0;
  } else {
    s5 = (s16)(psVar15[1] - 16);
  }
  iVar27 = func_020dd654((u8 *)psVar15 + 6 + s5 * 2, (u32 *)&data_0215ae6c, data_0215ae68);
  if (iVar27 == 0 && psVar15[0] > 200) {
    iVar27 = func_020dd654((u8 *)psVar15 + 6 + (psVar15[0] / 2) * 2, (u32 *)&data_0215ae6c, data_0215ae68);
  }
  r5 = iVar27;

  if (data_0215ae3c != 0) {
    data_0215ae3c = data_0215ae3c - 1;
    return;
  }

  if (data_0215ae74 < 5) {
    if (data_0215ae74 == 0) data_0215ae68 = 0;
    s4 = *(vu32 *)&data_0215ae74 + 1;
    data_0215ae68 = data_0215ae68 + data_0215ae6c;
    data_0215ae74 = s4;
    if (s4 != 5) return;
    t = data_0215ae68 / 5;
    data_0215ae68 = t;
    if (t < 20) data_0215ae68 = 20;
    ADJ_AE68();
  }

  c = data_0215ae10;
  if (c == 2 || c == 5) {
    t = data_0215ae68 / 3;
    if (t > data_0215ae6c) {
      data_0215ae70 = data_0215ae70 + 1;
      data_0215ae7c = data_0215ae7c + data_0215ae6c;
      if (data_0215ae70 == 10) {
        t2 = data_0215ae7c / 10;
        data_0215ae68 = t2;
        if (t2 < 20) data_0215ae68 = 20;
        ADJ_AE68();
        data_0215ae70 = 0;
        data_0215ae7c = 0;
      }
    } else {
      data_0215ae70 = 0;
      data_0215ae7c = 0;
    }
  }

  r7 = psVar15[0];
  r2v = data_0215ae84;
  r3v = (r2v != 0) ? r2v + 48000 : 0;
  r1v = data_0215ae2c;
  x = r3v - r1v;
  q = (x / 2);
  if ((u32)r7 > (u32)q) {
    x = ((r2v != 0) ? r2v + 48000 : 0) - r1v;
    r7 = (x / 2);
  }
  func_0206c7d4((u8 *)psVar15 + 6, r1v, r7 << 1);
  nv = data_0215ae2c + (r7 << 1);
  data_0215ae2c = nv;
  c = data_0215ae10;

  switch (c) {
  case 0:
    if (r5 == 1) {
      SB(1, &data_0215ae10);
      break;
    }
    data_0215ae2c = data_0215ae84;
    data_0215ae1c = 0;
    break;
  case 1:
    if (r5 == 1) data_0215ae44 = nv;
    if (data_0215ae1c < psVar15[2]) {
      data_0215ae1c = psVar15[2];
      data_0215ae1c = psVar15[2];
    }
    break;
  case 2:
  case 5:
    if (r5 == 1) {
      data_0215ae44 = 0;
      data_0215ae18 = psVar15[2];
      sv = data_0215ae18;
      data_0215ae24 = sv;
      data_0215ae0c = 0;
      data_0215ae14 = 0;
      data_0215ae20 = sv;
      if (c == 2) {
        SB(4, &data_0215ae10);
      } else {
        SB(6, &data_0215ae10);
      }
      data_0215ae64 = data_0215ae68;
      break;
    }
    data_0215ae2c = data_0215ae84;
    break;
  case 3:
    break;
  case 4:
  case 6:
    r8v = data_0215ae84;
    r1v = (r8v != 0) ? r8v + 48000 : 0;
    r7 = *(vu32 *)&data_0215ae2c;
    if (r7 == r1v) {
      if (func_020dec08() == 0) return;
      break;
    }
    v = (s8)data_0215ae0c + 1;
    SB(v, &data_0215ae0c);
    if (r5 != 0) goto L9e0;
    if (data_0215ae44 != 0) goto L728;
    r2v = (s8)data_0215ae0c;
    data_0215ae44 = r7;
    data_0215ae40 = 0;
    if (r2v >= 3) goto L714;
    if ((u32)((r7 - r8v) / 2) >= 0x514) goto L714;
    s5 = (s16)psVar15[0];
    ret = func_0205e270(14, s5 / 130);
    SB(ret, &data_0215ae14);
    goto L728;
  L714:
    if ((s8)data_0215ae14 != 0) SB(0, &data_0215ae14);
  L728:
    r0v = data_0215ae44;
    if ((r7 - r0v) / 2 < (r0v - r8v) / 2 * 4) {
      if (data_0215ae6c > data_0215ae68) data_0215ae40 = r7;
    }
  L76c:
    {
      s32 s3 = psVar15[2];
      if (data_0215ae24 < s3) {
        data_0215ae24 = s3;
        data_0215ae20 = psVar15[2];
      }
    }
    if ((s8)data_0215ae14 != 0) {
      SB((s8)data_0215ae14 - 1, &data_0215ae14);
      if ((s8)data_0215ae14 == 0) {
        data_0215ae2c = r8v;
        if (c == 6) {
          SB(5, &data_0215ae10);
        } else {
          SB(2, &data_0215ae10);
        }
        data_0215ae28 = 0;
        data_0215ae74 = 0;
      }
    }
    x = data_0215ae2c - r0v;
    q = (x / 2);
    if (q < 3000) goto a18;
    if (data_0215ae40 != 0) data_0215ae44 = data_0215ae40;
    {
      u32 nv2 = data_0215ae44 + 2000;
      if (nv2 < (u32)data_0215ae2c) data_0215ae44 = nv2;
      else data_0215ae44 = data_0215ae2c;
    }
    {
      s32 r4b = data_0215ae44;
      s32 r3b = data_0215ae84;
      x = r4b;
      x = x - r3b;
      r5 = (x / 2);
      data_0215ae2c = r4b;
      data_0215ae80 = r5;
      if ((u32)r4b <= (u32)r3b) goto L88c;
      if ((u32)r5 < 0x514) goto L88c;
      if (func_020dec08() == 0) return;
      goto a18;
    }
  L88c:
    if (data_0215ae10 != 6) goto L98c;
    {
      vu16 usStack = 0;
      func_0206c7bc(usStack, r8v, r5 << 1);
    }
    func_020e0114(data_0215ae30, 1, 0, 8000, 0, data_0215ae80);
    func_020e01a8(57, 1, 60, data_0215ae30);
    func_02072fe4(&data_0215ae34, 19, 124);
    func_02070b20(&data_0215ae34, 64);
    if (data_0215ae60 == 0) {
      if (data_0215ae5c == 0) {
        func_020dfc38();
        data_0215ae4c = 0;
        data_0215ae5c = 0;
        goto L97c;
      }
      {
        s32 vw = data_0215ae84;
        SB(2, &data_0215ae10);
        data_0215ae2c = vw;
        data_0215ae28 = 0;
        data_0215ae74 = 0;
      }
    }
  L97c:
    data_02144a4c = -7;
    goto a18;
  L98c:
    if (data_0215ae5c != 0) goto L9b8;
    func_020dfc38();
    data_0215ae4c = 0;
    data_0215ae5c = 0;
    goto a18;
  L9b8:
    data_0215ae10 = 2;
    data_0215ae2c = r8v;
    data_0215ae28 = 0;
    data_0215ae74 = 0;
    goto a18;
  L9e0:
    if (data_0215ae24 < psVar15[2]) data_0215ae24 = psVar15[2];
    if (data_0215ae24 < data_0215ae20) data_0215ae24 = data_0215ae20;
    data_0215ae44 = 0;
    goto a18;
  default:
    break;
  }

a18:
  data_0215ae80 = (data_0215ae2c - data_0215ae84) / 2;
  return;
}
