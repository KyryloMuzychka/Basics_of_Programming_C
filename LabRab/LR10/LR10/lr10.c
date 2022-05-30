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

// 1
//#include <stdio.h>
//#include <conio.h>
//#define MAX 100
//
//main()
//{
//	int n, i, M1[MAX], M2[MAX], M3[MAX];
//	printf("n = "); scanf_s("%i", &n);
//	printf("M1\tM2\n");
//	for (i = 0; i < n; i++)
//	{
//		scanf_s("%i\t%i", &M1[i], &M2[i]);
//		M3[i] = M1[i] + M2[i];
//	}
//	for (i = 0; i < n; i++)
//		printf("M3[%i] = %i\n", i, M3[i]);
//	_getch();
//	return 0;
//}

//2
//#include <stdio.h>
//#include <conio.h>
//#define MAX 100
//
//main()
//{
//	int n, i, j= 0, k = 0, M1[MAX], M2[MAX], M3[MAX];
//	printf("n = "); scanf_s("%i", &n);
//	for (i = 0; i < n; i++)
//	{
//		printf("M[%i] = ", i);
//		scanf_s("%i", &M1[i]);
//		if (M1[i] < 0)
//		{
//			M3[j] = M1[i];
//			j++;
//		}
//		else
//		{
//			M2[k] = M1[i];
//			k++;
//		}
//	}
//	printf("\n");
//	for (i = 0; i < k; i++)
//		printf("M2[%i] = %i\n", i, M2[i]);
//	printf("\n");
//	for (i = 0; i < j; i++)
//		printf("M3[%i] = %i\n", i, M3[i]);
//	_getch();
//	return 0;
//}


//3
//#include <stdio.h>
//#include <conio.h>
//#define MAX 100
//
//main()
//{
//	int n, i, j = 0, s = 0, M1[MAX], M2[MAX], average;
//	printf("n = "); scanf_s("%i", &n);
//	for (i = 0; i < n; i++)
//	{
//		printf("M[%i] = ", i);
//		scanf_s("%i", &M1[i]);
//		s += M1[i];
//	}
//	average = s / n;
//	for (i = 0; i < n; i++)
//	{
//		if (M1[i] > average)
//		{
//			M2[j] = M1[i];
//			j++;
//		}		
//	}
//	for (i = 0; i < j; i++)
//	{
//		printf("M2[%i] = %i\n", i, M2[i]);
//	}
//	_getch();
//	return 0;
//}


//4 
//#include <stdio.h>
//#include <conio.h>
//#define MAX 100
//
//main()
//{
//	int i, j = 0, k = 0, M1[MAX], M2[MAX];
//	do
//	{
//		printf("M1[%i] = ", j);
//		scanf_s("%i", &M1[j]);
//	} while (M1[j++] != 0);
//	for (i = 0; i < j; i++)
//	{
//		if (M1[i] == M1[i - 1] + M1[i - 2])
//			break;
//	}
//	while (M1[i] == M1[i - 1] + M1[i - 2])  {
//		M2[k] = M1[i - 2];
//		M2[k + 1] = M1[i - 1];
//		M2[k + 2] = M1[i];
//		i++; 
//		k++;
//	}
//	i = 0;
//	for(i = 0; i < k + 2; i++) 
//		printf("M2[%i] = %i\n", i, M2[i]);
//	_getch();
//	return 0;
//}


//5
//#include <stdio.h>
//#include <conio.h>
//#define MAX 100
//
//main()
//{
//	int v, i, j = 0, k = 0, s = 0, M1[MAX], M2[MAX], M3[MAX];
//	do
//	{
//		printf("M1[%i] = ", j);
//		scanf_s("%i", &M1[j]);
//	} while (M1[j++] != 0);
//	do
//	{
//		printf("\tM2[%i] = ", k);
//		scanf_s("%i", &M2[k]);
//	} while (M2[k++] != 0);
//	for (i = 0; i < j; i++)
//		for (v = 0; v < k; v++)
//			if (M1[i] == M2[v])
//				M3[s++] = M1[i];
//	for (i = 0; i < s; i++)
//		printf("M3[%i] = %i\n", i, M3[i]);
//	_getch();
//	return 0;
//}

