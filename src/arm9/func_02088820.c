#include "ctx.h"

typedef struct MWiDestructorChain {
    struct MWiDestructorChain *next;
    void (*dtor)(void *obj);
    void *obj;
} MWiDestructorChain;

typedef struct {
    u32 id;
    void *ram_address;
    u32 ram_size;
    u32 bss_size;
} FSOverlayInfo;

extern MWiDestructorChain *data_0214f990;
extern u32 func_02080b08(void);
extern u32 func_02080b1c(u32 enabled);

static inline void *FS_GetOverlayAddress(FSOverlayInfo *p_ovi)
{
    return p_ovi->ram_address;
}

static inline u32 FS_GetOverlayImageSize(FSOverlayInfo *p_ovi)
{
    return p_ovi->ram_size;
}

static inline u32 FS_GetOverlayTotalSize(FSOverlayInfo *p_ovi)
{
    return p_ovi->ram_size + p_ovi->bss_size;
}

void func_02088820(FSOverlayInfo *p_ovi)
{
    for (;;) {
        MWiDestructorChain *head = NULL, *tail = NULL;
        const u32 region_top = (u32)FS_GetOverlayAddress(p_ovi);
        const u32 image_size = FS_GetOverlayImageSize(p_ovi);
        const u32 region_bss = region_top + image_size;
        const u32 region_bottom = region_bss + (FS_GetOverlayTotalSize(p_ovi) - image_size);
        {
            u32 bak_psr = func_02080b08();
            MWiDestructorChain *prev = NULL;
            MWiDestructorChain *base = data_0214f990;
            MWiDestructorChain *p = base;
            while (p) {
                MWiDestructorChain *next = p->next;
                const u32 dtor = (u32)p->dtor;
                const u32 obj = (u32)p->obj;
                if (((dtor >= region_top) && (dtor < region_bss)) || ((obj >= region_bss) && (obj < region_bottom))) {
                    if (!tail) {
                        head = p;
                    } else {
                        tail->next = p;
                    }
                    if (base == p) {
                        base = data_0214f990 = next;
                    }
                    tail = p;
                    p->next = NULL;
                    if (prev) {
                        prev->next = next;
                    }
                } else {
                    prev = p;
                }
                p = next;
            }
            (void)func_02080b1c(bak_psr);
        }
        if (!head) {
            break;
        }
        do {
            MWiDestructorChain *next = head->next;
            if (head->dtor) {
                (*head->dtor)(head->obj);
            }
            head = next;
        } while (head);
    }
}
