#include <avr/pgmspace.h>

const byte landscape_numbers[100][5] PROGMEM = {
  {0xe0,0xa0,0xa0,0xa0,0xe0},     // 0
  {0x40,0x40,0x40,0x40,0x40},     // 1
  {0xe0,0x80,0xe0,0x20,0xe0},     // 2
  {0xe0,0x80,0xe0,0x80,0xe0},     // 3
  {0xa0,0xa0,0xe0,0x80,0x80},     // 4
  {0xe0,0x20,0xe0,0x80,0xe0},     // 5
  {0xe0,0x20,0xe0,0xa0,0xe0},     // 6
  {0xe0,0x80,0x80,0x80,0x80},     // 7
  {0xe0,0xa0,0xe0,0xa0,0xe0},     // 8
  {0xe0,0xa0,0xe0,0x80,0x80},     // 9
  {0xe4,0xa4,0xa4,0xa4,0xe4},     // 10
  {0x44,0x44,0x44,0x44,0x44},     // 11
  {0xe4,0x84,0xe4,0x24,0xe4},     // 12
  {0xe4,0x84,0xe4,0x84,0xe4},     // 13
  {0xa4,0xa4,0xe4,0x84,0x84},     // 14
  {0xe4,0x24,0xe4,0x84,0xe4},     // 15
  {0xe4,0x24,0xe4,0xa4,0xe4},     // 16
  {0xe4,0x84,0x84,0x84,0x84},     // 17
  {0xe4,0xa4,0xe4,0xa4,0xe4},     // 18
  {0xe4,0xa4,0xe4,0x84,0x84},     // 19
  {0xee,0xa8,0xae,0xa2,0xee},     // 20
  {0x4e,0x48,0x4e,0x42,0x4e},     // 21
  {0xee,0x88,0xee,0x22,0xee},     // 22
  {0xee,0x88,0xee,0x82,0xee},     // 23
  {0xae,0xa8,0xee,0x82,0x8e},     // 24
  {0xee,0x28,0xee,0x82,0xee},     // 25
  {0xee,0x28,0xee,0xa2,0xee},     // 26
  {0xee,0x88,0x8e,0x82,0x8e},     // 27
  {0xee,0xa8,0xee,0xa2,0xee},     // 28
  {0xee,0xa8,0xee,0x82,0x8e},     // 29
  {0xee,0xa8,0xae,0xa8,0xee},     // 30
  {0x4e,0x48,0x4e,0x48,0x4e},     // 31
  {0xee,0x88,0xee,0x28,0xee},     // 32
  {0xee,0x88,0xee,0x88,0xee},     // 33
  {0xae,0xa8,0xee,0x88,0x8e},     // 34
  {0xee,0x28,0xee,0x88,0xee},     // 35
  {0xee,0x28,0xee,0xa8,0xee},     // 36
  {0xee,0x88,0x8e,0x88,0x8e},     // 37
  {0xee,0xa8,0xee,0xa8,0xee},     // 38
  {0xee,0xa8,0xee,0x88,0x8e},     // 39
  {0xea,0xaa,0xae,0xa8,0xe8},     // 40
  {0x4a,0x4a,0x4e,0x48,0x48},     // 41
  {0xea,0x8a,0xee,0x28,0xe8},     // 42
  {0xea,0x8a,0xee,0x88,0xe8},     // 43
  {0xaa,0xaa,0xee,0x88,0x88},     // 44
  {0xea,0x2a,0xee,0x88,0xe8},     // 45
  {0xea,0x2a,0xee,0xa8,0xe8},     // 46
  {0xea,0x8a,0x8e,0x88,0x88},     // 47
  {0xea,0xaa,0xee,0xa8,0xe8},     // 48
  {0xea,0xaa,0xee,0x88,0x88},     // 49
  {0xee,0xa2,0xae,0xa8,0xee},     // 50
  {0x4e,0x42,0x4e,0x48,0x4e},     // 51
  {0xee,0x82,0xee,0x28,0xee},     // 52
  {0xee,0x82,0xee,0x88,0xee},     // 53
  {0xae,0xa2,0xee,0x88,0x8e},     // 54
  {0xee,0x22,0xee,0x88,0xee},     // 55
  {0xee,0x22,0xee,0xa8,0xee},     // 56
  {0xee,0x82,0x8e,0x88,0x8e},     // 57
  {0xee,0xa2,0xee,0xa8,0xee},     // 58
  {0xee,0xa2,0xee,0x88,0x8e},     // 59
  {0xee,0xa2,0xae,0xaa,0xee},     // 60
  {0x4e,0x42,0x4e,0x4a,0x4e},     // 61
  {0xee,0x82,0xee,0x2a,0xee},     // 62
  {0xee,0x82,0xee,0x8a,0xee},     // 63
  {0xae,0xa2,0xee,0x8a,0x8e},     // 64
  {0xee,0x22,0xee,0x8a,0xee},     // 65
  {0xee,0x22,0xee,0xaa,0xee},     // 66
  {0xee,0x82,0x8e,0x8a,0x8e},     // 67
  {0xee,0xa2,0xee,0xaa,0xee},     // 68
  {0xee,0xa2,0xee,0x8a,0x8e},     // 69
  {0xee,0xa8,0xa8,0xa8,0xe8},     // 70
  {0x4e,0x48,0x48,0x48,0x48},     // 71
  {0xee,0x88,0xe8,0x28,0xe8},     // 72
  {0xee,0x88,0xe8,0x88,0xe8},     // 73
  {0xae,0xa8,0xe8,0x88,0x88},     // 74
  {0xee,0x28,0xe8,0x88,0xe8},     // 75
  {0xee,0x28,0xe8,0xa8,0xe8},     // 76
  {0xee,0x88,0x88,0x88,0x88},     // 77
  {0xee,0xa8,0xe8,0xa8,0xe8},     // 78
  {0xee,0xa8,0xe8,0x88,0x88},     // 79
  {0xee,0xaa,0xae,0xaa,0xee},     // 80
  {0x4e,0x4a,0x4e,0x4a,0x4e},     // 81
  {0xee,0x8a,0xee,0x2a,0xee},     // 82
  {0xee,0x8a,0xee,0x8a,0xee},     // 83
  {0xae,0xaa,0xee,0x8a,0x8e},     // 84
  {0xee,0x2a,0xee,0x8a,0xee},     // 85
  {0xee,0x2a,0xee,0xaa,0xee},     // 86
  {0xee,0x8a,0x8e,0x8a,0x8e},     // 87
  {0xee,0xaa,0xee,0xaa,0xee},     // 88
  {0xee,0xaa,0xee,0x8a,0x8e},     // 89
  {0xee,0xaa,0xae,0xa8,0xe8},     // 90
  {0x4e,0x4a,0x4e,0x48,0x48},     // 91
  {0xee,0x8a,0xee,0x28,0xe8},     // 92
  {0xee,0x8a,0xee,0x88,0xe8},     // 93
  {0xae,0xaa,0xee,0x88,0x88},     // 94
  {0xee,0x2a,0xee,0x88,0xe8},     // 95
  {0xee,0x2a,0xee,0xa8,0xe8},     // 96
  {0xee,0x8a,0x8e,0x88,0x88},     // 97
  {0xee,0xaa,0xee,0xa8,0xe8},     // 98
  {0xee,0xaa,0xee,0x88,0x88}      // 99
};
