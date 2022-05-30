//example
//#include <stdio.h>
//#include <conio.h>
//#include <math.h>
//#define ROWS 10
//#define COLS 10
//
//main()
//{
//	float matrix[ROWS][COLS], a;
//	unsigned int i, j, n, m;
//	printf("n = "); scanf_s("%i", &n);
//	printf("m = "); scanf_s("%i", &m);
//	if (n > 0 && m > 0 && n < ROWS && m < COLS)
//	{
//		for (i = 0; i < n; i++)
//			for (j = 0; j < m; j++)
//			{
//				printf("m[%i][%i] = ", i, j);
//				scanf_s("%f", &matrix[i][j]);
//				if ((!i) && (i == j)) a = matrix[i][j];
//				else
//					if (fabs(matrix[i][j]) > fabs(a)) a = matrix[i][j];
//			}
//		printf("max = |%9.3f|\n", a);
//		printf("Source matrix\n");
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < m; j++) printf("%9.3f", matrix[i][j]);
//			printf("\n");
//		}
//		matrix[0][0] = matrix[0][m - 1] = matrix[n - 1][0] = matrix[n - 1][m - 1] = a;
//		printf("Destination matrix:\n");
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < m; j++) printf("%9.3f", matrix[i][j]);
//			printf("\n");
//		}
//	}
//	else printf("Incorrect input!");
//	_getch();
//	return 0;
//}


//1
//#include <stdio.h>
//#include <conio.h>
//#include <math.h>
//#define ROWS 10
//#define COLS 10
//
//main()
//{
//	float matrix[ROWS][COLS], max = 0;
//	unsigned int i, j, n, m, maxI, maxJ;
//	printf("n = "); scanf_s("%i", &n);
//	printf("m = "); scanf_s("%i", &m);
//	if (n > 0 && m > 0 && n < ROWS && m < COLS)
//	{
//		for (i = 0; i < n; i++)
//			for (j = 0; j < m; j++)
//			{
//				printf("m[%i][%i] = ", i, j);
//				scanf_s("%f", &matrix[i][j]);
//				if (max < fabs(matrix[i][j])) {
//					max = fabs(matrix[i][j]);
//					maxI = i;
//					maxJ = j;
//				}
//					
//			}
//		printf("|max| = %9.3f\n", max);
//		printf("Source matrix\n");
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < m; j++) 
//				printf("%9.3f", matrix[i][j]);
//			printf("\n");
//		}
//		for (i = 0; i < n; i++)
//			matrix[i][0] = matrix[maxI][maxJ];
//		
//		printf("Destination matrix:\n");
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < m; j++)
//				printf("%9.3f", matrix[i][j]);
//			printf("\n");
//		}
//	}
//	else printf("Incorrect input!");
//	_getch();
//	return 0;
//}


//2
//#include <stdio.h>
//#include <conio.h>
//#include <math.h>
//#include <limits.h>
//#define ROWS 10
//#define COLS 10
//
//main()
//{
//	float matrix[ROWS][COLS], min;
//	unsigned int i, j, n, m, minI, minJ;
//	printf("n = "); scanf_s("%i", &n);
//	printf("m = "); scanf_s("%i", &m);
//	min = USHRT_MAX;
//	if (n > 0 && m > 0 && n < ROWS && m < COLS)
//	{
//		for (i = 0; i < n; i++)
//			for (j = 0; j < m; j++)
//			{
//				printf("m[%i][%i] = ", i, j);
//				scanf_s("%f", &matrix[i][j]);
//				if (min > fabs(matrix[i][j]))
//				{
//					min = fabs(matrix[i][j]);
//					minI = i;
//					minJ = j;
//				}
//					
//			}
//		printf("|min| = %9.3f\n", min);
//		printf("Source matrix\n");
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < m; j++) 
//				printf("%9.3f", matrix[i][j]);
//			printf("\n");
//		}
//		for (j = 0; j < m; j++)
//			matrix[i-1][j] = matrix[minI][minJ];
//		
//		printf("Destination matrix:\n");
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < m; j++)
//				printf("%9.3f", matrix[i][j]);
//			printf("\n");
//		}
//	}
//	else 
//		printf("Incorrect input!");
//	_getch();
//	return 0;
//}


