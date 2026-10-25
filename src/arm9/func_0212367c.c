#include "ctx.h"

extern u8 *data_02159060;
extern u8 *data_0215be48;
extern u8 *data_02159424;
extern u8 data_0214f004[];
extern u8 data_0214e114[];
extern u8 data_0214e134[];
extern u8 data_0214e154[];
extern u8 data_0214e174[];
extern u8 data_0214e194[];
extern u8 data_0214e1b4[];
extern u8 data_0214e1cc[];
extern u8 data_0214e1e4[];
extern u8 data_0214e1fc[];
extern void func_02124f00(void);
extern void func_02124ebc(void);
extern void func_02108e24(u32 a);
extern void func_02097b94(u32 a, u32 b, u32 c, u32 d, u32 e);
extern u32 func_02112320(u32 a, u32 b, u32 c);
extern s32 func_02124e60(s32 *a, s32 b);
extern s32 func_02124dcc(s32 *a, s32 b);
extern void func_021128a8(u32 a, u32 b, u32 c);
extern void func_02097b68(void);
extern void func_020a1a40(u32 a);
extern void func_020fc610(u32 a, u32 b, u32 c);
extern void func_02124b5c(s32 *a);
extern s32 func_0211b3b0(s32 a);
extern s32 func_02094f58(s32 a);
extern void func_02003c58(u32 a);
extern void func_02107c70(void);
extern s32 func_020959dc(void);
extern void func_020a19dc(u32 a, u32 b);
extern s16 func_0211b440(s32 a);
extern s16 func_0211b330(s32 a);
extern void func_020a4938(s16 a, s16 b);
extern void func_020a4b88(s16 a);
extern void func_020a4a54(s16 a);
extern void func_0209579c(s16 a);
extern void func_020957ec(s16 a);
extern void func_02096c20(u32 a, u32 b, u32 c);
extern void func_02096bd0(u32 a);
extern void func_02096b80(u32 a);
extern s32 func_020039f4(void);
extern s32 func_02003a60(void);
extern void func_020fc684(u32 a, u32 b, u32 c, u32 d, u32 e);
extern void func_02003dc4(u32 a);
extern void func_020a4854(s16 a);
extern void func_020a47e8(s16 a);
extern void func_020a4778(void);
extern void func_02095a0c(void);
extern void func_02095d6c(u32 a, u32 b, u32 c, u32 d);

