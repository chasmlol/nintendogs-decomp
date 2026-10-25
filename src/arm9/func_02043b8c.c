#pragma avoid_byte strb
#include "ctx.h"

#define DAT_02043eb4 0x7424
#define DAT_02043ec0 0x85c
#define DAT_02043ec4 0x1ab8
#define DAT_02043ec8 0x64c8
#define DAT_02043ecc 0x9ec
#define DAT_02043ed4 0x18b0

extern u8 *data_0214f464;
extern u8 *data_0215942c;
extern void func_0203efa0(void);
extern void func_02024154(void);


extern s32 func_020038b8(u32 *p, s32 a);
extern u64 func_02080858(void);
extern void func_02043edc(void);
extern void func_0206c7d4(s32 a, s32 b, s32 c);
extern void func_020955e4(s32 a, s16 b);
extern void func_02094afc(s32 a, s16 b, s32 c);
extern void func_02094994(s32 a, s16 b, s32 c);
extern u32 *func_0208d050(u32 *p, s32 a, s32 b, s16 c);
extern void func_0208ba24(u32 *p);
extern u32 func_0208bcbc(u32 *p);
extern u32 func_0208bbf4(u32 *p);
extern void func_02006700(s32 a, u32 b);

u32 func_02043b8c(u32 *param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 uVar5;
    u32 iVar3;
    s8 uVar18;
    int local_3c;
    s32 iVar17;
    s32 iVar20;
    BOOL bVar20;
    u32 uVar16;
    s32 k64;
    s32 uVar6;
    u32 *puVar4;
    s32 iVar15;
    int iVar13;
    int uVar14;
    s32 local_44;
    s16 sVar7;
    s32 iVar10;
    s32 iVar2;
    s32 iVar11;
    u32 local_30;
    s32 k316;
    s32 uVar12;
    s16 local_4c;
    s32 iVar8;
    u32 local_54;
    u32 iVar19;
    s8 local_40;

    iVar2 = func_020038b8(param_1, DAT_02043eb4);
    data_0214f464 = (u8 *)iVar2;
    *(s32 *)data_0214f464 = (s32)func_02080858();
    func_02043edc();
    uVar18 = 0;
    k316 = 316;
    k64 = 64;
    local_54 = 0;
    iVar15 = 0;
    iVar19 = 0;
    local_30 = 0;
    local_3c = 0;
    local_40 = 0;
    local_44 = 0;
    local_4c = 1;
    do {
        iVar2 = uVar18 * 0x14;
        if ((*(u16 *)(data_0215942c + iVar2 + 0x20) & 1) != 0) {
            *(u8 *)(data_0214f464 + uVar18 + 0x19) = (u8)local_4c;
            bVar20 = (*(u16 *)(data_0215942c + iVar2 + 0x20) & 2) != 0;
            *(u8 *)(data_0214f464 + uVar18 + 0x1c) = (u8)(bVar20 ? local_4c : local_44);
            sVar7 = (s16)uVar18;
            if (*(s8 *)(data_0214f464 + uVar18 + 0x1c) != 0) {
                iVar3 = *(s32 *)(data_0215942c + iVar2 + 0x24);
                if (0 != iVar3) {
                    func_0206c7d4(iVar3, (s32)(data_0214f464 + 0x1a4 + local_54), DAT_02043ec0);
                }
                iVar17 = (s32)local_44;
                iVar13 = local_44;
                iVar11 = local_44;
                do {
                    iVar8 = local_40;
                    iVar10 = (s32)(s32)data_0215942c + 0x20 + iVar2;
                    iVar3 = *(s32 *)(iVar10 + 8);
                    if (iVar3 != 0) {
                        iVar8 = (s16)iVar17 * 0x13c + iVar3;
                    }
                    iVar10 = *(s32 *)(0xc + iVar10);
                    iVar20 = (u8)local_3c;
                    if (0 != iVar10) {
                        iVar20 = iVar10 + iVar17 * 0x40;
                    }
                    if (iVar8 != 0) {
                        func_0206c7d4(iVar8, (s32)(data_0214f464 + DAT_02043ec4 + iVar15 + iVar13), k316);
                    }
                    if (iVar20 != 0) {
                        func_0206c7d4(iVar20, (s32)(data_0214f464 + DAT_02043ec8 + iVar19 + iVar11), k64);
                    }
                    iVar13 = 0x13c + iVar13;
                    iVar11 += 0x40;
                    iVar17 = ((1 + iVar17) * 0x1000000) >> 24;
                } while (iVar17 < 0x14);
            } else {
                if (*(s8 *)(data_0214f464 + 6) == -1) {
                    *(s8 *)(data_0214f464 + 6) = (s8)uVar18;
                }
                func_020955e4((s32)(data_0214f464 + 0x1a4 + local_54), sVar7);
                uVar12 = local_30;
                uVar16 = local_30;
                uVar14 = local_30;
                do {
                    func_02094afc((s32)(DAT_02043ec4 + data_0214f464 + (s32)iVar15 + uVar16), sVar7, uVar12);
                    func_02094994((s32)(DAT_02043ec8 + data_0214f464 + iVar19 + uVar14), sVar7, uVar12);
                    uVar16 += 0x13c;
                    uVar14 = uVar14 + 0x40;
                    uVar12 = (((s32)(uVar12 + 1) * 0x1000000) >> 24);
                } while ((s32)0x14 > uVar12);
            }
            puVar4 = func_0208d050(param_1, 0, DAT_02043ecc, uVar18);
            *(u32 **)(data_0214f464 + 4 * (s32)uVar18 + 0x48) = puVar4;
            *(u32 *)(*(u8 **)(data_0214f464 + uVar18 * 4 + 0x48) + 0x74) = (u32)func_0203efa0;
        }
        iVar19 = iVar19 + 0x500;
        local_54 = DAT_02043ec0 + local_54;
        iVar15 += DAT_02043ed4;
        uVar18 = (1 + uVar18);
    } while (uVar18 < 3);
    func_0208ba24(param_1);
    uVar5 = func_0208bcbc(param_1);
    iVar2 = (s32)data_0214f464;
    *(u32 *)(iVar2 + 0x7404) = uVar5;
    uVar6 = func_0208bbf4(param_1);
    *(u32 *)(data_0214f464 + 0x7418) = uVar6;
    func_02006700(5, (u32)func_02024154);
    return (u32)data_0214f464;
}
