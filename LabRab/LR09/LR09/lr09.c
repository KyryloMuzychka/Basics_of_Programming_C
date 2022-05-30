#include <stdio.h>
#include <conio.h>
#include "myhead.h"

main()
{
	float a, b, c, d, f, g, h;
	printf("Sides (a b c d f): ");
	scanf_s("%f%f%f%f%f", &a, &b, &c, &d, &f);
	printf("Diagonals (g, h): ");
	scanf_s("%f%f", &g, &h);
	printf("Area of the poligon = %f", Triangle(a, b, g) + Triangle(g, c, h) + Triangle(h, d, f));
	_getch();
	return 0;
}