//3
//#include <stdio.h>
//#include <conio.h>
//#include <math.h>
//#define ROWS 10
//#define COLS 10
//#define N 100
//main()
//{
//	float matrix[ROWS][COLS], M[N], x;
//	unsigned int i, j, n, m, k = 0, Mj[N], Mi[N];
//	printf("x = "); scanf_s("%f", &x);
//	printf("n = "); scanf_s("%i", &n);
//	printf("m = "); scanf_s("%i", &m);
//	if (n > 0 && m > 0 && n < ROWS && m < COLS)
//	{
//		for (i = 0; i < n; i++)
//			for (j = 0; j < m; j++)
//			{
//				printf("m[%i][%i] = ", i, j);
//				scanf_s("%f", &matrix[i][j]);
//				if (matrix[i][j] > x) {
//					M[k] = matrix[i][j];
//					Mi[k] = i;
//					Mj[k] = j;
//					k++;
//				}
//					
//			}
//		printf("Source matrix\n");
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < m; j++) 
//				printf("%9.3f", matrix[i][j]);
//			printf("\n");
//		}
//		
//		printf("M\ti\tj\n");
//		for (i = 0; i < k; i++)
//		{
//				printf("%.2f\t%i\t%i\n", M[i], Mi[i], Mj[i]);
//			printf("\n");
//		}
//	}
//	else printf("Incorrect input!");
//	_getch();
//	return 0;
//}

//4
//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//#include <math.h>
//#define _USE_MATH_DEFINES
//#define ROWS 10
//#define COLS 10
//#define N 100
//main()
//{
//	float matrix[ROWS][COLS], M[N], x, s = 0;
//	unsigned int i, j, n, m, k = 0;
//	srand((unsigned)time(0));
//	x = ((double)rand() / RAND_MAX) * RAND_MAX;
//	printf("x = %.3f\n", x);
//	printf("n = "); scanf_s("%i", &n);
//	printf("m = "); scanf_s("%i", &m);
//	if (n > 0 && m > 0 && n < ROWS && m < COLS)
//	{
//		for (i = 0; i < n; i++)
//			for (j = 0; j < m; j++)
//			{
//				printf("m[%i][%i] = ", i, j);
//				scanf_s("%f", &matrix[i][j]);
//				if (matrix[i][j] < x) 
//				{
//					M[k++] = matrix[i][j];
//					s += matrix[i][j];
//				}
//					
//			}
//		printf("Source matrix\n");
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < m; j++) 
//				printf("%14.3f", matrix[i][j]);
//			printf("\n");
//		}
//		
//		printf("M:");
//		for (i = 0; i < k; i++)
//				printf("%9.2f", M[i]);		
//		printf("\ns = %.2f", s);
//	}
//	else printf("Incorrect input!");
//	_getch();
//	return 0;
//}


//5
//#include <stdio.h>
//#include <conio.h>
//#define ROWS 10
//#define COLS 10
//main()
//{
//	float matrix[ROWS][COLS], s = 0;
//	unsigned int i, j, n, m;
//	printf("n = "); scanf_s("%i", &n);
//	printf("m = "); scanf_s("%i", &m);
//	if (n > 0 && m > 0 && n < ROWS && m < COLS)
//	{
//		for (i = 0; i < n; i++)
//			for (j = 0; j < m; j++)
//			{
//				printf("m[%i][%i] = ", i, j);
//				scanf_s("%f", &matrix[i][j]);					
//			}
//		printf("Source matrix\n");
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < m; j++) 
//				printf("%9.3f", matrix[i][j]);
//			printf("\n");
//		}
//		for (j = 0; j < m-1; j++)
//			s += matrix[0][j];
//		for (j = 0; j < m-1; j++)
//			s += matrix[n-1][j];
//		for (i = 1; i < n-1; i++)
//			s += matrix[i][0];
//		for (i = 0; i < n; i++)
//			s += matrix[i][m-1];
//		printf("s = %f", s);
//	}
//	else printf("Incorrect input!");
//	_getch();
//	return 0;
//}

