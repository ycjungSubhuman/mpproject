int gameclear_width = 50;
int gameclear_height = 30;
unsigned int _gameclear[30][50] = {{0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0x5a804d}, {0xff20590f, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff20590f, 0xff44633a}, {0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff44633a}, {0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff44633a}, {0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff44633a}, {0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff44633a, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff44633a}, {0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff44633a, 0xff44633a, 0xff44633a, 0xff20590f, 0xff20590f, 0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff44633a, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff44633a, 0xff20590f, 0xff20590f, 0xff20590f, 0xff44633a, 0xff44633a, 0xff44633a, 0xff20590f, 0xff20590f, 0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff44633a}, {0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff44633a, 0xff20590f, 0xff20590f, 0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff44633a, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff44633a}, {0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff44633a, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff44633a, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff44633a}, {0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff44633a, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff44633a, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff44633a}, {0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff44633a, 0xff20590f, 0xff20590f, 0xff20590f, 0xff44633a, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff44633a}, {0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff44633a, 0xff20590f, 0xff20590f, 0xff20590f, 0xff44633a, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff44633a, 0xff20590f, 0xff20590f, 0xff20590f, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff44633a}, {0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff44633a, 0xff44633a, 0xff44633a, 0xff20590f, 0xff20590f, 0xff20590f, 0xff44633a, 0xff5a804d, 0xff44633a, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff44633a, 0xff20590f, 0xff20590f, 0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff44633a}, {0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff44633a, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff44633a, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff44633a}, {0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff44633a, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff44633a}, {0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff44633a, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff44633a}, {0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff44633a, 0xff44633a, 0xff20590f, 0xff44633a}, {0xff20590f, 0xff44633a, 0xff5a804d, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff44633a, 0xff44633a, 0xff44633a, 0xff20590f, 0xff44633a}, {0xff20590f, 0xff44633a, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff44633a, 0xff5a804d, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff44633a, 0xff5a804d, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff44633a, 0xff5a804d, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff44633a, 0xff5a804d, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff44633a}, {0xff20590f, 0xff44633a, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff44633a, 0xff5a804d, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff44633a, 0xff5a804d, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff44633a, 0xff5a804d, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff44633a, 0xff5a804d, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff44633a}, {0xff20590f, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff44633a}, {0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff44633a}, {0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff44633a}, {0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff44633a}, {0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff44633a, 0xff5a804d, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff44633a, 0xff5a804d, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff44633a}, {0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff44633a, 0xff5a804d, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff44633a, 0xff5a804d, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff44633a}, {0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff44633a, 0xff5a804d, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff44633a}, {0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff44633a}, {0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff44633a}, {0x5a804d, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a}};
unsigned int* gameclear = &_gameclear;