//6
//#include <stdio.h>
//#include <conio.h>
//#define MAX 100
//
//main()
//{
//	int v, i, j = 0, k = 0, s = 0, l = 0, M1[MAX], M2[MAX], M3[MAX];
//	do
//	{
//		printf("M1[%i] = ", j);
//		scanf_s("%i", &M1[j]);
//	} while (M1[j++] != 0);
//	do
//	{
//		printf("\tM2[%i] = ", k);
//		scanf_s("%i", &M2[k]);
//	} while (M2[k++] != 0);
//	for (v = 0; v < k; v++)
//	{
//		for (i = 0; i < j; i++)
//		{
//			if (M2[v] != M1[i])
//				s++;	
//		}
//		if (s == j)
//		{
//			M3[l] = M2[v];
//			l++;
//		}
//		s = 0;
//	}
//	for (i = 0; i < l; i++) 
//		printf("M3[%i] = %i\n", i, M3[i]);
//	_getch();
//	return 0;
//}


//7  1 way
//#include <stdio.h>
//#include <conio.h>
//#define MAX 100
//
//main()
//{
//	int n, a[MAX], *p = a, i = 0, k = 0;
//	printf("n = "); scanf_s("%i", &n);
//	while (n)
//	{
//		k *= 10;
//		k += n % 10;
//		n /= 10;
//	}
//	while (k)
//	{
//		a[i] = k % 10;
//		printf("a[%i] = %i\n", i, a[i]);
//		k /= 10; i++;
//	}
//	_getch();
//	return 0;
//}

//7  2 way
//#include <stdio.h>
//#include <conio.h>
//#define MAX 100
//
//main()
//{
//	int n, a[MAX], i = 0, t, k = 0;
//	printf("n = "); scanf_s("%i", &n);
//	while (n)
//	{
//		a[k++] = n % 10;
//		n /= 10;
//	}
//	for (i = 0; i < (k / 2); i++)
//	{
//		t = a[i];
//		a[i] = a[k - i - 1];
//		a[k - i - 1] = t;
//	}
//	for (i = 0; i < k; i++)
//	{
//		printf("a[%i] = %i\n", i, a[i]);
//	}
//	_getch();
//	return 0;
//}


//8
//#include <stdio.h>
//#include <conio.h>
//#define MAX 100
//
//main()
//{
//	int i, j = 0, k = 1, M[MAX];
//	do
//	{
//		printf("M[%i] = ", j);
//		scanf_s("%i", &M[j]);
//	} while (M[j++] != 0);
//	for (i = j - 1; i >= 0; i--)
//		if (M[i] == M[i - 1]) 
//			break;
//	while (M[i] == M[i - 1])
//	{
//		i--; 
//		k++;
//	}
//	printf("k = %i\n", k);
//	_getch();
//	return 0;
//}


//9
//#include <stdio.h>
//#include <conio.h>
//#define MAX 100
//main()
//{
//	int i, j = 0, M[MAX];
//	do
//	{
//		printf("M[%i] = ", j);
//		scanf_s("%i", &M[j]);
//	} while (M[j++] != 0);
//	for (i = 0; i < j-2; i++)
//	{
//		while (M[i] != M[i + 1])
//		{
//			if (M[i] > M[i + 1])
//				M[i] -= M[i + 1];
//			if (M[i] < M[i + 1])
//				M[i + 1] -= M[i];
//		}
//	}
//	printf("\n\n");
//	//for (i = 0; i < j; i++)
//		//printf("\nM[%i] = %i", i, M[i]);
//	//printf("\n\n");
//	printf("nod = %i", M[j - 2]);
//	_getch();
//	return 0;
//}

//10
//#include <stdio.h>
//#include <conio.h>
//#define MAX 100
//
//main()
//{
//	int i, j = 0, k = 1, M[MAX];
//	do
//	{
//		printf("M[%i] = ", j);
//		scanf_s("%i", &M[j]);
//	} while (M[j++] != 0);
//	for (i = j - 1; i >= 0; i--)
//		if (M[i+1] == M[i] + 1) 
//			break;
//	while (M[i + 1] == M[i] + 1)
//	{
//		i--; 
//		k++;
//	}
//	printf("k = %i\n", k);
//	_getch();
//	return 0;
//}