//6
//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//#include <math.h>
//#define _USE_MATH_DEFINES
//#define ROWS 10
//#define COLS 10
//main()
//{
//	float matrix[ROWS][COLS], x;
//	unsigned int i, j, n, m;
//	srand((unsigned)time(0));
//	x = ((double)rand() / RAND_MAX) * RAND_MAX;
//	printf("x = %f\n", x);
//	printf("n = "); scanf_s("%i", &n);
//	printf("m = "); scanf_s("%i", &m);
//	if (n > 0 && m > 0 && n < ROWS && m < COLS)
//	{
//		for (i = 0; i < n; i++)
//			for (j = 0; j < m; j++)
//			{
//				printf("m[%i][%i] = ", i, j);
//				scanf_s("%f", &matrix[i][j]);
//			}
//		printf("Source matrix\n");
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < m; j++)
//				printf("%15.3f", matrix[i][j]);
//			printf("\n");
//		}
//		for (j = 0; j < m - 1; j++)
//			matrix[0][j] = x;
//		for (j = 0; j < m - 1; j++)
//			matrix[n - 1][j] = x;
//		for (i = 1; i < n - 1; i++)
//			matrix[i][0] = x;
//		for (i = 0; i < n; i++)
//			matrix[i][m - 1] = x;
//		printf("Destination matrix:\n");
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < m; j++)
//				printf("%15.3f", matrix[i][j]);
//			printf("\n");
//		}
//	}
//	else printf("Incorrect input!");
//	_getch();
//	return 0;
//}

//7
//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//#include <limits.h>
//#define N 10
//
//main() {
//	float matrix[N][N], s = 0;
//	unsigned int i, j, n;
//	printf("n = "); scanf_s("%i", &n);
//	if (n > 0 && n < N) {
//		printf("Matrix:\n");
//		srand((unsigned)time(0));
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				matrix[i][j] = ((float)rand() / USHRT_MAX) * USHRT_MAX;
//				printf("%15.3f", matrix[i][j]);
//			}
//			printf("\n");
//		}
//		for (i = 0; i < n; i++) {
//			s += matrix[i][i];
//		}
//		printf("s = %.3f", s);
//	}
//	else printf("Incorrect input!");
//	_getch();
//	return 0;
//}

//8
//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//#include <limits.h>
//#define N 10
//
//main() {
//	float matrix[N][N], s = 1;
//	unsigned int i, j, n;
//	printf("n = "); scanf_s("%i", &n);
//	if (n > 0 && n < N) {
//		printf("Matrix:\n");
//		srand((unsigned)time(0));
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				matrix[i][j] = ((float)rand() / USHRT_MAX) * USHRT_MAX;
//				printf("%15.3f", matrix[i][j]);
//			}
//			printf("\n");
//		}
//		for (i = 0; i < n; i++) 
//			s *= matrix[i][i];
//		j = n - 1;
//		for (i = 0; i < n; i++) 	
//			s *= matrix[i][j--];
//		printf("s = %.3f", s);
//	}
//	else printf("Incorrect input!");
//	_getch();
//	return 0;
//}


//9
//#include <stdio.h>
//#include <conio.h>
//#define ROWS 10
//#define COLS 10
//main()
//{
//	int M1[ROWS][COLS], M2[ROWS][COLS], M3[ROWS][COLS], i, j, n, m;
//	printf("n = "); scanf_s("%i", &n);
//	printf("m = "); scanf_s("%i", &m);
//	if (n > 0 && m > 0 && n < ROWS && m < COLS)
//	{
//		for (i = 0; i < n; i++)
//			for (j = 0; j < m; j++)
//			{
//				printf("M1[%i][%i] = ", i, j);
//				scanf_s("%i", &M1[i][j]);					
//			}
//		for (i = 0; i < n; i++)
//			for (j = 0; j < m; j++)
//			{
//				printf("M2[%i][%i] = ", i, j);
//				scanf_s("%i", &M2[i][j]);
//			}	
//		for (i = 0; i < n; i++)
//			for (j = 0; j < m; j++)
//				M3[i][j] = M1[i][j] + M2[i][j];
//		printf("Source matrix M1:\n");
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < m; j++)
//				printf("%14i", M1[i][j]);
//			printf("\n");
//		}
//		printf("Source matrix M2:\n");
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < m; j++)
//				printf("%14i", M2[i][j]);
//			printf("\n");
//		}
//		printf("Destination matrix M3:\n");
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < m; j++)
//				printf("%14i", M3[i][j]);
//			printf("\n");
//		}
//	}
//	else printf("Incorrect input!");
//	_getch();
//	return 0;
//}


