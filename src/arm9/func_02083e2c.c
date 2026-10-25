#include "ctx.h"

typedef s32 fx32;
typedef s16 fx16;
typedef s64 fx64;
typedef u16 GXRgb;
typedef struct { fx32 x, y, z; } VecFx32;

#define FX32_ONE 4096
#define FX32_CONST(x) ((fx32)((x) * 4096))
#define FX_MUL(v1, v2) ((fx32)(((fx64)(v1) * (v2) + 0x800LL) >> 12))

typedef struct {
    u16 current : 5;
    u16 base : 5;
    u16 pad : 6;
} SPLAlpha;

typedef struct SPLParticle {
    struct SPLParticle *next;
    struct SPLParticle *prev;
    VecFx32 position;
    VecFx32 emitterPos;
    VecFx32 velocity;
    u16 lifeTime;
    u16 age;
    fx32 baseScale;
    fx16 animScale;
    u16 rotation;
    s16 angularVelocity;
    GXRgb color;
    u16 loopTimeFactor;
    u16 lifeRateOffset;
    union {
        u16 all;
        SPLAlpha bits;
    } alpha;
    u8 texture;
    u8 loopFrame;
} SPLParticle;

typedef struct {
    SPLParticle *first;
    int count;
} SPLParticleList;

typedef struct {
    u16 b0 : 1;
    u16 b1 : 1;
    u16 b2 : 1;
    u16 rotationType : 2;
    u16 b5 : 1;
    u16 useChildColor : 1;
    u16 rest : 9;
} SPLChildFlags;

typedef struct {
    SPLChildFlags flags;
    fx16 randomInitVelMag;
    fx16 endScale;
    u16 lifeTime;
    u8 velocityRatio;
    u8 scaleRatio;
    GXRgb color;
    u8 emissionCount;
    u8 emissionDelay;
    u8 emissionInterval;
    u8 texture;
} SPLChildResource;

typedef struct {
    u8 pad[0x14];
    SPLChildResource *childResource;
} SPLResource;

typedef struct {
    u8 pad[0x10];
    SPLParticleList childParticles;

    SPLResource *resource;
} SPLEmitter;

extern u32 data_02156024;

extern SPLParticle *func_02085a94(SPLParticleList *list);
extern void func_02085ad8(SPLParticleList *list, SPLParticle *ptcl);
extern fx32 func_02067898(fx32 numer, fx32 denom);

static inline u32 SPLRandom_U32(void)
{
    data_02156024 = data_02156024 * 0x5eedf715 + 0x1b0cb173;
    return data_02156024;
}


/* random value in [-range, range) from the top 9 bits of the SPL seed */
#define SPL_RAND_RANGE(range) (((range) * (s32)(SPLRandom_U32() >> 23) - ((range) << 8)) >> 8)

void func_02083e2c(SPLParticle *parent, SPLEmitter *emtr, SPLParticleList *list)
{
    SPLParticle *chld;
    SPLChildResource *chldRes;
    int i;
    fx32 velBase;

    chldRes = emtr->resource->childResource;
    for (i = 0; i < chldRes->emissionCount; i++) {
        chld = func_02085a94(list);
        if (chld == NULL) {
            return;
        }
        func_02085ad8(&emtr->childParticles, chld);

        chld->emitterPos = parent->emitterPos;
        velBase = func_02067898(FX32_CONST(chldRes->velocityRatio), FX32_CONST(255));
        {
            fx32 v = FX_MUL(parent->velocity.x, velBase);
            chld->velocity.x = v + SPL_RAND_RANGE(chldRes->randomInitVelMag);
        }
        {
            fx32 v = FX_MUL(parent->velocity.y, velBase);
            chld->velocity.y = v + SPL_RAND_RANGE(chldRes->randomInitVelMag);
        }
        {
            fx32 v = FX_MUL(parent->velocity.z, velBase);
            chld->velocity.z = v + SPL_RAND_RANGE(chldRes->randomInitVelMag);
        }
        chld->position = parent->position;
        {
            fx32 s = (parent->baseScale * parent->animScale) >> 12;
            chld->baseScale = s * (chldRes->scaleRatio + 1) >> 6;
        }
        chld->animScale = FX32_ONE;
        if (chldRes->flags.useChildColor) {
            chld->color = chldRes->color;
        } else {
            chld->color = parent->color;
        }
        chld->alpha.bits.current = (parent->alpha.bits.current * (parent->alpha.bits.base + 1)) >> 5;
        chld->alpha.bits.base = 31;
        switch (chldRes->flags.rotationType) {
        case 0:
            chld->rotation = 0;
            chld->angularVelocity = 0;
            break;
        case 1:
            chld->rotation = parent->rotation;
            chld->angularVelocity = 0;
            break;
        case 2:
            chld->rotation = parent->rotation;
            chld->angularVelocity = parent->angularVelocity;
            break;
        }
        chld->lifeTime = chldRes->lifeTime;
        chld->age = 0;
        chld->texture = chldRes->texture;
        chld->loopTimeFactor = 0xffff / (parent->lifeTime / 2);
        chld->lifeRateOffset = 0xffff / parent->lifeTime;
        chld->loopFrame = 0;
    }
}