//11
//#include <stdio.h>
//#include <conio.h>
//#define MAX 100
//
//main()
//{
//	int i, j = 0, k = 1, M[MAX];
//	do
//	{
//		printf("M[%i] = ", j);
//		scanf_s("%i", &M[j]);
//	} while (M[j++] != 0);
//	for (i = 0; i < j; i++)
//		if (M[i] == M[i+1] + 1) 
//			break;
//	while (M[i] == M[i + 1] + 1)
//	{
//		i++; 
//		k++;
//	}
//	printf("k = %i\n", k);
//	_getch();
//	return 0;
//}

//12
//#include <stdio.h>
//#include <conio.h>
//#define MAX 100
//
//main()
//{
//	int i, j = 0, k = 1, M[MAX];
//	do
//	{
//		printf("M[%i] = ", j);
//		scanf_s("%i", &M[j]);
//	} while (M[j++] != 0);
//	for (i = 0; i < j; i++) {
//		if (M[i] & 1) 
//			M[i] *= 2;
//		else
//			M[i] *= 3;
//	}
//	for (i = 0; i < j; i++)
//		printf("M[%i] = %i\n", i, M[i]);
//	_getch();
//	return 0;
//}

//13
//#include <stdio.h>
//#include <conio.h>
//#define MAX 100
//
//main()
//{
//	int i = 0, j = 0, s = 0, n, M1[MAX], M2[MAX], average;
//	do
//	{
//		printf("M1[%i] = ", i);
//		scanf_s("%i", &M1[i]);
//		s += M1[i];
//	} while (M1[i++] != 0);
//	average = s / (i-1);
//	n = i - 1;
//	for (i = 0; i < n; i++)
//	{
//		if (M1[i] > average) {
//			M2[j++] = M1[i];
//		}
//	}
//	for (i = 0; i < j; i++)
//		printf("M2[%i] = %i\n", i, M2[i]);
//	printf("del = %i\n", n-j);
//	_getch();
//	return 0;
//}


//14
//#include <stdio.h>
//#include <conio.h>
//#define MAX 100
//
//main()
//{
//	int i = 0, j, n, s = 0, M[MAX], Index[MAX], k = 0;
//	printf("n = "); scanf_s("%i", &n);
//	do
//	{
//		printf("M[%i] = ", i);
//		scanf_s("%i", &M[i]);
//	} while (M[i++] != 0);	
//	for (j = 0; j < i; j++)
//		if (M[j] == n) 
//			Index[k++] = j;
//	for (i = 0; i < k; i++)
//		printf("I[%i] = %i\n", i, Index[i]);
//	printf("amount = %i\n", k);
//	_getch();
//	return 0;
//}


////15
//#include <stdio.h>
//#include <conio.h>
//#define MAX 100
//
//main()
//{
//	int x, y, M1[MAX], M2[MAX], i = 0, j, k = 0;
//	printf("x = "); scanf_s("%i", &x);
//	printf("y = "); scanf_s("%i", &y);
//	do
//	{
//		printf("M1[%i] = ", i);
//		scanf_s("%i", &M1[i]);
//	} while (M1[i++] != 0);	
//	for (j = 0; j < i; j++)
//		if ((M1[j] > x) && (M1[j] < y))
//			M2[k++] = M1[j];
//	for (i = 0; i < k; i++)
//		printf("M2[%i] = %i\n", i, M2[i]);
//	_getch();
//	return 0;
//}


//16
//#include <stdio.h>
//#include <conio.h>
//#define MAX 100
//
//main()
//{
//	int n,  M1[MAX], M2[MAX], i = 0, j, k = 0;
//	printf("n = "); scanf_s("%i", &n);
//	do
//	{
//		printf("M1[%i] = ", i);
//		scanf_s("%i", &M1[i]);
//	} while (M1[i++] != 0);
//	for (j = 0; j < i; j++)
//		if (M1[j] != n)
//			M2[k++] = M1[j];
//	for (i = 0; i < k; i++)
//		printf("M2[%i] = %i\n", i, M2[i]);
//	_getch();
//	return 0;
//}

