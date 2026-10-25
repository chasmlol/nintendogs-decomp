#include "ctx.h"

typedef struct {
    u8 pad[0x2f4];
    s32 active; /* 0x2f4 */
    s32 x;      /* 0x2f8 */
    s32 y;      /* 0x2fc */
    s32 f300;   /* 0x300 */
    s32 f304;   /* 0x304 */
} Obj;

#define reg_G2S_DB_BG3OFS  (*(vu32 *)0x0400101c)
#define reg_G2S_DB_WININ   (*(vu16 *)0x04001048)
#define reg_G2S_DB_WINOUT  (*(vu16 *)0x0400104a)
#define reg_G2S_DB_WIN0H   (*(vu16 *)0x04001040)
#define reg_G2S_DB_WIN0V   (*(vu16 *)0x04001044)
#define reg_GXS_DB_DISPCNT (*(vu32 *)0x04001000)

#define REG_G2_BG0OFS_VOFFSET_SHIFT 16
#define REG_G2_BG0OFS_VOFFSET_MASK 0x01ff0000
#define REG_G2_BG0OFS_HOFFSET_SHIFT 0
#define REG_G2_BG0OFS_HOFFSET_MASK 0x000001ff

#define REG_G2_WININ_WIN0IN_SHIFT 0
#define REG_G2_WININ_WIN0IN_MASK 0x003f
#define REG_G2_WINOUT_WINOUT_SHIFT 0
#define REG_G2_WINOUT_WINOUT_MASK 0x003f

#define REG_G2_WIN0H_LEFTX_SHIFT 8
#define REG_G2_WIN0H_LEFTX_MASK 0xff00
#define REG_G2_WIN0H_RIGHTX_SHIFT 0
#define REG_G2_WIN0H_RIGHTX_MASK 0x00ff
#define REG_G2_WIN0V_UPPERY_SHIFT 8
#define REG_G2_WIN0V_UPPERY_MASK 0xff00
#define REG_G2_WIN0V_LOWERY_SHIFT 0
#define REG_G2_WIN0V_LOWERY_MASK 0x00ff

#define REG_GXS_DB_DISPCNT_W0_SHIFT 13
#define REG_GXS_DB_DISPCNT_W0_MASK 0x00002000
#define REG_GXS_DB_DISPCNT_W1_MASK 0x00004000
#define REG_GXS_DB_DISPCNT_OW_MASK 0x00008000

static inline void G2x_SetBGyOffset_(vu32 *ptr, int hOffset, int vOffset)
{
    *ptr = (u32)(((hOffset << REG_G2_BG0OFS_HOFFSET_SHIFT) & REG_G2_BG0OFS_HOFFSET_MASK) |
                 ((vOffset << REG_G2_BG0OFS_VOFFSET_SHIFT) & REG_G2_BG0OFS_VOFFSET_MASK));
}

static inline void G2S_SetBG3Offset(int hOffset, int vOffset)
{
    G2x_SetBGyOffset_(&reg_G2S_DB_BG3OFS, hOffset, vOffset);
}

static inline void G2S_SetWnd0InsidePlane(int wnd, BOOL effect)
{
    u32 tmp;
    tmp = (u32)((reg_G2S_DB_WININ & ~REG_G2_WININ_WIN0IN_MASK) | (wnd << REG_G2_WININ_WIN0IN_SHIFT));
    if (effect) {
        tmp |= (0x20 << REG_G2_WININ_WIN0IN_SHIFT);
    }
    reg_G2S_DB_WININ = (u16)tmp;
}

static inline void G2S_SetWndOutsidePlane(int wnd, BOOL effect)
{
    u32 tmp;
    tmp = (u32)((reg_G2S_DB_WINOUT & ~REG_G2_WINOUT_WINOUT_MASK) | (wnd << REG_G2_WINOUT_WINOUT_SHIFT));
    if (effect) {
        tmp |= (0x20 << REG_G2_WINOUT_WINOUT_SHIFT);
    }
    reg_G2S_DB_WINOUT = (u16)tmp;
}

static inline void G2S_SetWnd0Position(int x1, int y1, int x2, int y2)
{
    reg_G2S_DB_WIN0H = (u16)(((x1 << REG_G2_WIN0H_LEFTX_SHIFT) & REG_G2_WIN0H_LEFTX_MASK) |
                             ((x2 << REG_G2_WIN0H_RIGHTX_SHIFT) & REG_G2_WIN0H_RIGHTX_MASK));
    reg_G2S_DB_WIN0V = (u16)(((y1 << REG_G2_WIN0V_UPPERY_SHIFT) & REG_G2_WIN0V_UPPERY_MASK) |
                             ((y2 << REG_G2_WIN0V_LOWERY_SHIFT) & REG_G2_WIN0V_LOWERY_MASK));
}

static inline void GXS_SetVisibleWnd(int window)
{
    reg_GXS_DB_DISPCNT = (u32)((reg_GXS_DB_DISPCNT & ~(REG_GXS_DB_DISPCNT_W0_MASK |
                                                      REG_GXS_DB_DISPCNT_W1_MASK |
                                                      REG_GXS_DB_DISPCNT_OW_MASK)) |
                               (window << REG_GXS_DB_DISPCNT_W0_SHIFT));
}

void func_0211565c(Obj *p)
{
    if (p->active != 0) {
        s32 x = 255 - p->x;
        s32 y = -p->y;
        if (y >= 191) y = 191;
        if (x < 0) x = 0;
        G2S_SetBG3Offset(p->x, p->y);
        G2S_SetWnd0InsidePlane(8, FALSE);
        G2S_SetWndOutsidePlane(0x17, FALSE);
        G2S_SetWnd0Position(0, y, x, 191);
        GXS_SetVisibleWnd(1);
    } else if (p->f300 != 0) {
        p->f300 = 0;
        p->f304 = 0;
        G2S_SetBG3Offset(0, 0);
        G2S_SetWnd0Position(0, 0, 255, 191);
        GXS_SetVisibleWnd(0);
    } else if (p->f304 != 0) {
        p->f304 = 0;
        GXS_SetVisibleWnd(0);
    }
}
