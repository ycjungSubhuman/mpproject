int gameover_width = 50;
int gameover_height = 30;
unsigned int gameover[30][50] = {{0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xffffff}, {0xff20590f, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff20590f, 0xff44633a}, {0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff44633a}, {0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff44633a}, {0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff44633a}, {0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff44633a, 0xff44633a, 0xff20590f, 0xff20590f, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff20590f, 0xff20590f, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff44633a}, {0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff44633a, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff44633a}, {0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff44633a, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff20590f, 0xff20590f, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff44633a}, {0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff44633a}, {0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff44633a}, {0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff44633a}, {0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff44633a}, {0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff44633a}, {0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff44633a, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff44633a}, {0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff44633a}, {0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff44633a}, {0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff44633a}, {0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff44633a}, {0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff44633a}, {0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff44633a}, {0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff44633a, 0xff44633a, 0xff20590f, 0xff44633a, 0xff20590f, 0xff20590f, 0xff44633a, 0xff5a804d, 0xff20590f, 0xff44633a, 0xff20590f, 0xff20590f, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff20590f, 0xff20590f, 0xff44633a, 0xff44633a, 0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff44633a}, {0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff44633a, 0xff5a804d, 0xff20590f, 0xff44633a, 0xff20590f, 0xff20590f, 0xff44633a, 0xff20590f, 0xff20590f, 0xff44633a, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff44633a, 0xff20590f, 0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff44633a}, {0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff44633a, 0xff5a804d, 0xff20590f, 0xff44633a, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff44633a, 0xff20590f, 0xff20590f, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff44633a}, {0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff44633a, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff44633a, 0xff44633a, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff5a804d, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff44633a}, {0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff44633a, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff44633a}, {0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff44633a}, {0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff44633a}, {0xff20590f, 0xff44633a, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff5a804d, 0xff20590f, 0xff44633a}, {0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff20590f, 0xff44633a}, {0xffffff, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a, 0xff44633a}};