//10
//#include <stdio.h>
//#include <conio.h>
//#define N 10
//
//main() {
//	int M1[N][N], M2[N][N];
//	unsigned int i, j, n;
//	printf("n = "); scanf_s("%i", &n);
//	if (n > 0 && n < N) {
//		for (i = 0; i < n; i++)
//				for (j = 0; j < n; j++)
//				{
//					printf("M1[%i][%i] = ", i, j);
//					scanf_s("%i", &M1[i][j]);
//				}
//		for (i = 0; i < n; i++)
//			for (j = 0; j < n; j++)
//				M2[j][i] = M1[i][j];
//		printf("Source matrix M1:\n");
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//				printf("%14i", M1[i][j]);
//			printf("\n");
//		}
//		printf("Destination matrix M2:\n");
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//				printf("%14i", M2[i][j]);
//			printf("\n");
//		}
//	}
//	else printf("Incorrect input!");
//	_getch();
//	return 0;
//}

//11
//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//#include <limits.h>
//#define N 10
//
//main() {
//	float  M[N][N], t;
//	unsigned int i, j, n, k;
//	printf("n = "); scanf_s("%i", &n);
//	if (n > 0 && n < N) {
//		printf("Source matrix M:\n");
//		srand((unsigned)time(0));
//		for (i = 0; i < n; i++) {
//			for (j = 0; j < n; j++)
//			{
//				M[i][j] = ((float)rand() / USHRT_MAX) * USHRT_MAX;
//				printf("%15.3f", M[i][j]);
//			}
//			printf("\n");
//		}
//		k = n - 1;
//		for (i = 0; i < n; i++)
//		{
//			t = M[i][i];
//			M[i][i] = M[i][k];
//			M[i][k--] = t;
//		}
//		printf("Destination matrix M:\n");
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//				printf("%15.3f", M[i][j]);
//			printf("\n");
//		}
//	}
//	else printf("Incorrect input!");
//	_getch();
//	return 0;
//}


//12
//#include <stdio.h>
//#include <conio.h>
//#define ROWS 10
//#define COLS 10
//main()
//{
//	float M1[ROWS][COLS], M2[ROWS][COLS];
//	unsigned int i, j, n, m, k = 0;
//	printf("n = "); scanf_s("%i", &n);
//	printf("m = "); scanf_s("%i", &m);
//	if (n > 0 && m > 0 && n < ROWS && m < COLS)
//	{
//		for (i = 0; i < n; i++)
//			for (j = 0; j < m; j++)
//			{
//				printf("M1[%i][%i] = ", i, j);
//				scanf_s("%f", &M1[i][j]);
//			}
//		printf("Source matrix M1:\n");
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < m; j++) 
//				printf("%9.3f", M1[i][j]);
//			printf("\n");
//		}
//		for (i = 0; i < n; i++)
//			for (j = 0; j < m; j++)
//					M2[j][n-1-i] = M1[i][j];
//		printf("Destination matrix M2:\n");
//		for (i = 0; i < m; i++)
//		{
//			for (j = 0; j < n; j++)
//				printf("%9.3f", M2[i][j]);
//			printf("\n");
//		}
//	}
//	else printf("Incorrect input!");
//	_getch();
//	return 0;
//}

//13
//#include <stdio.h>
//#include <conio.h>
//#define ROWS 10
//#define COLS 10
//main()
//{
//	float M1[ROWS][COLS], M2[ROWS][COLS];
//	unsigned int i, j, n, m, k = 0;
//	printf("n = "); scanf_s("%i", &n);
//	printf("m = "); scanf_s("%i", &m);
//	if (n > 0 && m > 0 && n < ROWS && m < COLS)
//	{
//		for (i = 0; i < n; i++)
//			for (j = 0; j < m; j++)
//			{
//				printf("M1[%i][%i] = ", i, j);
//				scanf_s("%f", &M1[i][j]);
//			}
//		printf("Source matrix M1:\n");
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < m; j++) 
//				printf("%9.3f", M1[i][j]);
//			printf("\n");
//		}
//		for (i = 0; i < n; i++)
//			for (j = 0; j < m; j++)
//				M2[m-1-j][i] = M1[i][j];
//		printf("Destination matrix M2:\n");
//		for (i = 0; i < m; i++)
//		{
//			for (j = 0; j < n; j++)
//				printf("%9.3f", M2[i][j]);
//			printf("\n");
//		}
//	}
//	else printf("Incorrect input!");
//	_getch();
//	return 0;
//}


