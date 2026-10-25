# Nintendogs decompilation

A matching decompilation of the C code of **Nintendogs** (Nintendo DS, 2005), made from the European kiosk demo.

| Version | ROM (`.nds`) | MD5 | Status |
|---|---|---|---|
| `Nintendogs (Europe) (En,Fr,De,Es,It) (Demo) (Kiosk)` | the in-store demo | `a190eca6a61b3c69ce48f076d2445eb8` | 8,309 of 8,311 functions of C match |

The ROM is not included: bring your own.

## Status

- **8,309 of 8,311 functions** compile to exactly the original instructions, in the main ARM9 program and the
  overlays. This includes the library code linked into the game (NitroSDK, NitroSystem and an SHA-1
  implementation, at 0x0205e400-0x020b0000).
- **2 functions** are not matched yet, both down to register allocation: listed in `remaining.txt`.
- **58 functions** are not C (hand-written assembly and the compiler's runtime routines) and are left out; also
  listed in `remaining.txt`.
- **66 matches** use a little inline assembly for instructions C can't produce (coprocessor and cache
  operations, and the like); `functions.csv` marks them.
- **Names:** functions keep their addresses (`func_02000afc`, `func_ov019_0215d3a0` for overlay 19); naming hasn't
  started.
- This tree is the C only: there is no linker setup yet, so it doesn't rebuild the ROM.

## Layout

| Path | What |
|---|---|
| `src/arm9/` | the main program, one file per function |
| `src/overlays/ovNNN/` | each overlay's functions |
| `include/ctx.h` | the basic types every file includes |
| `include/nitro.h` | NitroSDK and NitroSystem types, each layout checked against matched code |
| `functions.csv` | every function: file, module, address, compiler build, inline asm |
| `remaining.txt` | the functions not matched yet, and the ones that aren't C |

## Compiler

Metrowerks CodeWarrior for Nintendo DS (`mwccarm`), version 1.2 (base); 1,245 functions match only with build
1.2/b56 (`functions.csv` says which). Flags:

```
-proc arm946e -O4,p -interworking -enum int -char signed
```

Some files start with a `#pragma` the original build used for them (`#pragma avoid_byte strb`, optimizer toggles).
Each function was checked by compiling its file alone and comparing the result instruction by instruction with the
original, with references to other functions and data compared by symbol.

Not affiliated with or endorsed by Nintendo. No game assets or ROM data are included.
