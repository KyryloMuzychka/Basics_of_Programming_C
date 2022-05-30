#include <stdio.h>
#include <conio.h>

#define CUBE(x) ((x)*(x)*(x))
#define MAX(x, y) (((x)>(y)) ? (x) : (y))
//1
//#define MIN(a, b, c) ((((a) < (b) ? (a) : (b))) < (c) ? (((a) < (b) ? (a) : (b))) : (c))
//2
#define MIN2(x, y) ((x < y) ? (x) : (y))
#define MIN(x, y, z) MIN2(MIN2((x), (y)), (z))
//3

main()
{
	int a, b, c;
	float a1, b1, c1;
	printf("a,b,c: "); scanf_s("%i%i%i", &a, &b, &c);
	printf("a1,b1,c1: "); scanf_s("%f%f%f", &a1, &b1, &c1);
	printf("a^3 = %i\na1^3 = %f\n", CUBE(a), CUBE(a1));
	printf("%i\n%f\n", MAX(a,b), MAX(a1, b1));
	printf("%i\n%f\n", MIN(a, b, c), MIN(a1, b1, c1));
	_getch();
	return 0;
}