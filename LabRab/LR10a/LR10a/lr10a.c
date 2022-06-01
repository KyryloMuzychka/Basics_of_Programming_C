//example
//#include <stdio.h>
//#include <conio.h>
//#include <math.h>
//#define MAX 100
//main()
//{
//	float a[MAX], *p=a, x, y, s = 0;
//	unsigned int i, n, k;
//	printf("n=");
//	scanf_s("%i", &n);
//	for (i = 0; i < n; i++)
//	{
//		printf("a[%i]=", i);
//		scanf_s("%f", &a[i]);
//		s += a[i];
//	}
//	x = fabsf(*p - s / n);
//	y = *p;
//	k = 0;
//	for (i = 1; i < n; i++)
//		if (fabsf(*(p + i) - s / n) < x)
//		{
//			x = fabsf(*(p + i) - s / n);
//			y = *(p + i);
//			k = i;
//		}
//	printf("Result:%-7.2f\n", s / n);
//	printf("a[%i]=%-7.2f", k, y);
//	_getch();
//	return 0;
//}
//

#include <stdio.h>
#include <conio.h>
#define MAX 100

int Fill(int *a);

main()
{
	int a[MAX], * p = a, t, k = Fill(a);
	for (int i = 0; i < (k / 2); i++)
	{
		t = *(p + i);
		*(p + i) = *(p + k - i - 1);
		*(p + k - i - 1) = t;
	}
	for (int i = 0; i < k; i++)
	{
		printf("a[%i] = %i\n", i, *(p + i));
	}
	_getch();
	return 0;
}

int Fill(int *a)
{
	int n, v = 0;
	printf("n = "); scanf_s("%i", &n);
	while (n)
	{
		a[v++] = n % 10;
		n /= 10;
	}
	return v;
}