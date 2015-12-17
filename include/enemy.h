#ifndef __ENEMY_H
#define __ENEMY_H
int enemy_width = 64;
int enemy_height = 64;
unsigned int enemy[64][64] = {{0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa}, {0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa}, {0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xcacaca, 0xcacaca, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa}, {0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xcacaca, 0xcacaca, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa}, {0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xcacaca, 0xcacaca, 0xcacaca, 0xcacaca, 0xcacaca, 0xcacaca, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa}, {0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xcacaca, 0xcacaca, 0xcacaca, 0xcacaca, 0xcacaca, 0xcacaca, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa}, {0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xcacaca, 0xcacaca, 0xcacaca, 0xcacaca, 0xcacaca, 0xcacaca, 0xcacaca, 0xcacaca, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa}, {0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xcacaca, 0xcacaca, 0xcacaca, 0xcacaca, 0xcacaca, 0xcacaca, 0xcacaca, 0xcacaca, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa}, {0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xcacaca, 0xcacaca, 0xcacaca, 0xcacaca, 0xcacaca, 0xcacaca, 0x0, 0x0, 0xcacaca, 0xcacaca, 0xcacaca, 0xcacaca, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0x0, 0x0, 0x0, 0x0, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa}, {0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xcacaca, 0xcacaca, 0xcacaca, 0xcacaca, 0xcacaca, 0xcacaca, 0x0, 0x0, 0xcacaca, 0xcacaca, 0xcacaca, 0xcacaca, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0x0, 0x0, 0x0, 0x0, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa}, {0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xcacaca, 0xcacaca, 0xcacaca, 0xcacaca, 0x0, 0x0, 0xcacaca, 0xcacaca, 0x0, 0x0, 0xcacaca, 0xcacaca, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0x0, 0x0, 0x0, 0x0, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa}, {0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xcacaca, 0xcacaca, 0xcacaca, 0xcacaca, 0x0, 0x0, 0xcacaca, 0xcacaca, 0x0, 0x0, 0xcacaca, 0xcacaca, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff0000, 0xff0000, 0xff0000, 0xff0000, 0x0, 0x0, 0x0, 0x0, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa}, {0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xcacaca, 0xcacaca, 0xcacaca, 0xcacaca, 0x0, 0x0, 0xcacaca, 0xcacaca, 0xcacaca, 0xcacaca, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa}, {0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xcacaca, 0xcacaca, 0xcacaca, 0xcacaca, 0x0, 0x0, 0xcacaca, 0xcacaca, 0xcacaca, 0xcacaca, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xff00aa, 0xff00a9, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa}, {0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xcacaca, 0xcacaca, 0x0, 0x0, 0xcacaca, 0xcacaca, 0xcacaca, 0xcacaca, 0x0, 0x0, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa}, {0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xcacaca, 0xcacaca, 0x0, 0x0, 0xcacaca, 0xcacaca, 0xcacaca, 0xcacaca, 0x0, 0x0, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00a9, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa}, {0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xcacaca, 0xcacaca, 0xcacaca, 0xcacaca, 0xcacaca, 0xcacaca, 0x0, 0x0, 0xcacaca, 0xcacaca, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0x0, 0x0, 0x0, 0x0, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa}, {0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xcacaca, 0xcacaca, 0xcacaca, 0xcacaca, 0xcacaca, 0xcacaca, 0x0, 0x0, 0xcacaca, 0xcacaca, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0x0, 0x0, 0x0, 0x0, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa}, {0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xcacaca, 0xcacaca, 0x0, 0x0, 0xcacaca, 0xcacaca, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa}, {0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xcacaca, 0xcacaca, 0x0, 0x0, 0xcacaca, 0xcacaca, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa}, {0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xcacaca, 0xcacaca, 0xcacaca, 0xcacaca, 0x0, 0x0, 0x0, 0x0, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0x0, 0x0, 0x0, 0x0, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa}, {0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xcacaca, 0xcacaca, 0xcacaca, 0xcacaca, 0x0, 0x0, 0x0, 0x0, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0x0, 0x0, 0x0, 0x0, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa}, {0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa}, {0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa}, {0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0x0, 0x0, 0x0, 0x0, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa}, {0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00a9, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0x0, 0x0, 0x0, 0x0, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa}, {0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0x0, 0x0, 0x0, 0x0, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa}, {0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0x0, 0x0, 0x0, 0x0, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa}, {0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0x0, 0x0, 0x0, 0x0, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa}, {0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0x0, 0x0, 0x0, 0x0, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa}, {0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0x0, 0x0, 0x0, 0x0, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa}, {0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0x0, 0x0, 0x0, 0x0, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa}, {0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0x0, 0x0, 0x0, 0x0, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa}, {0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0x0, 0x0, 0x0, 0x0, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa}, {0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0x0, 0x0, 0x0, 0x0, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa}, {0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0x0, 0x0, 0x0, 0x0, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa}, {0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0x0, 0x0, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0x0, 0x0, 0x0, 0x0, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0x0, 0x0, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa}, {0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0x0, 0x0, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0x0, 0x0, 0x0, 0x0, 0xff00aa, 0xff00a9, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0x0, 0x0, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa}, {0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0x0, 0x0, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0x0, 0x0, 0x0, 0x0, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0x0, 0x0, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa}, {0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0x0, 0x0, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0x0, 0x0, 0x0, 0x0, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0x0, 0x0, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa}, {0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa}, {0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa}, {0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa}, {0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa}, {0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa}, {0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa}, {0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa}, {0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa}, {0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa}, {0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa}, {0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa}, {0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa}, {0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa}, {0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa}, {0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00a9, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa}, {0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa}, {0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa}, {0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa}, {0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0x484848, 0x484848, 0x484848, 0x484848, 0x484848, 0x484848, 0x484848, 0x484848, 0x484848, 0x484848, 0x484848, 0x484848, 0x484848, 0x484848, 0x484848, 0x484848, 0x484848, 0x484848, 0x484848, 0x484848, 0x484848, 0x484848, 0x484848, 0x484848, 0x484848, 0x484848, 0x484848, 0x484848, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa}, {0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0x484848, 0x484848, 0x484848, 0x484848, 0x484848, 0x484848, 0x484848, 0x484848, 0x484848, 0x484848, 0x484848, 0x484848, 0x484848, 0x484848, 0x484848, 0x484848, 0x484848, 0x484848, 0x484848, 0x484848, 0x484848, 0x484848, 0x484848, 0x484848, 0x484848, 0x484848, 0x484848, 0x484848, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa}, {0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa}, {0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa}, {0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa}, {0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa, 0xff00aa}};
#endif