//14
//#include <stdio.h>
//#include <conio.h>
//#define ROWS 10
//#define COLS 10
//main()
//{
//	float M1[ROWS][COLS], M2[ROWS][COLS];
//	unsigned int i, j, n, m, k = 0;
//	printf("n = "); scanf_s("%i", &n);
//	printf("m = "); scanf_s("%i", &m);
//	if (n > 0 && m > 0 && n < ROWS && m < COLS)
//	{
//		for (i = 0; i < n; i++)
//			for (j = 0; j < m; j++)
//			{
//				printf("M1[%i][%i] = ", i, j);
//				scanf_s("%f", &M1[i][j]);
//			}
//		printf("Source matrix M1:\n");
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < m; j++) 
//				printf("%9.3f", M1[i][j]);
//			printf("\n");
//		}
//		for (i = 0; i < n; i++) 
//			for (j = 0; j < m; j++)
//				M2[n-1-i][m-1-j] = M1[i][j];	
//		printf("Destination matrix M2:\n");
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < m; j++)
//				printf("%9.3f", M2[i][j]);
//			printf("\n");
//		}
//	}
//	else printf("Incorrect input!");
//	_getch();
//	return 0;
//}

//15
//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//#define N 10
//
//main() {
//	int  M1[N][N], M2[N][N];
//	unsigned int i, j, n, k;
//	printf("n = "); scanf_s("%i", &n);
//	if (n > 0 && n < N) {
//		printf("Source matrix M1:\n");
//		srand((unsigned)time(0));
//		for (i = 0; i < n; i++) {
//			for (j = 0; j < n; j++)
//			{
//				M1[i][j] = rand();
//				printf("%10i", M1[i][j]);
//			}
//			printf("\n");
//		}
//		for (i = 0; i < n; i++)
//			M2[0][i] = M1[i][i];
//		for (i = 0; i < n; i++)
//			M2[1][i] = M1[i][n - 1 - i];				
//		printf("Destination matrix M2:\n");
//		for (i = 0; i < 2; i++)
//		{
//			for (j = 0; j < n; j++)
//				printf("%10i", M2[i][j]);
//			printf("\n");
//		}
//	}
//	else printf("Incorrect input!");
//	_getch();
//	return 0;
//}

//16
//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//#define N 10
//
//main() {
//	float  M1[N][N], M2[N][N];
//	unsigned int i, j, n;
//	printf("n = "); scanf_s("%i", &n);
//	if (n > 0 && n < N) {
//		for (i = 0; i < n; i++)
//			for (j = 0; j < n; j++)
//			{
//				printf("M1[%i][%i] = ", i, j);
//				scanf_s("%f", &M1[i][j]);
//			}
//		printf("Source matrix M1:\n");
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//				printf("%9.3f", M1[i][j]);
//			printf("\n");
//		}
//		for (i = 0; i < n; i++)
//			M2[i][0] = M1[i][n - 1 - i];
//		for (i = 0; i < n; i++)
//			M2[i][1] = M1[i][i];				
//		printf("Destination matrix M2:\n");
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < 2; j++)
//				printf("%9.3lf", M2[i][j]);
//			printf("\n");
//		}
//	}
//	else printf("Incorrect input!");
//	_getch();
//	return 0;
//}

//17
//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//#define N 10
//
//main() {
//	int  M[N][N];
//	unsigned int i, j, n;
//	printf("n = "); scanf_s("%i", &n);
//	if (n > 0 && n < N) {
//		for (i = 0; i < n; i++)
//			for (j = 0; j < n; j++)
//			{
//				printf("M1[%i][%i] = ", i, j);
//				scanf_s("%i", &M[i][j]);
//			}
//		printf("Source matrix M:\n");
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//				printf("%10i", M[i][j]);
//			printf("\n");
//		}
//		for (i = 0; i < n; i++)
//		{
//			M[i][i] ^= M[i][n -  1- i];
//			M[i][n - 1 - i] ^= M[i][i];
//			M[i][i] ^= M[i][n - 1 - i];
//		}
//
//		printf("Destination matrix M:\n");
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//				printf("%10i", M[i][j]);
//			printf("\n");
//		}
//	}
//	else printf("Incorrect input!");
//	_getch();
//	return 0;
//}