//17
//#include <stdio.h>
//#include <conio.h>
//#include <math.h>
//#define MAX 100
//
//main()
//{
//	int n, i, j = 0, M1[MAX], M2[MAX], M3[MAX];
//	printf("n = "); scanf_s("%i", &n);
//	printf("M1\tM2\n");
//	for (i = 0; i < n; i++)
//		scanf_s("%i\t%i", &M1[i], &M2[i]);
//	for (i = 0; i < n; i++)
//		M3[i] = abs( M1[i] - M2[n - i - 1] );	
//	for (i = 0; i < n; i++)
//		printf("M3[%i] = %i\n", i, M3[i]);
//	_getch();
//	return 0;
//}

//18
//#include <stdio.h>
//#include <conio.h>
//#define MAX 100
//
//main()
//{
//	int x, y, M1[MAX], M2[MAX], M3[MAX], i = 0, j = 0, k = 0, l;
//	printf("x = "); scanf_s("%i", &x);
//	printf("y = "); scanf_s("%i", &y);
//	if (x < y) {
//		do
//		{
//			printf("M1[%i] = ", i);
//			scanf_s("%i", &M1[i]);
//		} while (M1[i++] != 0);
//
//		do
//		{
//			printf("M2[%i] = ", j);
//			scanf_s("%i", &M2[j]);
//		} while (M2[j++] != 0);
//
//		for (l = 0; l < i; l++)
//			if (M1[l] > x)
//				M3[k++] = M1[l];
//
//		for (l = 0; l < j; l++)
//			if (M2[l] < y)
//				M3[k++] = M2[l];
//
//		for (l = 0; l < k; l++)
//			printf("M3[%i] = %i\n", l, M3[l]);
//	}
//	else
//		printf("Error!");
//
//	_getch();
//	return 0;
//}



//19
//#include <stdio.h>
//#include <conio.h>
//#define MAX 100
//
//main()
//{
//	int i = 0, j, k = 0, n, M1[MAX], M2[MAX];
//	printf("n = "); scanf_s("%i", &n);
//	do
//	{
//		printf("M1[%i] = ", i);
//		scanf_s("%i", &M1[i]);
//	} while (M1[i++] != 0);
//	for (j = 0; j < i; j++)
//		if (M1[j] != n)
//			M2[k++] = M1[j];
//	for (j = 0; j < k; j++)
//		printf("\tM2[%i] = %i\n", j, M2[j]);
//	printf("del = %i\n", i-k);
//	_getch();
//	return 0;
//}


//20
//#include <stdio.h>
//#include <conio.h>
//#define MAX 100
//
//main()
//{
//	int x, y, M1[MAX], M2[MAX], i = 0, j = 0, k = 0;
//	printf("x = "); scanf_s("%i", &x);
//	printf("y = "); scanf_s("%i", &y);
//	if (x < y) {
//		do
//		{
//			printf("M1[%i] = ", i);
//			scanf_s("%i", &M1[i]);
//		} while (M1[i++] != 0);
//		for (j = 0; j < i; j++)
//			if ((M1[j] > x) && (M1[j] < y))
//				M2[k++] = 0;
//			else
//				M2[k++] = M1[j];
//		for (i = 0; i < k; i++)
//			printf("M2[%i] = %i\n", i, M2[i]);
//	}
//	else
//		printf("Error!");
//	_getch();
//	return 0;
//}

//21
//#include <stdio.h>
//#include <conio.h>
//#define MAX 100
//
//main()
//{
//	int i = 0, j, k = 0, s = 0, v, M1[MAX], M2[MAX];
//	do
//	{
//		printf("M1[%i] = ", i);
//		scanf_s("%i", &M1[i]);
//	} while (M1[i++] != 0);
//	for (j = 0; j < i; j++) 
//	{
//		for (v = 0; v < i; v++)
//			if (M1[j] != M1[v])
//				s++;
//		if (s == (i - 1))
//			M2[k++] = M1[j];
//		s = 0;
//	}
//	for (j = 0; j < k; j++)
//		printf("\tM2[%i] = %i\n", j, M2[j]);
//	_getch();
//	return 0;
//}

//22. У довільному одновимірному масиві цілих чисел визначити який з елемен-
//тів(максимальний чи мінімальний) знаходиться ближче до середини маси -
//ву.

