/* lr01.c */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

main()
{
	const del = 10;
	int x, y, prize = 100;
	printf("Define number, which computer generate\n");
	srand((unsigned)time(0));
	y = rand() % 10;
	do
	{
		printf("Enter number = ");
		scanf_s("%i", &x);
		if (x > y)
		{
			printf("Wrong enter smaller\n");
			prize -= del;
		}
		if (x < y)
		{
			printf("Wrong number bigger\n");
			prize -= del;
		}
	} while (x != y);

	printf("You have guessed right\n");
	printf("You have won the prize = %i", prize);
	_getch();
	return 0;
}