#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_common_subs off

extern u32 data_ov006_02165f84;
extern u8 *data_ov006_021661c4;
extern u8 data_ov006_02165f8c[];
extern u8 data_ov006_02165fa4[];
extern u8 data_ov006_02165fb4[];
extern u8 data_ov006_02165fcc[];
extern u8 data_ov006_02165fe0[];
extern u8 data_ov006_02165ff4[];
extern u8 data_ov006_02166008[];
extern u8 *func_020038b8(s32 a, s32 b);
extern u8 *func_0208c720(s32 a, u32 b, u8 *c);
extern void func_0205f050(s32 a, s32 b, u8 *c, u32 d);
extern u32 func_0207df48(s32 a);
extern void func_0207df9c(u8 *a, u8 *b);
extern void func_020737d8(u32 a, u32 b);
extern void func_02073768(u32 a, u32 b);
extern void func_02073828(u32 a, u32 b);

void func_ov006_0216537c(s32 *param_1)
{
    u8 acStack_48[64];
    u8 *puVar3;
    u32 iVar2;
    u32 v84;
    u8 *iVar5;

    iVar2 = (u32)func_020038b8((s32)param_1, 0x188);
    v84 = data_ov006_02165f84;
    data_ov006_021661c4 = (u8 *)iVar2;
    puVar3 = func_0208c720((s32)param_1, v84, data_ov006_02165f8c);
    func_0205f050((s32)acStack_48, 0x40, data_ov006_02165fa4, data_ov006_02165f84);
    iVar2 = func_0207df48((s32)acStack_48);
    *(u32 *)(data_ov006_021661c4 + 0x158) = iVar2;
    func_0205f050((s32)acStack_48, 0x40, data_ov006_02165fb4, data_ov006_02165f84);
    iVar2 = func_0207df48((s32)acStack_48);
    *(u32 *)(data_ov006_021661c4 + 0x15c) = iVar2;
    func_0205f050((s32)acStack_48, 0x40, data_ov006_02165fcc, data_ov006_02165f84);
    iVar2 = func_0207df48((s32)acStack_48);
    *(u32 *)(data_ov006_021661c4 + 0x160) = iVar2;
    func_0205f050((s32)acStack_48, 0x40, data_ov006_02165fe0, data_ov006_02165f84);
    iVar2 = func_0207df48((s32)acStack_48);
    *(u32 *)(data_ov006_021661c4 + 0x164) = iVar2;
    func_0205f050((s32)acStack_48, 0x40, data_ov006_02165ff4, data_ov006_02165f84);
    iVar2 = func_0207df48((s32)acStack_48);
    *(u32 *)(data_ov006_021661c4 + 0x168) = iVar2;
    func_0205f050((s32)acStack_48, 0x40, data_ov006_02166008, data_ov006_02165f84);
    iVar2 = func_0207df48((s32)acStack_48);
    iVar5 = data_ov006_021661c4;
    *(u32 *)(iVar5 + 0x16c) = iVar2;
    func_0207df9c(puVar3, iVar5);
    func_020737d8(*(u32 *)(data_ov006_021661c4 + 0x160), (u32)(data_ov006_021661c4 + 0x170));
    func_02073768(*(u32 *)(data_ov006_021661c4 + 0x164), (u32)(data_ov006_021661c4 + 0x174));
    func_020737d8(*(u32 *)(data_ov006_021661c4 + 0x168), (u32)(data_ov006_021661c4 + 0x178));
    func_02073828(*(u32 *)(data_ov006_021661c4 + 0x16c), (u32)(data_ov006_021661c4 + 0x17c));
    *data_ov006_021661c4 = 0;
    *(u32 *)(data_ov006_021661c4 + 0x180) = 0;
    *(u32 *)(data_ov006_021661c4 + 0x184) = 0;
}
