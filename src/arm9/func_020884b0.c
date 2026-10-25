#include "ctx.h"

typedef struct {
    u32 offset;
    u32 length;
} CARDRomRegion;

typedef struct FSArchive FSArchive;

extern u32 data_02156040;
extern u32 data_0215603c;
extern CARDRomRegion data_02156044;
extern CARDRomRegion data_0215604c;
extern FSArchive data_02156054;
extern const char data_0213e858[];
extern const CARDRomRegion data_027ffe40;   /* ROM header FNT region */
extern const CARDRomRegion data_027ffe48;   /* ROM header FAT region */

extern s32 func_0207ee60(void);
extern void func_020659f4(void);
extern void func_0208779c(FSArchive *arc);
extern BOOL func_020876dc(FSArchive *arc, const char *name, u32 len);
extern void func_0208728c(FSArchive *arc, void *proc, u32 flags);
extern BOOL func_020875cc(FSArchive *arc, u32 base, u32 fat, u32 fat_size, u32 fnt, u32 fnt_size, void *read_func, void *write_func);
extern int func_02088650();
extern int func_02088658();
extern int func_02088660();
extern int func_020886f0();
extern int func_020886f8();

void func_020884b0(u32 default_dma_no)
{
    data_02156040 = default_dma_no;
    data_0215603c = (u32)func_0207ee60();
    data_02156044.offset = 0;
    data_02156044.length = 0;
    data_0215604c.offset = 0;
    data_0215604c.length = 0;

    func_020659f4();

    func_0208779c(&data_02156054);
    (void)func_020876dc(&data_02156054, data_0213e858, 3);

    if (*(u16 *)0x027ffc40 == 2) {
        data_02156044.offset = (u32)~0;
        data_02156044.length = 0;
        data_0215604c.offset = (u32)~0;
        data_0215604c.length = 0;
        func_0208728c(&data_02156054, func_02088650, (u32)~0);
        (void)func_020875cc(&data_02156054, 0, 0, 0, 0, 0, func_02088658, func_020886f0);
    } else {
        const CARDRomRegion *const fnt = &data_027ffe40;
        const CARDRomRegion *const fat = &data_027ffe48;

        func_0208728c(&data_02156054, func_02088660, 0x602);
        if ((fnt->offset == 0xFFFFFFFF) || (fnt->offset == 0x00000000) ||
            (fat->offset == 0xFFFFFFFF) || (fat->offset == 0x00000000)) {
        } else {
            (void)func_020875cc(&data_02156054, 0, fat->offset, fat->length, fnt->offset, fnt->length,
                                func_020886f8, func_020886f0);
        }
    }
}
