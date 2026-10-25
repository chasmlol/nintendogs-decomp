#include "ctx.h"

#define CARD_ROM_PAGE_SIZE 512
#define CARD_DATA_READY 0x00800000
#define CARD_START 0x80000000

typedef struct CARDRomStat {
    void (*read_func)(struct CARDRomStat *p);
    u32 ctrl;
    u8 *cache_page;
    u32 dummy[5];
    u8 cache_buf[CARD_ROM_PAGE_SIZE];
} CARDRomStat;

typedef struct {
    u8 pad00[0x18];
    u32 src;
    u32 dst;
    u32 len;
} CARDiCommon;

extern CARDiCommon data_02150600;
extern void func_02065f04(u32 command1, u32 command2);
extern BOOL func_02066024(CARDRomStat *p);

#define reg_CARD_CNT (*(vu32 *)0x040001a4)
#define reg_CARD_DATA (*(vu32 *)0x04100010)

void func_02065be4(CARDRomStat *p)
{
    CARDiCommon *const c = &data_02150600;
    u32 *dst;
    u32 *const cache = (u32 *)p->cache_buf;

    for (;;) {

        u32 len = CARD_ROM_PAGE_SIZE;
        const u32 page = c->src & -CARD_ROM_PAGE_SIZE;
        if ((page == c->src) && ((c->dst & 3) == 0) && (c->len >= CARD_ROM_PAGE_SIZE)) {
            dst = (u32 *)c->dst;
        } else {
            dst = cache;
            p->cache_page = (u8 *)page;
        }
        func_02065f04((page >> 8) | 0xB7000000, page << 24);
        {
            u32 index = 0;
            reg_CARD_CNT = p->ctrl;
            for (;;) {
                const u32 ctrl = reg_CARD_CNT;
                if ((ctrl & CARD_DATA_READY) != 0) {
                    const u32 data = reg_CARD_DATA;
                    if (index < len) {
                        dst[index++] = data;
                    }
                }
                if (!(ctrl & CARD_START)) {
                    break;
                }
            }
        }
        if (dst == (u32 *)c->dst) {
            data_02150600.src += len;
            data_02150600.dst += len;
            if ((data_02150600.len -= len) == 0) {
                break;
            }
        } else {
            if (!func_02066024(p)) {
                break;
            }
        }
    }
}