//18
//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//#include <math.h>
//#define ROWS 10
//#define COLS 10
//
//main()
//{
//	int matrix[ROWS][COLS], x;
//	unsigned int i, j, n, m;
//	srand((unsigned)time(0));
//	x = rand();
//	printf("x = %i\n", x);
//	printf("n = "); scanf_s("%i", &n);
//	printf("m = "); scanf_s("%i", &m);
//	if (n > 0 && m > 0 && n < ROWS && m < COLS)
//	{
//		for (i = 0; i < n; i++)
//			for (j = 0; j < m; j++)
//			{
//				printf("m[%i][%i] = ", i, j);
//				scanf_s("%i", &matrix[i][j]);		
//			}
//		printf("Source matrix:\n");
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < m; j++) 
//				printf("%10i", matrix[i][j]);
//			printf("\n");
//		}
//		for (i = 0; i < n; i++)
//			for (j = 0; j < m; j++)
//				if (matrix[i][j] == x)
//					matrix[i][j] = 0;
//		printf("Destination matrix:\n");
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < m; j++)
//				printf("%10i", matrix[i][j]);
//			printf("\n");
//		}
//	}
//	else printf("Incorrect input!");
//	_getch();
//	return 0;
//}

//19
//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//#include <math.h>
//#define ROWS 10
//#define COLS 10
//
//main()
//{
//	float M1[ROWS][COLS], M2[ROWS][COLS];
//	unsigned int i, j, n, m, x;
//	srand((unsigned)time(0));
//	x = rand();
//	printf("x = %i\n", x);
//	printf("n = "); scanf_s("%i", &n);
//	printf("m = "); scanf_s("%i", &m);
//	if (n > 0 && m > 0 && n < ROWS && m < COLS)
//	{
//		for (i = 0; i < n; i++)
//			for (j = 0; j < m; j++)
//			{
//				printf("m[%i][%i] = ", i, j);
//				scanf_s("%f", &M1[i][j]);		
//			}
//		printf("Source matrix M1:\n");
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < m; j++) 
//				printf("%15.3f", M1[i][j]);
//			printf("\n");
//		}
//		for (i = 0; i < n; i++)
//			for (j = 0; j < m; j++)
//				M2[i][j] = x * M1[i][j];
//		printf("Destination matrix M2:\n");
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < m; j++)
//				printf("%15.3f", M2[i][j]);
//			printf("\n");
//		}
//	}
//	else printf("Incorrect input!");
//	_getch();
//	return 0;
//}

//20
//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//#define ROWS 10
//#define COLS 10
//main()
//{
//	float M[ROWS][COLS], t;
//	unsigned int i, j, n, m;
//	printf("n = "); scanf_s("%i", &n);
//	printf("m = "); scanf_s("%i", &m);
//	if (n > 0 && m > 0 && n < ROWS && m < COLS)
//	{
//		srand((unsigned)time(0));
//		for (i = 0; i < n; i++)
//			for (j = 0; j < m; j++)
//				M[i][j] = ((float)rand() / RAND_MAX) * RAND_MAX;
//		printf("Source matrix M:\n");
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < m; j++) 
//				printf("%15.3f", M[i][j]);
//			printf("\n");
//		}
//		for (i = 0; i < m; i++)
//		{
//			t = M[0][i];
//			M[0][i] = M[n - 1][i];
//			M[n - 1][i] = t;
//		}
//		printf("Destination matrix M:\n");
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < m; j++)
//				printf("%15.3f", M[i][j]);
//			printf("\n");
//		}
//	}
//	else printf("Incorrect input!");
//	_getch();
//	return 0;
//} 

//21
/*#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <limits.h>
#define ROWS 10
#define COLS 10
main()
{
	float M[ROWS][COLS], min = INT_MAX;
	unsigned int i, j, n, m, minI;
	printf("n = "); scanf_s("%i", &n);
	printf("m = "); scanf_s("%i", &m);
	if (n > 0 && m > 0 && n < ROWS && m < COLS)
	{
		for (i = 0; i < n; i++)
			for (j = 0; j < m; j++)
			{
				printf("m[%i][%i] = ", i, j);
				scanf_s("%f", &M[i][j]);
				if (min > M[i][j]) {
					min = M[i][j];
					minI = i;
				}					
			}
		printf("Source matrix M:\n");
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < m; j++) 
				printf("%15.3f", M[i][j]);
			printf("\n");
		}
		printf("min = %.3f\n", min);
		for (i = 0; i < m; i++)
			printf("%15.3f", M[minI][i]);
	}
	else printf("Incorrect input!");
	_getch();
	return 0;
}*/ 


