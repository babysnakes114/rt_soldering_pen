#include "font.hpp"

namespace lib {

const unsigned char Font::sans5[] = {
    5, 1,
    '0', 4, 0x0e, 0x11, 0x11, 0x0e,
    '1', 4, 0x00, 0x12, 0x1f, 0x10,
    '2', 4, 0x19, 0x15, 0x15, 0x12,
    '3', 4, 0x11, 0x15, 0x15, 0x0a,
    '4', 4, 0x0c, 0x0a, 0x09, 0x1f,
    '5', 4, 0x17, 0x15, 0x15, 0x09,
    '6', 4, 0x0e, 0x15, 0x15, 0x08,
    '7', 4, 0x01, 0x01, 0x1d, 0x03,
    '8', 4, 0x0a, 0x15, 0x15, 0x0a,
    '9', 4, 0x02, 0x15, 0x15, 0x0e,
    'A', 4, 0x1e, 0x09, 0x09, 0x1e,
    'B', 4, 0x1f, 0x15, 0x15, 0x0a,
    'C', 4, 0x0e, 0x11, 0x11, 0x11,
    'D', 4, 0x1f, 0x11, 0x11, 0x0e,
    'E', 4, 0x1f, 0x15, 0x15, 0x11,
    'F', 4, 0x1f, 0x05, 0x05, 0x01,
    'G', 4, 0x0e, 0x11, 0x11, 0x1d,
    'H', 4, 0x1f, 0x04, 0x04, 0x1f,
    'I', 3, 0x11, 0x1f, 0x11,
    'J', 4, 0x08, 0x10, 0x10, 0x0f,
    'K', 4, 0x1f, 0x04, 0x0a, 0x11,
    'L', 4, 0x1f, 0x10, 0x10, 0x10,
    'M', 5, 0x1f, 0x02, 0x04, 0x02, 0x1f,
    'N', 4, 0x1f, 0x04, 0x08, 0x1f,
    'O', 4, 0x0e, 0x11, 0x11, 0x0e,
    'P', 4, 0x1f, 0x05, 0x05, 0x02,
    'Q', 4, 0x0e, 0x11, 0x19, 0x1e,
    'R', 4, 0x1f, 0x05, 0x0d, 0x12,
    'S', 4, 0x12, 0x15, 0x15, 0x09,
    'T', 5, 0x01, 0x01, 0x1f, 0x01, 0x01,
    'U', 4, 0x0f, 0x10, 0x10, 0x0f,
    'V', 5, 0x07, 0x08, 0x10, 0x08, 0x07,
    'W', 5, 0x0f, 0x10, 0x0c, 0x10, 0x0f,
    'X', 5, 0x11, 0x0a, 0x04, 0x0a, 0x11,
    'Y', 5, 0x01, 0x02, 0x1c, 0x02, 0x01,
    'Z', 4, 0x19, 0x15, 0x15, 0x13,
    ' ', 2, 0x00, 0x00,
    '-', 4, 0x04, 0x04, 0x04, 0x04,
    '+', 3, 0x04, 0x0e, 0x04,
    '.', 1, 0x10,
    ':', 1, 0x0a,
    ',', 1, 0x18,
    '=', 3, 0x0a, 0x0a, 0x0a,
    '_', 3, 0x10, 0x10, 0x10,
    '%', 5, 0x13, 0x0b, 0x04, 0x1a, 0x19,
    '\260', 3, 0x02, 0x05, 0x02,
    '\240', 4, 0x00, 0x00, 0x00, 0x00,  // used as space with width like numbers
    0,
};

const unsigned char Font::sans8[] = {
    8, 1,
    '0', 5, 0x3e, 0x41, 0x49, 0x41, 0x3e,
    '1', 5, 0x00, 0x42, 0x7f, 0x40, 0x00,
    '2', 5, 0x62, 0x51, 0x49, 0x49, 0x46,
    '3', 5, 0x41, 0x41, 0x49, 0x49, 0x36,
    '4', 5, 0x18, 0x14, 0x12, 0x7f, 0x10,
    '5', 5, 0x4f, 0x49, 0x49, 0x49, 0x31,
    '6', 5, 0x3e, 0x49, 0x49, 0x49, 0x30,
    '7', 5, 0x01, 0x01, 0x71, 0x09, 0x07,
    '8', 5, 0x36, 0x49, 0x49, 0x49, 0x36,
    '9', 5, 0x06, 0x49, 0x49, 0x49, 0x36,
    'a', 4, 0x38, 0x44, 0x44, 0x78,
    'b', 4, 0x7f, 0x44, 0x44, 0x38,
    'c', 4, 0x38, 0x44, 0x44, 0x44,
    'd', 4, 0x38, 0x44, 0x44, 0x7f,
    'e', 4, 0x38, 0x54, 0x54, 0x18,
    'f', 3, 0x04, 0x7e, 0x05,
    'g', 4, 0x18, 0xa4, 0xa4, 0x78,
    'h', 4, 0x7f, 0x04, 0x04, 0x78,
    'i', 1, 0x7d,
    'j', 2, 0x80, 0x7d,
    'k', 4, 0x7f, 0x10, 0x28, 0x44,
    'l', 2, 0x3f, 0x40,
    'm', 5, 0x7c, 0x04, 0x78, 0x04, 0x78,
    'n', 4, 0x7c, 0x04, 0x04, 0x78,
    'o', 4, 0x38, 0x44, 0x44, 0x38,
    'p', 4, 0xfc, 0x24, 0x24, 0x18,
    'q', 4, 0x18, 0x24, 0x24, 0xf8,
    'r', 3, 0x7c, 0x08, 0x04,
    's', 4, 0x48, 0x54, 0x54, 0x24,
    't', 3, 0x04, 0x3f, 0x44,
    'u', 4, 0x3c, 0x40, 0x40, 0x7c,
    'v', 5, 0x1c, 0x20, 0x40, 0x20, 0x1c,
    'w', 5, 0x3c, 0x40, 0x30, 0x40, 0x3c,
    'x', 5, 0x44, 0x28, 0x10, 0x28, 0x44,
    'y', 4, 0x1c, 0xa0, 0xa0, 0x7c,
    'z', 4, 0x64, 0x54, 0x54, 0x4c,
    'A', 5, 0x7e, 0x11, 0x11, 0x11, 0x7e,
    'B', 5, 0x7f, 0x49, 0x49, 0x49, 0x36,
    'C', 4, 0x3e, 0x41, 0x41, 0x41,
    'D', 5, 0x7f, 0x41, 0x41, 0x41, 0x3e,
    'E', 4, 0x7f, 0x49, 0x49, 0x41,
    'F', 4, 0x7f, 0x09, 0x09, 0x01,
    'G', 5, 0x3e, 0x41, 0x41, 0x41, 0x71,
    'H', 5, 0x7f, 0x08, 0x08, 0x08, 0x7f,
    'I', 3, 0x41, 0x7f, 0x41,
    'J', 4, 0x20, 0x40, 0x40, 0x3f,
    'K', 5, 0x7f, 0x08, 0x14, 0x22, 0x41,
    'L', 4, 0x7f, 0x40, 0x40, 0x40,
    'M', 5, 0x7f, 0x02, 0x04, 0x02, 0x7f,
    'N', 5, 0x7f, 0x04, 0x08, 0x10, 0x7f,
    'O', 5, 0x3e, 0x41, 0x41, 0x41, 0x3e,
    'P', 5, 0x7f, 0x09, 0x09, 0x09, 0x06,
    'Q', 5, 0x3e, 0x41, 0x51, 0x21, 0x5e,
    'R', 5, 0x7f, 0x09, 0x19, 0x29, 0x46,
    'S', 5, 0x46, 0x49, 0x49, 0x49, 0x31,
    'T', 5, 0x01, 0x01, 0x7f, 0x01, 0x01,
    'U', 5, 0x3f, 0x40, 0x40, 0x40, 0x3f,
    'V', 5, 0x1f, 0x20, 0x40, 0x20, 0x1f,
    'W', 5, 0x3f, 0x40, 0x30, 0x40, 0x3f,
    'X', 5, 0x63, 0x14, 0x08, 0x14, 0x63,
    'Y', 5, 0x03, 0x04, 0x78, 0x04, 0x03,
    'Z', 5, 0x61, 0x51, 0x49, 0x45, 0x43,
    ' ', 2, 0x00, 0x00,
    ':', 1, 0x24,
    '.', 1, 0x40,
    ',', 1, 0xc0,
    ';', 1, 0xc8,
    '-', 5, 0x08, 0x08, 0x08, 0x08, 0x08,
    '+', 5, 0x08, 0x08, 0x3e, 0x08, 0x08,
    '*', 5, 0x14, 0x08, 0x3e, 0x08, 0x14,
    '/', 5, 0x20, 0x10, 0x08, 0x04, 0x02,
    '\\', 5, 0x02, 0x04, 0x08, 0x10, 0x20,
    '\'', 1, 0x03,
    '"', 3, 0x03, 0x00, 0x03,
    '(', 2, 0x3e, 0x41,
    ')', 2, 0x41, 0x3e,
    '[', 2, 0x7f, 0x41,
    ']', 2, 0x41, 0x7f,
    '{', 3, 0x08, 0x36, 0x41,
    '}', 3, 0x41, 0x36, 0x08,
    '<', 4, 0x08, 0x14, 0x22, 0x41,
    '>', 4, 0x41, 0x22, 0x14, 0x08,
    '|', 1, 0xff,
    '!', 1, 0x5f,
    '?', 4, 0x01, 0x51, 0x09, 0x06,
    '`', 2, 0x01, 0x02,
    '@', 5, 0x3e, 0x41, 0x49, 0x55, 0x1e,
    '#', 5, 0x14, 0x3e, 0x14, 0x3e, 0x14,
    '$', 5, 0x04, 0x2a, 0x7f, 0x2a, 0x10,
    '%', 5, 0x26, 0x16, 0x08, 0x34, 0x32,
    '^', 5, 0x04, 0x02, 0x01, 0x02, 0x04,
    '&', 5, 0x36, 0x49, 0x55, 0x22, 0x50,
    '_', 5, 0x40, 0x40, 0x40, 0x40, 0x40,
    '=', 4, 0x14, 0x14, 0x14, 0x14,
    '~', 5, 0x08, 0x04, 0x08, 0x10, 0x08,
    '\260', 4, 0x06, 0x09, 0x09, 0x06,
    '\240', 5, 0x00, 0x00, 0x00, 0x00, 0x00,  // used as space with same width like numbers
    0,
};

const unsigned char Font::num7[] = {
    7, 1,
    '0', 4, 0x3e, 0x41, 0x41, 0x3e,
    '1', 4, 0x00, 0x00, 0x00, 0x7f,
    '2', 4, 0x70, 0x49, 0x49, 0x06,
    '3', 4, 0x41, 0x49, 0x49, 0x36,
    '4', 4, 0x0f, 0x08, 0x08, 0x7f,
    '5', 4, 0x4f, 0x49, 0x49, 0x31,
    '6', 4, 0x3e, 0x49, 0x49, 0x30,
    '7', 4, 0x01, 0x01, 0x01, 0x7f,
    '8', 4, 0x36, 0x49, 0x49, 0x36,
    '9', 4, 0x06, 0x49, 0x49, 0x3e,
    'A', 4, 0x3e, 0x09, 0x09, 0x3e,
    'B', 4, 0x7f, 0x49, 0x49, 0x36,
    'C', 4, 0x3e, 0x41, 0x41, 0x00,
    'D', 4, 0x7f, 0x41, 0x41, 0x3e,
    'E', 4, 0x7f, 0x49, 0x49, 0x41,
    'F', 4, 0x7f, 0x09, 0x09, 0x01,
    ' ', 4, 0x00, 0x00, 0x00, 0x00,
    '-', 4, 0x00, 0x08, 0x08, 0x00,
    '_', 4, 0x40, 0x40, 0x40, 0x40,
    '\260', 4, 0x06, 0x09, 0x09, 0x06,
    '\240', 4, 0x00, 0x00, 0x00, 0x00,
    '.', 1, 0x40,
    ':', 1, 0x22,
    0,
};

const unsigned short Font::num9[] = {
    9, 2,
    '0', 5, 0x0fe, 0x101, 0x101, 0x101, 0x0fe,
    '1', 5, 0x000, 0x000, 0x000, 0x000, 0x1ff,
    '2', 5, 0x1e1, 0x111, 0x111, 0x111, 0x10e,
    '3', 5, 0x101, 0x111, 0x111, 0x111, 0x0ee,
    '4', 5, 0x014, 0x020, 0x020, 0x020, 0x1ff,
    '5', 5, 0x01f, 0x111, 0x111, 0x111, 0x0e1,
    '6', 5, 0x0fe, 0x111, 0x111, 0x111, 0x3c0,
    '7', 5, 0x001, 0x001, 0x001, 0x001, 0x1ff,
    '8', 5, 0x0ee, 0x111, 0x111, 0x111, 0x0ee,
    '9', 5, 0x00e, 0x111, 0x111, 0x111, 0x0fe,
    'A', 5, 0x1fe, 0x011, 0x011, 0x011, 0x1fe,
    'B', 5, 0x1ff, 0x111, 0x111, 0x111, 0x0ee,
    'C', 5, 0x0fe, 0x101, 0x101, 0x101, 0x101,
    'D', 5, 0x1ff, 0x101, 0x101, 0x101, 0x0fe,
    'E', 5, 0x1ff, 0x111, 0x111, 0x111, 0x101,
    'F', 5, 0x1ff, 0x011, 0x011, 0x011, 0x001,
    ' ', 5, 0x000, 0x000, 0x000, 0x000, 0x000,
    '-', 5, 0x000, 0x010, 0x010, 0x010, 0x000,
    '_', 5, 0x100, 0x100, 0x100, 0x100, 0x100,
    '\260', 5, 0x00e, 0x011, 0x011, 0x011, 0x00e,
    '\240', 5, 0x000, 0x000, 0x000, 0x000, 0x000,
    '.', 1, 0x100,
    ':', 1, 0x048,
    0,
};

const unsigned short Font::num11[] = {
    11, 2,
    '0', 6, 0x3fe, 0x401, 0x401, 0x401, 0x401, 0x3fe,
    '1', 6, 0x000, 0x000, 0x000, 0x000, 0x000, 0x7ff,
    '2', 6, 0x7c1, 0x421, 0x421, 0x421, 0x421, 0x41e,
    '3', 6, 0x401, 0x421, 0x421, 0x421, 0x421, 0x3de,
    '4', 6, 0x03f, 0x020, 0x020, 0x020, 0x020, 0x7ff,
    '5', 6, 0x03f, 0x421, 0x421, 0x421, 0x421, 0x3c1,
    '6', 6, 0x3fe, 0x421, 0x421, 0x421, 0x421, 0x3c0,
    '7', 6, 0x001, 0x001, 0x001, 0x001, 0x001, 0x3df,
    '8', 6, 0x3de, 0x421, 0x421, 0x421, 0x421, 0x3de,
    '9', 6, 0x01e, 0x421, 0x421, 0x421, 0x421, 0x3fe,
    'A', 6, 0x7fe, 0x021, 0x021, 0x021, 0x021, 0x7fe,
    'B', 6, 0x7ff, 0x421, 0x421, 0x421, 0x421, 0x3de,
    'C', 6, 0x3fe, 0x401, 0x401, 0x401, 0x401, 0x401,
    'D', 6, 0x7ff, 0x401, 0x401, 0x401, 0x401, 0x3fe,
    'E', 6, 0x7ff, 0x421, 0x421, 0x421, 0x421, 0x401,
    'F', 6, 0x7ff, 0x021, 0x021, 0x021, 0x021, 0x001,
    ' ', 6, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000,
    '-', 6, 0x000, 0x020, 0x020, 0x020, 0x020, 0x000,
    '_', 6, 0x400, 0x400, 0x400, 0x400, 0x400, 0x400,
    '\260', 6, 0x01e, 0x021, 0x021, 0x021, 0x021, 0x01e,
    '\240', 6, 0x000, 0x000, 0x000, 0x000, 0x000, 0x000,
    '\273', 6, 0x000, 0x154, 0x0a8, 0x050, 0x020, 0x000,
    '\274', 6, 0x000, 0x104, 0x088, 0x050, 0x020, 0x000,
    '\275', 6, 0x000, 0x1fc, 0x0f8, 0x070, 0x020, 0x000,
    '.', 1, 0x400,
    ':', 1, 0x048,
    0,
};

const unsigned short Font::num13[] = {
    13, 2,
    '0', 7, 0x0ffe, 0x1001, 0x1001, 0x1001, 0x1001, 0x1001, 0x0ffe,
    '1', 7, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1fff,
    '2', 7, 0x1f81, 0x1041, 0x1041, 0x1041, 0x1041, 0x1041, 0x103e,
    '3', 7, 0x1001, 0x1041, 0x1041, 0x1041, 0x1041, 0x1041, 0x0fbe,
    '4', 7, 0x007f, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x1fff,
    '5', 7, 0x107f, 0x1041, 0x1041, 0x1041, 0x1041, 0x1041, 0x0f81,
    '6', 7, 0x0ffe, 0x1041, 0x1041, 0x1041, 0x1041, 0x1041, 0x0f80,
    '7', 7, 0x0001, 0x0001, 0x0001, 0x0001, 0x0001, 0x0001, 0x1fff,
    '8', 7, 0x0fbe, 0x1041, 0x1041, 0x1041, 0x1041, 0x1041, 0x0fbe,
    '9', 7, 0x003e, 0x1041, 0x1041, 0x1041, 0x1041, 0x1041, 0x0ffe,
    'A', 7, 0x1ffe, 0x0041, 0x0041, 0x0041, 0x0041, 0x0041, 0x1ffe,
    'B', 7, 0x1fff, 0x1041, 0x1041, 0x1041, 0x1041, 0x1041, 0x0fbe,
    'C', 7, 0x0ffe, 0x1001, 0x1001, 0x1001, 0x1001, 0x1001, 0x1001,
    'D', 7, 0x1fff, 0x1001, 0x1001, 0x1001, 0x1001, 0x1001, 0x0ffe,
    'E', 7, 0x1fff, 0x1041, 0x1041, 0x1041, 0x1041, 0x1041, 0x1001,
    'F', 7, 0x1fff, 0x0041, 0x0041, 0x0041, 0x0041, 0x0041, 0x0001,
    ' ', 7, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    '-', 7, 0x0000, 0x0040, 0x0040, 0x0040, 0x0040, 0x0040, 0x0000,
    '_', 7, 0x0800, 0x0800, 0x0800, 0x0800, 0x0800, 0x0800, 0x0800,
    '\260', 7, 0x003e, 0x0041, 0x0041, 0x0041, 0x0041, 0x0041, 0x003e,
    '\240', 7, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    '\273', 4, 0x02a8, 0x0150, 0x00a0, 0x0040,
    '\274', 4, 0x0208, 0x0110, 0x00a0, 0x0040,
    '\275', 4, 0x03f8, 0x01f0, 0x00e0, 0x0040,
    '.', 1, 0x0800,
    ':', 1, 0x0110,
    0,
};

const unsigned int Font::num22[] = {
    22, 3,
    '0', 11, 0x1ffffe, 0x3fffff, 0x300003, 0x300003, 0x300003, 0x300003, 0x300003, 0x300003, 0x300003, 0x3fffff, 0x1ffffe,
    '1', 11, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x3fffff, 0x3fffff,
    '2', 11, 0x3ff802, 0x3ffc03, 0x300c03, 0x300c03, 0x300c03, 0x300c03, 0x300c03, 0x300c03, 0x300c03, 0x300fff, 0x3007fe,
    '3', 11, 0x100002, 0x300c03, 0x300c03, 0x300c03, 0x300c03, 0x300c03, 0x300c03, 0x300c03, 0x300c03, 0x3fffff, 0x1ff3fe,
    '4', 11, 0x000fff, 0x000fff, 0x000c00, 0x000c00, 0x000c00, 0x000c00, 0x000c00, 0x000c00, 0x000c00, 0x3fffff, 0x3fffff,
    '5', 11, 0x100fff, 0x300fff, 0x300c03, 0x300c03, 0x300c03, 0x300c03, 0x300c03, 0x300c03, 0x300c03, 0x3ffc03, 0x1ff803,
    '6', 11, 0x1ffffe, 0x3fffff, 0x300c03, 0x300c03, 0x300c03, 0x300c03, 0x300c03, 0x300c03, 0x300c03, 0x3ffc03, 0x1ff802,
    '7', 11, 0x000003, 0x000003, 0x000003, 0x000003, 0x000003, 0x000003, 0x000003, 0x000003, 0x000003, 0x3fffff, 0x3fffff,
    '8', 11, 0x1ff3fe, 0x3fffff, 0x300c03, 0x300c03, 0x300c03, 0x300c03, 0x300c03, 0x300c03, 0x300c03, 0x3fffff, 0x1ff3fe,
    '9', 11, 0x1007fe, 0x300fff, 0x300c03, 0x300c03, 0x300c03, 0x300c03, 0x300c03, 0x300c03, 0x300c03, 0x3fffff, 0x1ffffe,
    'A', 11, 0x3ff3fe, 0x3fffff, 0x000c03, 0x000c03, 0x000c03, 0x000c03, 0x000c03, 0x000c03, 0x000c03, 0x3fffff, 0x3ff3fe,
    'B', 11, 0x3fffff, 0x3fffff, 0x300c03, 0x300c03, 0x300c03, 0x300c03, 0x300c03, 0x300c03, 0x300c03, 0x3fffff, 0x1ff3fe,
    'C', 11, 0x1ffffe, 0x3fffff, 0x300003, 0x300003, 0x300003, 0x300003, 0x300003, 0x300003, 0x300003, 0x300003, 0x100002,
    'D', 11, 0x3fffff, 0x3fffff, 0x300003, 0x300003, 0x300003, 0x300003, 0x300003, 0x300003, 0x300003, 0x3fffff, 0x1ffffe,
    'E', 11, 0x3fffff, 0x3fffff, 0x300c03, 0x300c03, 0x300c03, 0x300c03, 0x300c03, 0x300c03, 0x300c03, 0x300003, 0x300003,
    'F', 11, 0x3fffff, 0x3fffff, 0x000c03, 0x000c03, 0x000c03, 0x000c03, 0x000c03, 0x000c03, 0x000c03, 0x000003, 0x000003,
    ' ', 11, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000,
    '-', 11, 0x000000, 0x000c00, 0x000c00, 0x000c00, 0x000c00, 0x000c00, 0x000c00, 0x000c00, 0x000c00, 0x000c00, 0x000000,
    '_', 11, 0x300000, 0x300000, 0x300000, 0x300000, 0x300000, 0x300000, 0x300000, 0x300000, 0x300000, 0x300000, 0x300000,
    '\240', 11, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000,
    '.', 2, 0x300000, 0x300000,
    ':', 2, 0x018300, 0x018300,
    0,
};

// const unsigned char Font::num22_index[] = {
//     '0', 11,
//     '1', 11,
//     '2', 11,
//     '3', 11,
//     '4', 11,
//     '5', 11,
//     '6', 11,
//     '7', 11,
//     '8', 11,
//     '9', 11,
//     'A', 11,
//     'B', 11,
//     'C', 11,
//     'D', 11,
//     'E', 11,
//     'F', 11,
//     ' ', 11,
//     '-', 11,
//     '_', 11,
//     '\240', 11,
//     '.', 2,
//     ':', 2,
//     0,
// };

// const unsigned int Font::num22_data[] = {
//     0x1ffffe, 0x3fffff, 0x300003, 0x300003, 0x300003, 0x300003, 0x300003, 0x300003, 0x300003, 0x3fffff, 0x1ffffe,
//     0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x3fffff, 0x3fffff,
//     0x3ff802, 0x3ffc03, 0x300c03, 0x300c03, 0x300c03, 0x300c03, 0x300c03, 0x300c03, 0x300c03, 0x300fff, 0x3007fe,
//     0x100002, 0x300c03, 0x300c03, 0x300c03, 0x300c03, 0x300c03, 0x300c03, 0x300c03, 0x300c03, 0x3fffff, 0x1ff3fe,
//     0x000fff, 0x000fff, 0x000c00, 0x000c00, 0x000c00, 0x000c00, 0x000c00, 0x000c00, 0x000c00, 0x3fffff, 0x3fffff,
//     0x100fff, 0x300fff, 0x300c03, 0x300c03, 0x300c03, 0x300c03, 0x300c03, 0x300c03, 0x300c03, 0x3ffc03, 0x1ff803,
//     0x1ffffe, 0x3fffff, 0x300c03, 0x300c03, 0x300c03, 0x300c03, 0x300c03, 0x300c03, 0x300c03, 0x3ffc03, 0x1ff802,
//     0x000003, 0x000003, 0x000003, 0x000003, 0x000003, 0x000003, 0x000003, 0x000003, 0x000003, 0x3fffff, 0x3fffff,
//     0x1ff3fe, 0x3fffff, 0x300c03, 0x300c03, 0x300c03, 0x300c03, 0x300c03, 0x300c03, 0x300c03, 0x3fffff, 0x1ff3fe,
//     0x1007fe, 0x300fff, 0x300c03, 0x300c03, 0x300c03, 0x300c03, 0x300c03, 0x300c03, 0x300c03, 0x3fffff, 0x1ffffe,
//     0x3ff3fe, 0x3fffff, 0x000c03, 0x000c03, 0x000c03, 0x000c03, 0x000c03, 0x000c03, 0x000c03, 0x3fffff, 0x3ff3fe,
//     0x3fffff, 0x3fffff, 0x300c03, 0x300c03, 0x300c03, 0x300c03, 0x300c03, 0x300c03, 0x300c03, 0x3fffff, 0x1ff3fe,
//     0x1ffffe, 0x3fffff, 0x300003, 0x300003, 0x300003, 0x300003, 0x300003, 0x300003, 0x300003, 0x300003, 0x100002,
//     0x3fffff, 0x3fffff, 0x300003, 0x300003, 0x300003, 0x300003, 0x300003, 0x300003, 0x300003, 0x3fffff, 0x1ffffe,
//     0x3fffff, 0x3fffff, 0x300c03, 0x300c03, 0x300c03, 0x300c03, 0x300c03, 0x300c03, 0x300c03, 0x300003, 0x300003,
//     0x3fffff, 0x3fffff, 0x000c03, 0x000c03, 0x000c03, 0x000c03, 0x000c03, 0x000c03, 0x000c03, 0x000003, 0x000003,
//     0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000,
//     0x000000, 0x000c00, 0x000c00, 0x000c00, 0x000c00, 0x000c00, 0x000c00, 0x000c00, 0x000c00, 0x000c00, 0x000000,
//     0x300000, 0x300000, 0x300000, 0x300000, 0x300000, 0x300000, 0x300000, 0x300000, 0x300000, 0x300000, 0x300000,
//     0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000,
//     0x300000, 0x300000,
//     0x018300, 0x018300,
// };

}