//#include <stdio.h>
//#include <conio.h>
//#include <math.h>
//#define MAX 100
//
//main()
//{
//	int i = 0, j, max, min, maxI, minI, M[MAX];
//	do
//	{
//		printf("M[%i] = ", i);
//		scanf_s("%i", &M[i]);
//	} while (M[i++] != 0);
//	max = min = M[0];
//	for (j = 1; j < (i - 1); j++)
//	{
//		if (max < M[j]) {
//			max = M[j];
//			maxI = j;
//		}
//			
//		if (min > M[j]) {
//			min = M[j];
//			minI = j;
//		}	
//	}
//
//
//	printf("i = %i\n", (i-1));
//	printf("max = %i\tmaxI = %i\n", max, maxI);
//	printf("min = %i\tminI = %i\n", min, minI);
//	printf("center = %i\n", (i - 1) / 2);
//
//
//
//	if (abs((((i - 1) / 2) - (maxI+1))) > abs((((i - 1) / 2) - (minI+1))))
//		printf("min is closer to center");
//	else if (abs((((i - 1) / 2) - (maxI + 1))) == abs((((i - 1) / 2) - (minI + 1))))
//		printf("length of max = length of min");
//	else
//		printf("max is closer to center");
//	_getch();
//	return 0;
//}


//23
//#include <stdio.h>
//#include <conio.h>
//#define MAX 100
//
//main()
//{
//	int i = 0, j, k = 1, M1[MAX], M2[MAX], min, max;
//	do
//	{
//		printf("M1[%i] = ", i);
//		scanf_s("%i", &M1[i]);
//	} while (M1[i++] != 0);
//	min = max = M1[0];
//	for (j = 1; j < (i - 1); j++)
//	{
//		if (max < M1[j]) 
//			max = M1[j];				
//		if (min > M1[j]) 
//			min = M1[j];			
//	}
//	M2[0] = min;
//	for (j = 0; j < (i - 1); j++)
//	{
//		if ((M1[j] != max) && (M1[j] != min)) M2[k++] = M1[j];
//	}
//	M2[k] = max;
//	for (j = 0; j <= k; j++)
//		printf("\tM2[%i] = %i\n", j, M2[j]);
//	_getch();
//	return 0;
//}

//24
//24. Дано довільні одновимірний масив дійсних чисел М та натуральне число n.
//У масиві М збільшити у n разів ті елементи, що мають парні порядкові но -
//мери та менші за n але більші за середнє арифметичне серед елементів М з
//непарними порядковими номерами.
//#include <stdio.h>
//#include <conio.h>
//#define MAX 100
//
//main()
//{
//	int n, i = 0, j, s = 0, k = 0;
//	double M[MAX], average;
//	printf("n = "); scanf_s("%i", &n);
//	do
//	{
//		printf("M[%i] = ", i);
//		scanf_s("%lf", &M[i]);
//	} while (M[i++] != 0);
//	for (j = 0; j < i; j++)
//		if (j & 1) 
//		{
//			s += M[j];
//			k++;
//		}
//	average = s / k;
//	printf("ave = %lf\n", average);
//	for (j = 0; j < i; j++)
//		if ((!(j & 1)) && (M[j] < n) && (M[j] > average))	
//			M[j] *= n;
//	for (j = 0; j < i; j++)
//		printf("\tM[%i] = %lf\n", j, M[j]);
//	_getch();
//	return 0;
//}

//25
//#include <stdio.h>
//#include <conio.h>
//#define MAX 100
//
//main()
//{
//	int n, i = 0, j = 0, k, M1[MAX], M2[MAX];
//	double  M3[MAX];
//	printf("n = "); scanf_s("%i", &n);
//	do
//	{
//		printf("M1[%i] = ", i);
//		scanf_s("%i", &M1[i]);
//	} while (M1[i++] != 0);
//	do
//	{
//		printf("M2[%i] = ", j);
//		scanf_s("%i", &M2[j]);
//	} while (M2[j++] != 0);
//	while ((i < j) || (i > j)) 
//		if (i < j)
//			M1[i++] = n;
//		else if (i > j)
//			M2[j++] = n;
//	for (k = 0; k < i; k++)
//		M3[k] = M1[k] * M2[k];
//	for (i = 0; i < k; i++)
//		printf("\tM3[%i] = %lf\n", i, M3[i]);
//	_getch();
//	return 0;
//}