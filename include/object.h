struct player
{
  int x, y;
  int img;
  int valid;
} mc;

struct enemy
{
  int x, y;
  int img;
  int hp;
  int xspeed, yspeed;
  int valid;
} enemys[100];

int enemysCount;

struct bullet
{
  int x, y;
  int img;
  int power;
  int xspeed, yspeed;
  int valid;
} bullets[1000];

int bulletsCount;

int score;
int stage;
int gamestate;

void touched(int x, int y);
