typedef  struct
{
	int x, y, z;
	int img;
	int type;
	int valid;
} Player;


typedef  struct
{
	int x, y, z;
	int img;
	int type;
	int xspeed, yspeed;
	int valid;
} Enemy;

typedef  struct bullet
{
	int x, y, z;
	int img;
	int type;
	int xspeed, yspeed;
	int valid;
} Bullet;


void touched(int x, int y);
