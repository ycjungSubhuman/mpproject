int direct_width = 48;
int direct_height = 16;
unsigned int direct[16][48] = {{0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d}, {0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d}, {0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d}, {0x5a804d, 0x5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d}, {0x5a804d, 0x5a804d, 0x5a804d, 0xff44633a, 0xff44633a, 0xff20590f, 0xff20590f, 0xff20590f, 0xff44633a, 0xff44633a, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d}, {0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff44633a, 0xff44633a, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0xff20590f, 0x5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0x5a804d, 0xff20590f, 0xff20590f, 0x5a804d, 0x5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0x5a804d, 0x5a804d, 0xff20590f, 0xff20590f, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0xff20590f, 0xff20590f, 0x5a804d, 0x5a804d, 0x5a804d}, {0x5a804d, 0x5a804d, 0x5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0x5a804d, 0x5a804d, 0x5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0x5a804d, 0xff20590f, 0xff44633a, 0xff20590f, 0xff20590f, 0xff20590f, 0xff44633a, 0xff20590f, 0xff20590f, 0xff44633a, 0x5a804d, 0x5a804d, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff20590f, 0xff20590f, 0x5a804d, 0xff20590f, 0xff20590f, 0xff44633a, 0x5a804d, 0x5a804d, 0x5a804d, 0xff20590f, 0xff20590f, 0xff44633a, 0x5a804d, 0x5a804d}, {0x5a804d, 0x5a804d, 0x5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0x5a804d, 0x5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff44633a, 0xff20590f, 0xff44633a, 0xff20590f, 0xff20590f, 0xff20590f, 0xff44633a, 0xff20590f, 0xff20590f, 0xff44633a, 0x5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff44633a, 0xff20590f, 0xff20590f, 0xff44633a, 0x5a804d, 0x5a804d, 0x5a804d, 0xff20590f, 0xff20590f, 0xff44633a, 0x5a804d, 0x5a804d}, {0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0xff44633a, 0xff44633a, 0xff44633a, 0xff20590f, 0xff20590f, 0xff44633a, 0x5a804d, 0x5a804d, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff20590f, 0xff44633a, 0xff20590f, 0xff20590f, 0xff20590f, 0xff44633a, 0xff20590f, 0xff20590f, 0xff44633a, 0x5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff44633a, 0xff20590f, 0xff20590f, 0xff44633a, 0x5a804d, 0x5a804d, 0x5a804d, 0xff20590f, 0xff20590f, 0xff44633a, 0x5a804d, 0x5a804d}, {0x5a804d, 0xff20590f, 0xff20590f, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0xff20590f, 0xff20590f, 0xff44633a, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0xff20590f, 0xff44633a, 0xff20590f, 0xff20590f, 0xff20590f, 0xff44633a, 0xff20590f, 0xff20590f, 0xff44633a, 0xff20590f, 0xff20590f, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff20590f, 0xff20590f, 0xff44633a, 0x5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff44633a, 0x5a804d, 0x5a804d}, {0x5a804d, 0x5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff44633a, 0xff44633a, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff44633a, 0x5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff44633a, 0x5a804d, 0x5a804d, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff20590f, 0xff20590f, 0xff44633a, 0x5a804d, 0x5a804d}, {0x5a804d, 0x5a804d, 0x5a804d, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0x5a804d, 0x5a804d, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0x5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff44633a, 0xff44633a, 0x5a804d, 0x5a804d}, {0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0x5a804d, 0x5a804d, 0x5a804d}, {0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d}, {0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d}, {0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d, 0x5a804d}};