void func_0212367c(s32 *param_1, u32 param_2)
{
  s32 *p = param_1;
  s32 *piVar7;
  s32 bVar2;
  u32 bVar1;
  u32 bVar0;
  s32 iVar5;
  s32 iVar3;
  u32 uVar8;
  s32 uVar4;
  u32 a8, b8, c8, d8;
  u32 ta, tb, tc, td;
  s32 a4, b4, c4, d4;
  u32 unaff_r5;
  u32 local_2c;
  u32 local_28;
  s16 sv5;
  s16 sv3;

  piVar7 = (s32 *)((u8 *)param_1 + 0x1cf4);
  switch (p[8]) {
  case 0:
    bVar2 = 1;
    if (*(s16 *)(data_02159060 + 0x6c) != 1 && *(s16 *)(data_02159060 + 0x6c) != 8) {
      bVar2 = 0;
    }
    if (bVar2) {
      func_02108e24(0);
      return;
    }
    func_02108e24(1);
    if (*(s32 *)(data_02159060 + 0xa4) != 0) {
      func_02097b94(8, p[5], 0, 0, 1);
      return;
    }
    if (*(s32 *)(data_0215be48 + 0x48b8) == 1) {
      bVar1 = *(vu8 *)(data_0214f004 + 1);
      bVar0 = *(vu8 *)data_0214f004;
      *(u16 *)((u8 *)p + 0x1c18) = bVar0;
      *(u16 *)((u8 *)p + 0x1c1a) = bVar1;
      p[8] = 5;
      return;
    }
    if (*(s32 *)(data_0215be48 + 0x4860) == 0) {
      return;
    }
    iVar5 = func_02112320(2, data_0214f004[0], data_0214f004[1]);
    if ((*(u16 *)(data_0214f004 + 2) & 2) == 0) {
      return;
    }
    iVar3 = p[7];
    if (iVar3 == 0) goto c0a;
    if (iVar3 == 1) goto c0b;
    if (iVar3 == 2) goto c0c;
    return;
c0a:
    bVar2 = func_02124e60(p, iVar5);
    if (bVar2) {
      func_02108e24(0);
      func_021128a8(2, (u16)p[3], 1);
      func_02097b68();
      func_020a1a40(3);
      p[8] = 1;
      return;
    }
    return;
c0b:
    iVar5 = func_02124dcc(p, iVar5);
    if (iVar5 != 0) {
      func_02108e24(0);
      func_021128a8(2, (u16)(p[4] + 3), 1);
      func_02097b68();
      func_020a1a40(3);
      p[8] = 1;
      return;
    }
    return;
c0c:
    bVar2 = func_02124e60(p, iVar5);
    if (!bVar2 && (iVar5 = func_02124dcc(p, iVar5), iVar5 == 0)) {
      return;
    }
    func_02108e24(0);
    if (p[3] >= 0) {
      unaff_r5 = (u16)p[3];
    } else if (p[4] >= 0) {
      unaff_r5 = (u16)(p[4] + 3);
    }
    func_021128a8(2, unaff_r5, 1);
    func_02097b68();
    func_020a1a40(3);
    p[8] = 1;
    return;
  case 1:
    p[0] = p[0] + 1;
    if (10 < p[0]) {
      iVar5 = p[7];
      switch (iVar5) {
      case 0: goto q0;
      case 1: goto q1;
      case 2: goto q2;
      }
      goto q9;
q0:
      param_2 = (u16)p[3];
      goto q9;
q1:
      param_2 = (u16)(p[4] + 3);
      goto q9;
q2:
      if (p[3] >= 0) {
        param_2 = (u16)p[3];
      } else if (p[4] >= 0) {
        param_2 = (u16)(p[4] + 3);
      }
q9:
      func_021128a8(2, param_2, 0);
    }
    if (*(s32 *)(data_02159060 + 0xa4) == 0) {
      return;
    }
    p[0] = 0;
    iVar5 = p[7];
    if (iVar5 == 0) goto d0;
    if (iVar5 == 1) goto d1;
    if (iVar5 == 2) goto d2;
    return;
d0:
    iVar5 = func_0211b3b0(p[3]);
    bVar2 = func_02094f58(iVar5);
    if (bVar2) {
      iVar5 = *piVar7;
      if (iVar5 == 0) goto d0a;
      if (iVar5 == 1) goto d0a;
      if (iVar5 == 3) unaff_r5 = 0x2545;
      goto d0b;
d0a:
      unaff_r5 = 0x2527;
d0b:
      p[8] = 0xb;
      func_02003c58(10);
    } else {
      p[8] = 4;
      unaff_r5 = 0x2523;
    }
    func_02097b94(8, unaff_r5, 0, (u32)func_02124f00, 0);
    return;
d1:
    func_02097b94(8, 0x2531, 0, (u32)func_02124f00, 0);
    func_02003c58(10);
    p[8] = 0xb;
    return;
d2:
    iVar5 = func_0211b3b0(p[3]);
    if ((p[1] == 1) && (p[3] == 0)) {
      p[8] = 4;
      unaff_r5 = 0x2522;
      goto d2e;
    }
    if (p[3] < 0) goto d2x;
    bVar2 = func_02094f58(iVar5);
    if (bVar2) goto d2x;
    p[8] = 4;
    unaff_r5 = 0x2524;
    goto d2e;
d2x:
    p[8] = 0xb;
    unaff_r5 = 0x2545;
    func_02003c58(10);
d2e:
    func_02097b94(8, unaff_r5, 0, (u32)func_02124f00, 0);
    return;
  case 2:
    if (*(s16 *)(data_02159060 + 0x9a) == 0) goto r2a;
    if (*(s16 *)(data_02159060 + 0x9a) == 1) goto r2b;
    return;
r2a:
    p[0] = 0;
    switch (*piVar7) {
    case 0: goto r2z;
    case 3: goto r2t;
    }
    goto r2o;
r2z:
    if (p[7] != 0) goto r2n;
    func_02003c58(10);
    p[5] = 0x2530;
    p[7] = 1;
    p[8] = 0xd;
    p[6] = 1;
    return;
r2n:
    func_02097b94(0, 0x4b1, 0, 0, 0);
    p[8] = 9;
    return;
r2t:
    func_02097b94(8, 0x2546, 0, (u32)func_02124f00, 0);
    p[8] = 3;
    return;
r2o:
    func_02097b94(0, 0x4b1, 0, 0, 0);
    p[8] = 9;
    return;
r2b:
    p[0] = 0;
    iVar5 = p[7];
    switch (iVar5) {
    case 0: goto r2b0;
    case 1: goto r2b1;
    }
    if (iVar5 == 2) {
      p[4] = -1;
      p[3] = p[4];
    }
    goto r2bend;
r2b0:
    p[3] = -1;
    goto r2bend;
r2b1:
    p[4] = -1;
r2bend:
    p[8] = 0xd;
    func_02003c58(10);
    return;
  case 3:
    switch (*(s16 *)(data_02159060 + 0x9a)) {
    case 0: goto s3a;
    case 1: goto s3b;
    }
    return;
s3a:
    func_02097b94(0, 0x4b1, 0, 0, 0);
    p[8] = 9;
    return;
s3b:
    p[4] = -1;
    p[3] = p[4];
    p[8] = 0xd;
    func_02003c58(10);
    return;
  case 4:
    if (*(s32 *)(data_02159060 + 0xa4) != 0) {
      p[4] = -1;
      p[3] = p[4];
      p[8] = 0;
      return;
    }
    return;
  case 5:
    if (*(s32 *)(data_0215be48 + 0x48bc) == 1) {
      func_02107c70();
      return;
    }
    return;
  case 6:
    if (*(s32 *)(data_02159060 + 0xa4) != 0) {
      p[8] = 0;
      func_021128a8(2, 0, 2);
      func_021128a8(2, 1, 2);
      func_021128a8(2, 2, 2);
      func_021128a8(2, 3, 0);
      func_021128a8(2, 4, 0);
      func_021128a8(2, 5, 0);
      func_021128a8(2, 6, 0);
      func_021128a8(2, 7, 0);
      func_020fc610(0x2e, (u32)data_0214e114, 2);
      func_02124b5c(p);
      return;
    }
    return;
  case 7:
    if (*(s16 *)(data_02159060 + 0x6c) != 2) {
      return;
    }
    iVar5 = func_020959dc();
    if (iVar5 != 0) {
      p[8] = 8;
      uVar4 = 0;
      switch (*piVar7) {
      case 0: goto c7_0;
      case 1: goto c7_1;
      case 2: goto c7_2;
      case 3: goto c7_3;
      }
      goto c7_t;
c7_1:
      unaff_r5 = 0x2528;
      uVar4 = (u32)func_02124f00;
      goto c7_t;
c7_3:
      unaff_r5 = 0x2547;
      uVar4 = (u32)func_02124f00;
      goto c7_t;
c7_2:
      unaff_r5 = 0x2532;
      uVar4 = (u32)func_02124f00;
      goto c7_t;
c7_0:
      unaff_r5 = 0x253a;
      uVar4 = (u32)func_02124ebc;
c7_t:
      func_02097b94(8, unaff_r5, 0, uVar4, 0);
      func_020a19dc(0x43, 0x1e);
      return;
    }
    return;
  case 8:
    if (*(s32 *)(data_02159060 + 0xa4) != 0) {
      p[8] = -1;
      *(s32 *)(*(u8 **)((u8 *)data_02159424 + 4) + 0x20) = 1;
      return;
    }
    return;
  case 9:
    switch (*piVar7) {
    case 0:
      sv5 = func_0211b440(p[3]);
      sv3 = func_0211b330(p[4]);
      func_020a4938(sv5, sv3);
      break;
    case 1:
      sv5 = func_0211b440(p[3]);
      func_020a4b88(sv5);
      break;
    case 2:
      sv3 = func_0211b330(p[4]);
      func_020a4a54(sv3);
      break;
    case 3:
      if (p[3] < 0) goto c9n;
      sv5 = func_0211b440(p[3]);
      func_020957ec(sv5);
      break;
c9n:
      if (p[4] >= 0) {
        sv3 = func_0211b330(p[4]);
        func_0209579c(sv3);
      }
      break;
    }
    func_02096c20(0, 0, 0);
    iVar5 = 0;
    do {
      func_02096bd0(iVar5);
      iVar5 = (iVar5 + 1) * 0x10000 >> 0x10;
    } while (iVar5 < 3);
    iVar5 = 0;
    do {
      func_02096b80(iVar5);
      iVar5 = (iVar5 + 1) * 0x10000 >> 0x10;
    } while (iVar5 < 5);
    break;
  case 10:
    goto c10;
  case 11:
    goto c11;
  case 12:
    goto c12;
  case 13:
    goto c13;
  default:
    goto dflt;
  }
  func_02095a0c();
  func_02095d6c(0, 0, 0, 1);
  switch (*piVar7) {
  case 0: goto z01;
  case 1: goto z01;
  case 2: goto LAB_02124170;
  case 3: goto LAB_02124170;
  default: goto switchD_default;
  }
z01:
  a4 = 0;
  local_2c = 0;
  do {
    ta = (u16)a4;
    func_02095d6c(4, ta, 0, 1);
    a8 = local_2c;
    do {
      func_02095d6c(5, ta, a8, 1);
      a8 = (u16)(a8 + 1);
    } while (a8 < 0x14);
    a4 = (s16)(a4 + 1);
  } while (a4 < 5);
  b4 = 0;
  do {
    tb = (u16)b4;
    func_02095d6c(1, tb, 0, 1);
    b8 = 0;
    do {
      func_02095d6c(2, tb, b8, 1);
      b8 = (u16)(b8 + 1);
    } while (b8 < 0x14);
    b4 = (s16)(b4 + 1);
  } while (b4 < 3);
  goto switchD_default;
LAB_02124170:
  c4 = 0;
  do {
    tc = (u16)c4;
    func_02095d6c(1, tc, 0, 1);
    c8 = 0;
    do {
      func_02095d6c(2, tc, c8, 1);
      c8 = (u16)(c8 + 1);
    } while (c8 < 0x14);
    c4 = (s16)(c4 + 1);
  } while (c4 < 3);
  d4 = 0;
  local_28 = 0;
  do {
    td = (u16)d4;
    func_02095d6c(4, td, 0, 1);
    d8 = local_28;
    do {
      func_02095d6c(5, td, d8, 1);
      d8 = (u16)(d8 + 1);
    } while (d8 < 0x14);
    d4 = (s16)(d4 + 1);
  } while (d4 < 5);
switchD_default:
  func_020a1a40(0x43);
  p[8] = 7;
  return;

c11:
  bVar2 = func_02003a60();
  if (bVar2) {
    func_020fc684(0x37, (u32)data_0214e134, (u32)data_0214e154, (u32)data_0214e174, (u32)data_0214e194);
    func_02003dc4(10);
    iVar5 = p[7];
    switch (iVar5) {
    case 0: goto e0;
    case 1: goto e1;
    case 2: goto e2;
    }
    goto e9;
e0:
    sv5 = func_0211b440(p[3]);
    func_020a4854(sv5);
    goto e9;
e1:
    sv3 = func_0211b330(p[4]);
    func_020a47e8(sv3);
    goto e9;
e2:
    if (p[3] < 0) goto e2b;
    sv5 = func_0211b440(p[3]);
    func_020a4854(sv5);
    goto e9;
e2b:
    if (p[4] < 0) goto e9;
    sv3 = func_0211b330(p[4]);
    func_020a47e8(sv3);
e9:
    p[8] = 10;
    return;
  }
  return;
c10:
  bVar2 = func_020039f4();
  if (bVar2) {
    p[8] = 2;
  }
  return;
c13:
  bVar2 = func_02003a60();
  if (bVar2) {
    func_020fc684(0x36, (u32)data_0214e1b4, (u32)data_0214e1cc, (u32)data_0214e1e4, (u32)data_0214e1fc);
    func_02003dc4(10);
    func_020a4778();
    p[8] = 0xc;
    return;
  }
  return;
c12:
  bVar2 = func_020039f4();
  if (!bVar2) {
    return;
  }
  if (p[6] != 0) {
    p[8] = 6;
    p[6] = 0;
  } else {
    p[8] = 0;
  }
  return;

dflt:
  return;
}
