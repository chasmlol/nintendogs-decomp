#include "ctx.h"

#define SH(a, off) (*(volatile s16 *)((u8 *)(a) + (off)))

BOOL func_02034808(u8 *p)
{
  s32 v;

  v = SH(p, 0xea);
  if (v > 0x4c1) goto L80;
  if (v >= 0x4c1) goto z20;
  switch (v) {
  case 0x3e2: goto c0;
  case 0x3e3:
  case 0x3e4: goto g1;
  case 0x3e5:
  case 0x3e6: goto g3;
  case 0x3e7:
  case 0x3e8: goto g5;
  case 0x3e9: goto g7;
  case 0x3ea: goto s8;
  case 0x3eb: goto g9;
  case 0x3ec: goto z10;
  case 0x3ed: goto g11;
  case 0x3ee:
  case 0x3ef: goto g12;
  case 0x3f2:
  case 0x3f3:
  case 0x3f4: goto s16;
  case 0x3f6: goto z20;
  default: goto dflt;
  }
L80:
  if (v != 0x4c2) goto dflt;
  goto s8;

c0: {
  s32 x98 = SH((u8 *)p + 256, 98);
  s32 x82 = SH((u8 *)p + 256, 82);
  u8 *t1;
  s32 x1;
  s32 a24;
  s32 b78;
  if (x98 != x82) goto c0x;
  t1 = *(u8 **)(p + 0x74);
  if (t1 == 0) goto c0x;
  if (*(s8 *)(p + 190) <= 0) goto c0y;
  a24 = SH(t1, 24);
  b78 = SH((u8 *)p + 256, 78);
  if (b78 < a24 - 1) goto c0x;
  x1 = 1;
  goto c0j;
c0y:
  if (SH((u8 *)p + 256, 78) <= 1) {
    x1 = 1;
    goto c0j;
  }
c0x:
  x1 = 0;
c0j:
  return (x1 == 0);
}

g1: {
  u8 *q;
  s32 x82;
  s32 x98;
  s32 f;
  s32 g;
  q = (u8 *)p + 256;
  x82 = SH(q, 82);
  x98 = SH(q, 98);
  if (x98 != x82) goto g1a0;
  f = SH(q, 78);
  if (f >= 25) {
    f = 1;
    goto g1a1;
  }
g1a0:
  f = 0;
g1a1:
  f = (f != 0);
  if (f == 0) goto g1r;
  if (x98 != x82) goto g1b0;
  q = (u8 *)p + 256;
  g = SH(q, 78);
  if (g <= 50) {
    g = 1;
    goto g1b1;
  }
g1b0:
  g = 0;
g1b1:
  f = (g != 0);
g1r:
  return f;
}

g3: {
  u8 *q;
  s32 x82;
  s32 x98;
  s32 f;
  s32 g;
  q = (u8 *)p + 256;
  x82 = SH(q, 82);
  x98 = SH(q, 98);
  if (x98 != x82) goto g3a0;
  f = SH(q, 78);
  if (f >= 10) {
    f = 1;
    goto g3a1;
  }
g3a0:
  f = 0;
g3a1:
  f = (f != 0);
  if (f == 0) goto g3r;
  if (x98 != x82) goto g3b0;
  q = (u8 *)p + 256;
  g = SH(q, 78);
  if (g <= 39) {
    g = 1;
    goto g3b1;
  }
g3b0:
  g = 0;
g3b1:
  f = (g != 0);
g3r:
  return f;
}

g5: {
  u8 *q;
  s32 x82;
  s32 x98;
  s32 f;
  s32 g;
  q = (u8 *)p + 256;
  x82 = SH(q, 82);
  x98 = SH(q, 98);
  if (x98 != x82) goto g5a0;
  f = SH(q, 78);
  if (f >= 10) {
    f = 1;
    goto g5a1;
  }
g5a0:
  f = 0;
g5a1:
  f = (f != 0);
  if (f == 0) goto g5r;
  if (x98 != x82) goto g5b0;
  q = (u8 *)p + 256;
  g = SH(q, 78);
  if (g <= 37) {
    g = 1;
    goto g5b1;
  }
g5b0:
  g = 0;
g5b1:
  f = (g != 0);
g5r:
  return f;
}

g7: {
  u8 *q;
  s32 x82;
  s32 x98;
  s32 f;
  s32 g;
  q = (u8 *)p + 256;
  x82 = SH(q, 82);
  x98 = SH(q, 98);
  if (x98 != x82) goto g7a0;
  f = SH(q, 78);
  if (f >= 10) {
    f = 1;
    goto g7a1;
  }
g7a0:
  f = 0;
g7a1:
  f = (f != 0);
  if (f == 0) goto g7r;
  if (x98 != x82) goto g7b0;
  q = (u8 *)p + 256;
  g = SH(q, 78);
  if (g <= 50) {
    g = 1;
    goto g7b1;
  }
g7b0:
  g = 0;
g7b1:
  f = (g != 0);
g7r:
  return f;
}

s8: {
  s32 x98 = SH((u8 *)p + 256, 98);
  s32 x82 = SH((u8 *)p + 256, 82);
  u8 *t1;
  s32 x1;
  s32 a24;
  s32 b78;
  if (x98 != x82) goto s8x;
  t1 = *(u8 **)(p + 0x74);
  if (t1 == 0) goto s8x;
  if (*(s8 *)(p + 190) <= 0) goto s8y;
  a24 = SH(t1, 24);
  b78 = SH((u8 *)p + 256, 78);
  if (b78 < a24 - 1) goto s8x;
  x1 = 1;
  goto s8j;
s8y:
  if (SH((u8 *)p + 256, 78) <= 1) {
    x1 = 1;
    goto s8j;
  }
s8x:
  x1 = 0;
s8j:
  return (x1 == 0);
}

g9: {
  u8 *q;
  s32 x82;
  s32 x98;
  s32 f;
  s32 g;
  q = (u8 *)p + 256;
  x82 = SH(q, 82);
  x98 = SH(q, 98);
  if (x98 != x82) goto g9a0;
  f = SH(q, 78);
  if (f >= 16) {
    f = 1;
    goto g9a1;
  }
g9a0:
  f = 0;
g9a1:
  f = (f != 0);
  if (f == 0) goto g9r;
  if (x98 != x82) goto g9b0;
  q = (u8 *)p + 256;
  g = SH(q, 78);
  if (g <= 26) {
    g = 1;
    goto g9b1;
  }
g9b0:
  g = 0;
g9b1:
  f = (g != 0);
g9r:
  return f;
}

z10: {
  s32 x98 = SH((u8 *)p + 256, 98);
  s32 x82 = SH((u8 *)p + 256, 82);
  s32 f1;
  if (x98 != x82) goto z10a0;
  f1 = SH((u8 *)p + 256, 78);
  if (f1 >= 10) {
    f1 = 1;
    goto z10a1;
  }
z10a0:
  f1 = 0;
z10a1:
  f1 = (f1 != 0);
  if (f1 == 0) goto z10r;
  {
    u8 *t1;
    s32 x1;
    s32 a24;
    s32 b78;
    if (SH((u8 *)p + 256, 98) != SH((u8 *)p + 256, 82)) goto z10x;
    t1 = *(u8 **)(p + 0x74);
    if (t1 == 0) goto z10x;
    if (*(s8 *)(p + 190) <= 0) goto z10y;
    a24 = SH(t1, 24);
    b78 = SH((u8 *)p + 256, 78);
    if (b78 < a24 - 1) goto z10x;
    x1 = 1;
    goto z10j;
z10y:
    if (SH((u8 *)p + 256, 78) <= 1) {
      x1 = 1;
      goto z10j;
    }
z10x:
    x1 = 0;
z10j:
    f1 = (x1 == 0);
  }
z10r:
  return f1;
}

g11: {
  u8 *q;
  s32 x82;
  s32 x98;
  s32 f;
  s32 g;
  q = (u8 *)p + 256;
  x82 = SH(q, 82);
  x98 = SH(q, 98);
  if (x98 != x82) goto g11a0;
  f = SH(q, 78);
  if (f >= 20) {
    f = 1;
    goto g11a1;
  }
g11a0:
  f = 0;
g11a1:
  f = (f != 0);
  if (f == 0) goto g11r;
  if (x98 != x82) goto g11b0;
  q = (u8 *)p + 256;
  g = SH(q, 78);
  if (g <= 30) {
    g = 1;
    goto g11b1;
  }
g11b0:
  g = 0;
g11b1:
  f = (g != 0);
g11r:
  return f;
}

g12: {
  u8 *q;
  s32 x82;
  s32 x98;
  s32 f;
  s32 g;
  q = (u8 *)p + 256;
  x82 = SH(q, 82);
  x98 = SH(q, 98);
  if (x98 != x82) goto g12a0;
  f = SH(q, 78);
  if (f >= 20) {
    f = 1;
    goto g12a1;
  }
g12a0:
  f = 0;
g12a1:
  f = (f != 0);
  if (f == 0) goto g12r;
  if (x98 != x82) goto g12b0;
  q = (u8 *)p + 256;
  g = SH(q, 78);
  if (g <= 30) {
    g = 1;
    goto g12b1;
  }
g12b0:
  g = 0;
g12b1:
  f = (g != 0);
g12r:
  return f;
}

s16: {
  s32 x98 = SH((u8 *)p + 256, 98);
  s32 x82 = SH((u8 *)p + 256, 82);
  u8 *t1;
  s32 x1;
  s32 a24;
  s32 b78;
  if (x98 != x82) goto s16x;
  t1 = *(u8 **)(p + 0x74);
  if (t1 == 0) goto s16x;
  if (*(s8 *)(p + 190) <= 0) goto s16y;
  a24 = SH(t1, 24);
  b78 = SH((u8 *)p + 256, 78);
  if (b78 < a24 - 1) goto s16x;
  x1 = 1;
  goto s16j;
s16y:
  if (SH((u8 *)p + 256, 78) <= 1) {
    x1 = 1;
    goto s16j;
  }
s16x:
  x1 = 0;
s16j:
  return (x1 == 0);
}

z20: {
  s32 x98 = SH((u8 *)p + 256, 98);
  s32 x82 = SH((u8 *)p + 256, 82);
  s32 f1;
  if (x98 != x82) goto z20a0;
  f1 = SH((u8 *)p + 256, 78);
  if (f1 >= 20) {
    f1 = 1;
    goto z20a1;
  }
z20a0:
  f1 = 0;
z20a1:
  f1 = (f1 != 0);
  if (f1 == 0) goto z20r;
  {
    u8 *t1;
    s32 x1;
    s32 a24;
    s32 b78;
    if (SH((u8 *)p + 256, 98) != SH((u8 *)p + 256, 82)) goto z20x;
    t1 = *(u8 **)(p + 0x74);
    if (t1 == 0) goto z20x;
    if (*(s8 *)(p + 190) <= 0) goto z20y;
    a24 = SH(t1, 24);
    b78 = SH((u8 *)p + 256, 78);
    if (b78 < a24 - 1) goto z20x;
    x1 = 1;
    goto z20j;
z20y:
    if (SH((u8 *)p + 256, 78) <= 1) {
      x1 = 1;
      goto z20j;
    }
z20x:
    x1 = 0;
z20j:
    f1 = (x1 == 0);
  }
z20r:
  return f1;
}

dflt:
  return 0;
}
