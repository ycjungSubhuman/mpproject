int player_width = 16;
int player_height = 16;
unsigned int _player[16][16] = {{0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d}, {0x5a804d, 0xff20590f, 0xff20590f, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d}, {0x5a804d, 0xff20590f, 0xff44633a, 0xff20590f, 0xff20590f, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d}, {0x5a804d, 0xff20590f, 0xff44633a, 0x5a804d, 0xff44633a, 0xff20590f, 0xff20590f, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d}, {0x5a804d, 0xff20590f, 0xff44633a, 0x5a804d, 0x5a804d, 0x5a804d, 0xff44633a, 0xff20590f, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d}, {0x5a804d, 0xff20590f, 0xff44633a, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0xff20590f, 0xff20590f, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d}, {0x5a804d, 0xff20590f, 0xff44633a, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0xff44633a, 0xff20590f, 0xff20590f, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d}, {0x5a804d, 0xff20590f, 0xff44633a, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0xff44633a, 0xff20590f, 0xff20590f, 0x5a804d, 0x5a804d}, {0x5a804d, 0xff20590f, 0xff44633a, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0xff20590f, 0xff44633a, 0xff44633a, 0x5a804d}, {0x5a804d, 0xff20590f, 0xff44633a, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0xff20590f, 0xff20590f, 0x5a804d, 0xff44633a, 0x5a804d, 0x5a804d}, {0x5a804d, 0xff20590f, 0xff44633a, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0xff20590f, 0xff20590f, 0x5a804d, 0xff44633a, 0xff44633a, 0x5a804d, 0x5a804d, 0x5a804d}, {0x5a804d, 0xff20590f, 0xff44633a, 0x5a804d, 0x5a804d, 0x5a804d, 0xff20590f, 0xff20590f, 0x5a804d, 0xff44633a, 0xff44633a, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d}, {0x5a804d, 0xff20590f, 0xff44633a, 0x5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff44633a, 0xff44633a, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d}, {0x5a804d, 0xff20590f, 0xff44633a, 0xff20590f, 0xff20590f, 0xff44633a, 0xff44633a, 0xff44633a, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d}, {0x5a804d, 0xff20590f, 0xff20590f, 0x5a804d, 0xff44633a, 0xff44633a, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d}, {0x5a804d, 0x5a804d, 0xff44633a, 0xff44633a, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d}};
unsigned int* player = &_player;