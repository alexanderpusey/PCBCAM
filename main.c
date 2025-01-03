/* processes config file into GCODE */
#include <stdio.h>

int main()
{
	int c;
	while ((c = getchar()) != EOF) {
		putchar(c);
	}
};

struct point {
	int x;
	int y;
};

struct line {
	struct point p1;
	struct point p2;
};

struct rect {
	struct point center;
	int width;
	int height; 
};

struct circle {
	struct point center;
	int diameter;
};


