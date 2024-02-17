#include "loot.h"

unsigned char loot_bmp[] = {
  0x42, 0x4d, 0x2e, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x36, 0x00,
  0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x1e, 0x00,
  0x00, 0x00, 0x01, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x07,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff,
  0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff,
  0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab,
  0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab,
  0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff,
  0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff,
  0x00, 0x00, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0x6d,
  0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d,
  0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d,
  0xa0, 0xab, 0x4f, 0x7a, 0x92, 0x4f, 0x7a, 0x92, 0x6d, 0xa0, 0xab, 0x4f,
  0x7a, 0x92, 0x6d, 0xa0, 0xab, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff,
  0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00,
  0xff, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0,
  0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x00, 0x00, 0x64, 0x6d, 0xa0,
  0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0,
  0xab, 0x4f, 0x7a, 0x92, 0x4f, 0x7a, 0x92, 0x4f, 0x7a, 0x92, 0x4f, 0x7a,
  0x92, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0xff, 0x00,
  0xff, 0xff, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0xff, 0x6d, 0xa0, 0xab,
  0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab,
  0x6d, 0xa0, 0xab, 0x00, 0x00, 0x64, 0x00, 0x00, 0x64, 0x00, 0x00, 0x64,
  0x00, 0x00, 0x64, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab,
  0x4f, 0x7a, 0x92, 0x4f, 0x7a, 0x92, 0x4f, 0x7a, 0x92, 0x4f, 0x7a, 0x92,
  0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff,
  0x00, 0x00, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d,
  0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x00, 0x00, 0x64, 0x00,
  0x00, 0x64, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x00,
  0x00, 0x64, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d,
  0xa0, 0xab, 0x4f, 0x7a, 0x92, 0x4f, 0x7a, 0x92, 0x4f, 0x7a, 0x92, 0x6d,
  0xa0, 0xab, 0x6d, 0xa0, 0xab, 0xff, 0x00, 0xff, 0x00, 0x00, 0x6d, 0xa0,
  0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0,
  0xab, 0x00, 0x00, 0x64, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x00, 0x00,
  0x64, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x00, 0x00, 0x64, 0x6d, 0xa0,
  0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0,
  0xab, 0x4f, 0x7a, 0x92, 0x4f, 0x7a, 0x92, 0x4f, 0x7a, 0x92, 0x4f, 0x7a,
  0x92, 0x6d, 0xa0, 0xab, 0x00, 0x00, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab,
  0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab,
  0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x00, 0x00, 0x64, 0x6d, 0xa0, 0xab,
  0x00, 0x00, 0x64, 0x00, 0x00, 0x64, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab,
  0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab,
  0x4f, 0x7a, 0x92, 0x4f, 0x7a, 0x92, 0x4f, 0x7a, 0x92, 0x6d, 0xa0, 0xab,
  0x00, 0x00, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d,
  0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d,
  0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x00, 0x00, 0x64, 0x00, 0x00, 0x64, 0x6d,
  0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d,
  0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x4f,
  0x7a, 0x92, 0x4f, 0x7a, 0x92, 0x6d, 0xa0, 0xab, 0x00, 0x00, 0x6d, 0xa0,
  0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0,
  0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x00, 0x00, 0x64, 0x00, 0x00,
  0x64, 0x00, 0x00, 0x64, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0,
  0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0,
  0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x4f, 0x7a, 0x92, 0x4f, 0x7a,
  0x92, 0x6d, 0xa0, 0xab, 0x00, 0x00, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab,
  0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab,
  0x00, 0x00, 0x64, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x00, 0x00, 0x64,
  0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab,
  0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab,
  0x6d, 0xa0, 0xab, 0x4f, 0x7a, 0x92, 0x4f, 0x7a, 0x92, 0x6d, 0xa0, 0xab,
  0x00, 0x00, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d,
  0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x00, 0x00, 0x64, 0x6d,
  0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x00, 0x00, 0x64, 0x6d, 0xa0, 0xab, 0x6d,
  0xa0, 0xab, 0x00, 0x00, 0x64, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d,
  0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x4f,
  0x7a, 0x92, 0x4f, 0x7a, 0x92, 0x6d, 0xa0, 0xab, 0x00, 0x00, 0x6d, 0xa0,
  0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0,
  0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x00, 0x00, 0x64, 0x6d, 0xa0,
  0xab, 0x00, 0x00, 0x64, 0x6d, 0xa0, 0xab, 0x00, 0x00, 0x64, 0x6d, 0xa0,
  0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0,
  0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x4f, 0x7a, 0x92, 0x4f, 0x7a,
  0x92, 0x6d, 0xa0, 0xab, 0x00, 0x00, 0xff, 0x00, 0xff, 0x6d, 0xa0, 0xab,
  0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab,
  0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x00, 0x00, 0x64, 0x00, 0x00, 0x64,
  0x00, 0x00, 0x64, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab,
  0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab,
  0x4f, 0x7a, 0x92, 0x4f, 0x7a, 0x92, 0x4f, 0x7a, 0x92, 0x6d, 0xa0, 0xab,
  0x00, 0x00, 0xff, 0x00, 0xff, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d,
  0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d,
  0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x00, 0x00, 0x64, 0x6d,
  0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d,
  0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x4f, 0x7a, 0x92, 0x4f,
  0x7a, 0x92, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x00, 0x00, 0xff, 0x00,
  0xff, 0xff, 0x00, 0xff, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0,
  0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0,
  0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x00, 0x00, 0x64, 0x6d, 0xa0,
  0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0,
  0xab, 0x6d, 0xa0, 0xab, 0x4f, 0x7a, 0x92, 0x6d, 0xa0, 0xab, 0x6d, 0xa0,
  0xab, 0xff, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff,
  0xff, 0x00, 0xff, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab,
  0x6d, 0xa0, 0xab, 0x00, 0x00, 0xc1, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab,
  0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab,
  0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x4f, 0x7a, 0x92, 0x4f, 0x7a, 0x92,
  0x4f, 0x7a, 0x92, 0x6d, 0xa0, 0xab, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff,
  0x00, 0x00, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff,
  0x00, 0xff, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x00, 0x00, 0xc1, 0x00,
  0x00, 0xc1, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d,
  0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x4f,
  0x7a, 0x92, 0x4f, 0x7a, 0x92, 0x4f, 0x7a, 0x92, 0x6d, 0xa0, 0xab, 0x6d,
  0xa0, 0xab, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00,
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00,
  0xff, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x00, 0x00, 0xc1, 0x6d, 0xa0,
  0xab, 0x6d, 0xa0, 0xab, 0x00, 0x00, 0xc1, 0x6d, 0xa0, 0xab, 0x6d, 0xa0,
  0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x4f, 0x7a, 0x92, 0x4f, 0x7a,
  0x92, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0xff, 0x00, 0xff, 0xff, 0x00,
  0xff, 0xff, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff,
  0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff,
  0x6d, 0xa0, 0xab, 0x00, 0x00, 0xc1, 0x6d, 0xa0, 0xab, 0x00, 0x00, 0xc1,
  0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab,
  0x6d, 0xa0, 0xab, 0x4f, 0x7a, 0x92, 0x4f, 0x7a, 0x92, 0x6d, 0xa0, 0xab,
  0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff,
  0x00, 0x00, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff,
  0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0x00,
  0x00, 0xc1, 0x6d, 0xa0, 0xab, 0x00, 0x00, 0xc1, 0x6d, 0xa0, 0xab, 0x6d,
  0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d,
  0xa0, 0xab, 0x6d, 0xa0, 0xab, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff,
  0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00,
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00,
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0x00, 0x00,
  0xc1, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0,
  0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0xff, 0x00,
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00,
  0xff, 0xff, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff,
  0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff,
  0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0x00, 0x00, 0xc1, 0x00, 0x00, 0xc1,
  0x00, 0x00, 0xc1, 0x00, 0x00, 0xc1, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab,
  0x6d, 0xa0, 0xab, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff,
  0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff,
  0x00, 0x00, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff,
  0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff,
  0x00, 0xff, 0x00, 0x00, 0xc1, 0x00, 0x00, 0xc1, 0x00, 0x00, 0xc1, 0x00,
  0x00, 0xc1, 0x00, 0x00, 0xc1, 0x00, 0x00, 0xc1, 0xff, 0x00, 0xff, 0xff,
  0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff,
  0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00,
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00,
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0x6d, 0xa0,
  0xab, 0x00, 0x00, 0xc1, 0x00, 0x00, 0xc1, 0x00, 0x00, 0xc1, 0x00, 0x00,
  0xc1, 0x00, 0x00, 0xc1, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00,
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00,
  0xff, 0xff, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff,
  0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff,
  0xff, 0x00, 0xff, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x4f, 0x7a, 0x92,
  0x4f, 0x7a, 0x92, 0x4f, 0x7a, 0x92, 0x4f, 0x7a, 0x92, 0x00, 0x00, 0xc1,
  0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff,
  0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff,
  0x00, 0x00, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff,
  0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0x6d, 0xa0, 0xab, 0x6d,
  0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x4f, 0x7a, 0x92, 0x6d, 0xa0, 0xab, 0x4f,
  0x7a, 0x92, 0x4f, 0x7a, 0x92, 0x4f, 0x7a, 0x92, 0xff, 0x00, 0xff, 0xff,
  0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff,
  0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00,
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00,
  0xff, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0,
  0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x4f, 0x7a, 0x92, 0x6d, 0xa0,
  0xab, 0x4f, 0x7a, 0x92, 0x6d, 0xa0, 0xab, 0xff, 0x00, 0xff, 0xff, 0x00,
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00,
  0xff, 0xff, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff,
  0xff, 0x00, 0xff, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab,
  0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab,
  0x6d, 0xa0, 0xab, 0x4f, 0x7a, 0x92, 0x6d, 0xa0, 0xab, 0x4f, 0x7a, 0x92,
  0x4f, 0x7a, 0x92, 0x6d, 0xa0, 0xab, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff,
  0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff,
  0x00, 0x00, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff,
  0x00, 0xff, 0xff, 0x00, 0xff, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d,
  0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d,
  0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x4f, 0x7a, 0x92, 0x6d,
  0xa0, 0xab, 0x6d, 0xa0, 0xab, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff,
  0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0x00, 0x00, 0xff, 0x00,
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00,
  0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00,
  0xff, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0,
  0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0, 0xab, 0x6d, 0xa0,
  0xab, 0x6d, 0xa0, 0xab, 0xff, 0x00, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00,
  0xff, 0xff, 0x00, 0xff, 0x00, 0x00
};
unsigned int loot_bmp_len = 2094;