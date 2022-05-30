// 1
/*
#include <stdio.h>
#include <conio.h>
main()
{
	int x, y, a = 0, b;
	do
	{
		printf("Enter a natural number x="); 
		scanf_s("%i", &x);
	} while (x <= 0);
	do
	{
		printf("Enter a  number between 0 and 9 =");
		scanf_s("%i", &y);
	} while (y < 0 || y > 9);
	do 
	{
		b = x % 10;
		x /= 10;
		if (b == y) a++;
	} while (x);
	printf("x has %i y", a);
	_getch();
	return 0;
}
*/


//2
/*
#include <stdio.h>
#include <conio.h>
main()
{
	int x, a, b = 0, l, k, c = 0;
	do
	{
		printf("Enter a natural number x=");
		scanf_s("%i", &x);
	} while (x <= 0);
	a = x;
	l = x;
	do 
	{
		a /= 10;
		b++;
	} while (a);
	if (b % 2)
	{
		for (int i = 0; i < (b / 2); i++)
			l /= 10;
		printf("%i", l % 10);
	}
	else if (!(b % 2))
	{
		for (int i = 0; i < ((b-1) / 2); i++)
			l /= 10;
		printf("%i", (l % 100));

	}
	_getch();
	return 0;
}
*/


// 3
///*
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
main()
{
	char c;
	int x = 0;
	printf("Inputtext:");
	do	
	{
		c = _getche();
		if (isspace(c)) x++;
		
	} while (c != '\r');
	printf("\nx = %i", x - 1);
	_getch();
	return 0;
}
//*/


