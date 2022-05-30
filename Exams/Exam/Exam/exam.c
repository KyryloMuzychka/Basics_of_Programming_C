// ex. 2
//#include <stdio.h>
//main()
//{
//	int n, a, b;
//	do
//	{
//		printf("Enter a natural number (n > 7) n=");
//		scanf_s("%i", &n);
//	} while (n <= 7);
//	for (a = 0; a <= n / 3; a++)
//	{
//		for (b = 0; b <= n / 5; b++)
//			if (n == (3 * a + 5 * b)) printf("a = %i, b = %i\n", a, b);
//	}
//	_getch();
//	return 0;
//}


 //ex. 3
#include <stdio.h>
#include <conio.h>
main()
{
	int n, a, i, b;
	do
	{
		printf("Enter a natural number n (n>1)="); scanf_s("%i", &n);
	} while (n <= 1);
	printf("a1="); scanf_s("%i", &a);
	b = a;
	for (i = 2; i <= n; i++)
	{
		printf("a%i=", i);
		scanf_s("%i", &a);
		while (a != b) 
		{
			if (a > b) 
				a -= b;
			else
				b -= a;
		}
	}
	printf("%i", a);
	_getch();
	return 0;
}

// ex 2
//#include <stdio.h>
//#include <conio.h>
//main()
//{
//	int n, a, b = 0;
//	do
//	{
//		printf("Enter a natural number n ="); scanf_s("%i", &n);
//	} while (n <= 0);
//	while (n)
//	{
//		a = n % 10;
//		b += a;
//		n /= 10;
//	}
//	printf("%i", b);
//	_getch();
//	return 0;
//}

// ex 3
//#include <stdio.h>
//#include <conio.h>
//#include <math.h>
//main()
//{
//	int n;
//	double a, p = 1;
//	do
//	{
//		printf("Enter a natural number n ="); scanf_s("%i", &n);
//	} while (n <= 0);
//	for (int i = 1; i <= n; i++)
//	{
//		printf("a%i=", i);
//		scanf_s("%lf", &a);
//		p *= (1 + pow(a, n));
//	}
//	printf("%lf", p);
//	_getch();
//	return 0;
//}