//22
//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//#include <limits.h>
//#define ROWS 10
//#define COLS 10
//main()
//{
//	float M[ROWS][COLS], max = INT_MIN;
//	unsigned int i, j, n, m, maxI;
//	printf("n = "); scanf_s("%i", &n);
//	printf("m = "); scanf_s("%i", &m);
//	if (n > 0 && m > 0 && n < ROWS && m < COLS)
//	{
//		for (i = 0; i < n; i++)
//			for (j = 0; j < m; j++)
//			{
//				M[i][j] = rand();
//				if (max < M[i][j]) {
//					max = M[i][j];
//					maxI = j;
//				}					
//			}
//		printf("Source matrix M:\n");
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < m; j++) 
//				printf("%15.3f", M[i][j]);
//			printf("\n");
//		}
//		printf("\nmax = %.3f\n\n", max);
//		for (i = 0; i < n; i++)
//			printf("%15.3f\n", M[i][maxI]);
//	}
//	else printf("Incorrect input!");
//	_getch();
//	return 0;
//}

//23
//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//#include <limits.h>
//#define N 10
//#define MAX 100
//main()
//{
//	unsigned int i, j, n, x, k = 0, Iindex[MAX], Jindex[MAX], M[N][N];
//	printf("n = "); scanf_s("%i", &n);
//	srand((unsigned)time(0));
//	x = rand();
//	printf("x = %i\n", x);
//	if (n > 0 && n < N)
//	{
//		for (i = 0; i < n; i++)
//			for (j = 0; j < n; j++)
//			{
//				printf("M[%i][%i] = ", i, j);
//				scanf_s("%i", &M[i][j]);
//			}	
//		printf("Source matrix M:\n");
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++) 
//				printf("%10i", M[i][j]);
//			printf("\n");
//		}
//		for (i = 0; i < n; i++)
//			if (M[i][i] == x) {
//				Iindex[k] = i;
//				Jindex[k++] = i;
//			}	
//		for (i = 0, j=n-1; i < n; i++, j--)
//			if (M[i][j] == x) {
//				Iindex[k] = i;
//				Jindex[k++] = j;
//			}
//		printf("Indexes:\n");
//		for (i = 0; i < k; i++)
//			printf("%i  %i\n", Iindex[i], Jindex[i]);
//	}
//	else printf("Incorrect input!");
//	_getch();
//	return 0;
//}

//24
//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//#include <limits.h>
//#define N 10
//#define MAX 100
//main()
//{
//	unsigned int i, j, n, x;
//	float M[N][N];
//	printf("n = "); scanf_s("%i", &n);
//	printf("x = "); scanf_s("%i", &x);
//	if (n > 0 && n < N && x > 0 && x < n)
//	{
//		for (i = 0; i < n; i++)
//			for (j = 0; j < n; j++)
//			{
//				printf("M[%i][%i] = ", i, j);
//				scanf_s("%f", &M[i][j]);
//			}	
//		printf("Source matrix M:\n");
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++) 
//				printf("%15.3f", M[i][j]);
//			printf("\n");
//		}
//		printf("Row:\n");
//		for (i = 0; i < n; i++)
//			printf("%15.3f", M[x][i]);
//		printf("\nCol:\n");
//		for (i = 0; i < n; i++)
//			printf("%15.3f\n", M[i][x]);
//			
//	}
//	else printf("Incorrect input!");
//	_getch();
//	return 0;
//}

//25
//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//#define ROWS 10
//#define COLS 10
//
//main()
//{
//	unsigned int i, j, n, m;
//	float M[ROWS][COLS], x;
//	printf("n = "); scanf_s("%i", &n);
//	printf("m = "); scanf_s("%i", &m);
//	printf("x = "); scanf_s("%f", &x);
//	if (n > 0 && n < ROWS && m > 0 && m < COLS)
//	{
//		for (i = 0; i < n; i++)
//			for (j = 0; j < m; j++)
//				M[i][j] = ((float)rand() / RAND_MAX) * RAND_MAX;				
//		printf("Source matrix M:\n");
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < m; j++) 
//				printf("%15.3f", M[i][j]);
//			printf("\n");
//		}
//		for (i = 0; i < n; i++)		
//			for (j = 0; j < m; j++)
//				if (!(i == 0 || j == 0 || i== n - 1 || j == m - 1))
//					M[i][j] = x;
//		printf("Destination matrix M:\n");
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < m; j++)
//				printf("%15.3f", M[i][j]);
//			printf("\n");
//		}
//	}
//	else printf("Incorrect input!");
//	_getch();
//	return 0;
//}