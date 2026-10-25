#include "ctx.h"

extern u8 data_02148b2c[];
extern u8 data_02148b3c[];
extern void func_02068368(s32 a);
extern void func_020fc594(s32 a, s32 b, s32 c);
extern void func_0207c910(s32 a, s32 b, u32 c, s32 d);

#define REG16(a) (*(vu16 *)(a))
#define REG32(a) (*(vu32 *)(a))

void func_021133cc(u32 *param_1)
{
  func_02068368(0);
  REG16(0x0400100a) = (REG16(0x0400100a) & 0x43) | 0x504;
  REG16(0x0400100c) = (REG16(0x0400100c) & 0x43) | 0x604;
  REG16(0x0400100e) = (REG16(0x0400100e) & 0x43) | 0x708;
  func_020fc594(2, 2, 1);
  func_020fc594(2, 4, 1);
  func_020fc594(2, 0x10, 1);
  REG16(0x04001040) = 0xff;
  REG16(0x04001044) = 0xbf;
  REG16(0x04001042) = 0xff;
  REG16(0x04001046) = 0xbf;
  REG32(0x04001014) = 0;
  REG32(0x04001018) = 0;
  REG16(0x0400100a) = REG16(0x0400100a) & ~64;
  REG16(0x0400100c) = REG16(0x0400100c) & ~64;
  REG16(0x0400100a) = (REG16(0x0400100a) & ~3) | 2;
  REG16(0x0400100c) = (REG16(0x0400100c) & ~3) | 3;
  func_0207c910(31, 0, param_1[3], 0xe0);
  func_0207c910(*(s32 *)(data_02148b2c + 4), 0, param_1[2], 0x1c00);
  func_0207c910(*(s32 *)(data_02148b3c + 4), 0, param_1[5], 0x800);
  func_0207c910(*(s32 *)(data_02148b2c + 8), 0, param_1[2], 0x1c00);
  func_0207c910(*(s32 *)(data_02148b3c + 8), 0, param_1[6], 0x800);
  *param_1 = 0;
}
