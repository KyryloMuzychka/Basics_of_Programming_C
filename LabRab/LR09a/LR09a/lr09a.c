#include <stdio.h>
#include <conio.h>

main()
{
	int a, n, i, s = 0;
	do {
		printf("n = "); scanf_s("%i", &n);
	} while (n <= 0);	
	for (i = 1; i <= n; i++)
	{
		printf("a%i = ", i); scanf_s("%i", &a);
		if (NotEven(a))
			s += a;
	}
	printf("s = %i\n", s);
	if (!NotEven(s))
		printf("It's the even number");
	else
		printf("It isn't the even number");
	_getch();
	return 0;
}