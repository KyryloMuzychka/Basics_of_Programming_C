/* lr03.c */

/* lr03_v01.c */
//#include <stdio.h>
//#define _USE_MATH_DEFINES
//#include <math.h>
//#include <stdlib.h>
//main()
//{
//	double x, y, a;
//	printf("y="); scanf_s("%lf", &y);
//	srand((unsigned)time(0));
//	x = (double)rand() / RAND_MAX;
//	printf("x=%lf\n", x);
//	a = (1 + powf(y, 5)) * ((x + y / (sqrtf(fabs(x))) + 4) / (expf(-x - 2) + 1 / (x * x + 4)));
//	printf("a=%lf\n", a);
//	printf("Whole a = %lf\n", ceil(a));
//	_getch();
//	return 0;
//}



/* lr03_v02.c */
//#include <stdio.h>
//#define _USE_MATH_DEFINES
//#include <math.h>
//#include <stdlib.h>
//#include <conio.h>
//main()
//{
//	double x, y, a, b;
//	int n;
//	printf("y="); scanf_s("%lf", &y);
//	printf("n="); scanf_s("%i", &n);
//	srand((unsigned)time(0));
//	x = rand() % (n + 1);
//	printf("x=%lf\n", x);
//	a = (1 + pow(sin(x + y), 2)) / (2 + fabs(x - 2 * x / (1 + pow(x, 2) * pow(y, 3)))) + pow(x, 1.0/3);
//	b = modf(a, &b);
//	printf("a=%lf\n", a);
//	printf("b=%lf\n", b);
//	_getch();
//	return 0;
//}


/* lr03_v03.c */
//#include <stdio.h>
//#define _USE_MATH_DEFINES
//#include <math.h>
//#include <stdlib.h>
//#include <conio.h>
//main()
//{
//	double y, z, a, b;
//	int x, n;
//	printf("y = "); scanf_s("%lf", &y);
//	printf("z = "); scanf_s("%lf", &z);
//	printf("n = "); scanf_s("%i", &n);
//	srand((unsigned)time(0));
//	x = rand() % (n + 1);
//	a = log(fabs((y - sqrtf(fabs(x))) * (x - y / (pow(z, 5) + (x * x) / 4))));
//	b = modf(a, &b);
//	printf("a=%lf\n", a);
//	printf("whole = %lf\n", a - b);
//	_getch();
//	return 0;
//}


/* lr03_v06.c */
//#include <stdio.h>
//#include <stdlib.h>
//#include <conio.h>
//#define _USE_MATH_DEFINES
//#include <math.h>
//main()
//{
//	double x, y, z, a, b;
//	printf("x = "); scanf_s("%lf", &x);
//	printf("y = "); scanf_s("%lf", &y);
//	printf("z = "); scanf_s("%lf", &z);
//	a = (sqrt(fabs(x - 1)) - pow(fabs(z), 1.0 / 3)) / (1 + (x * x) / 2 + (y * y) / 4) + powf(z, 4);
//	b = (3 + exp(y - 1)) / (1 + powf(x, 5) * fabs((y - tan(z))));
//	printf("a = %lf\n", a);
//	printf("b = %lf\n", b);
//	printf("a = %lf\n", ceil(a));
//	printf("b = %lf\n", ceil(b));
//	printf("%i\n", (int)ceil(a) % (int)ceil(b));
//	_getch();
//	return 0;
//}


/* lr03_v07.c */
//#include <stdio.h>
//#define _USE_MATH_DEFINES
//#include <math.h>
//main()
//{
//	double x, y, a;
//	long int n;
//	printf("x=");
//	scanf_s("%lf", &x);
//	printf("y=");
//	scanf_s("%lf", &y);
//	printf("n=");
//	scanf_s("%ld", &n);
//	a = (2 * cos(x - M_PI / 6)) / (1.0/2 + powf(sin(y), 2)) + 10*x*y;
//	printf("a=%lf\n", a);
//	printf("Whole a = %li\n", (long int)ceil(a));
//	printf("Whole a / n = %li", (long int)ceil(a) / n);
//	_getch();
//	return 0;
//}

/* lr03_v08.c */
//#include <stdio.h>
//#define _USE_MATH_DEFINES
//#include <math.h>
//main()
//{
//	int y, n, x;
//	printf("y = ");
//	scanf_s("%i", &y);
//	x = 2 * pow(y, 4) - 3 * pow(y, 3) + 4 * pow(y, 2) - 5 * y + 6;
//	srand((unsigned)time(0));
//	n = rand() % (x + 1);
//	printf("x = %i, n = %i", x, n);
//	_getch();
//	return 0;
//}



/* lr03_v09.c */
//#include <stdio.h>
//#define _USE_MATH_DEFINES
//#include <math.h>
//main()
//{
//	double x, y, a;
//	int n, k;
//	printf("x = ");
//	scanf_s("%lf", &x);
//	printf("y = ");
//	scanf_s("%lf", &y);
//	printf("n = ");
//	scanf_s("%i", &n);
//	a = (2 * sin(x - M_PI / 6)) / (1.0 / 3 + pow(cos(y), 5)) + x * y * y;
//	srand((unsigned)time(0));
//	k = rand() % (n + 1);
//	printf("%i", (int)ceil(a) / (k + 1));
//	_getch();
//	return 0;
//}



/* lr03_v10.c */
//#include <stdio.h>
//#define _USE_MATH_DEFINES
//#include <math.h>
//main()
//{
//	double x, y, a, b;
//	printf("x = ");
//	scanf_s("%lf", &x);
//	printf("y = ");
//	scanf_s("%lf", &y);
//	a = pow(x, 5) + pow(x, 4) - 3 * pow(x, 3) + 4 * pow(x, 2) - 5 * x + 6;
//	b = 9 * pow(y, 3) - 7 * pow(y, 2) + 5 * y - 3;
//	printf("%i", (int)ceil(a) / (int)ceil(b));
//	_getch();
//	return 0;
//}

/* lr03_v11.c */
//#include <stdio.h>
//#define _USE_MATH_DEFINES
//#include <math.h>
//main()
//{
//	int n, x, y;
//	double a;
//	printf("n = ");
//	scanf_s("%i", &n);
//	srand((unsigned)time(0));
//	x = rand() % (n + 1);
//	y = rand() % (n + 1);
//	a = sin(fabs((y - sqrtf(fabs(x))) * (x - y / (y * y + pow(x, 7) / 4))));
//	printf("x = %i, y = %i\n", x, y);
//	printf("a = %lf", a);
//	_getch();
//	return 0;
//}


/* lr03_v12.c */
//#include <stdio.h>
//#define _USE_MATH_DEFINES
//#include <math.h>
//#include <stdlib.h>
//main()
//{
//	double x, a, y;
//	printf("x = "); scanf_s("%lf", &x);
//	srand((unsigned)time(0));
//	y = (double)rand() / RAND_MAX;
//	a = (2 * pow(y, 3) - pow(y, 2) + 3 * y - 1) / (fabs(x * x - 2 * x + 1) + sin(y));
//	printf("a = %lf, whole a = %lf", a, ceil(a));
//	_getch();
//	return 0;
//}






/* lr03_v13.c */
//#include <stdio.h>
//#include <math.h>
//main() 
//{
//	double a, b, x, y;
//	int n;
//	printf("y="); scanf_s("%lf", &y);
//	printf("n="); scanf_s("%i", &n);
//	srand((unsigned)time(0));
//	x = rand() % (n + 1);
//	a = (cos(powf(y, x)) + x - y/3) / (2*x*x - y + 1);
//	printf("a=%lf\n", a);
//	printf("%lf\n", modff(a, &b));
//	_getch();
//	return 0;
//}



/* lr03_v14.c */
//#include <stdio.h>
//#define _USE_MATH_DEFINES
//#include <math.h>
//#include <stdlib.h>
//main()
//{
//	double y, z, a;
//	int n, x;
//	printf("y = "); scanf_s("%lf", &y);
//	printf("z = "); scanf_s("%lf", &z);
//	printf("n = "); scanf_s("%i", &n);
//	srand((unsigned)time(0));
//	x = rand() % (n + 1);
//	a = (5 * pow(x, 5) * log(y) + 3) / (4 * pow(y, 2) * exp(sin(z)) - x / (y + 1));
//	printf("a = %lf, %lf", a, floor(a));
//	_getch();
//	return 0;
//}



/* lr03_v17.c */
//#include <stdio.h>
//#define _USE_MATH_DEFINES
//#include <math.h>
//#include <stdlib.h>
//main()
//{
//	double x, y, z, a, b;
//	int c;
//	printf("x = "); scanf_s("%lf", &x);
//	printf("y = "); scanf_s("%lf", &y);
//	printf("z = "); scanf_s("%lf", &z);
//	a = 5 * x * ((sqrtf(fabs(x - 1)) - pow(fabs(x), 1.0 / 3)) / (1 + pow(x, 2) / 2 + pow(y, 2) / 4));
//	b = 3 * y * ((2 + exp(2 * y - 3)) / (1 + pow(x, 5) * fabs(y - tan(z))));
//	c = (int)ceil(a) % (int)ceil(b);
//	printf("a = %lf\nb = %lf\n whole a = %lf, whole b = %lf, a%%b = %i", a, b, ceil(a), ceil(b), c);
//	_getch();
//	return 0;
//}

/* lr03_v18.c */
//#include <stdio.h>
//#define _USE_MATH_DEFINES
//#include <math.h>
//#include <stdlib.h>
//main()
//{
//	int y, x, n;
//	printf("y = "); scanf_s("%i", &y);
//	x = pow(y, 4) + 3 * pow(y, 3) + 9 * pow(y, 2) + y + 7;
//	srand((unsigned)time(0));
//	n = rand() % (x + 1);
//	printf("n = %i", n);
//	_getch();
//	return 0;
//}


/* lr03_v19.c */
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#define _USE_MATH_DEFINES
//#include <math.h>
//main()
//{
//	unsigned long int n, x, y;
//	double a;
//	printf("n=");
//	scanf_s("%ld", &n);
//	srand((unsigned)time(0));
//	x = rand() % (n + 1);
//	printf("x=%ld\n", x);
//	y = rand() % (n + 1);
//	printf("y=%ld\n", y);
//	a = cos(fabsl((pow(y, 3) + sqrt(labs(x))) * (x - y / (sin(y * y) + pow(x, 5) / 5)))) + log10(pow(x, 0.25) * y);
//	printf("a=%lf", a);
//	_getch();
//	return 0;
//}

/* lr05_v20.c*/
//#include <stdio.h>
//#define _USE_MATH_DEFINES
//#include <math.h>
//
//main()
//{
//	double x, y, a, t;
//	printf("x=");
//	scanf_s("%lf", &x);
//	printf("y=");
//	scanf_s("%lf", &y);
//	a = fabs( (pow(sin(fabs(3 * pow(x, 3) + 2 * y * y - 6)), 3)) / (sqrt(pow(3 * pow(x, 3) + 2 * y * y - 6, 2) + M_PI)) );
//	printf("a=%lf\n", a);
//	t = modf(a, &t);
//	printf("t=%lf", t);	
//}


/* lr03_v21.c */
//#include <stdio.h>
//#include <math.h>
//main()
//{
//	int z;
//	double x, y, a;
//	printf("x = "); scanf_s("%lf", &x);
//	printf("y = "); scanf_s("%lf", &y);
//	z = (int)floor(x) / (int)floor(y);
//	printf("%i\n", z);
//	a = pow(z, 5) + pow(z, 4) - 5.4 * pow(z, 3) + 6.5 * z * z - 6.7 * z + 8.7;
//	printf("%lf\n", a);
//	_getch();
//	return 0;
//}



/* lr03_v22.c */
//#include <stdio.h>
//#include <math.h>
//main()
//{
//	int z;
//	double x, y, a;
//	printf("x = "); scanf_s("%lf", &x);
//	printf("y = "); scanf_s("%lf", &y);
//	z = (int)floor(x) % (int)floor(y);
//	printf("%i\n", z);
//	a = pow(z, 4) + 1.09 * pow(z, 3) + 7.03 * pow(z, 2) + 2.01 * z - 5.05;
//	printf("%lf\n", a);
//	_getch();
//	return 0;
//}


/* lr03_v23.c */
//#include <stdio.h>
//#include <math.h>
//main()
//{
//	int x, y, z;
//	double a;
//	printf("x = "); scanf_s("%i", &x);
//	printf("y = "); scanf_s("%i", &y);
//	srand((unsigned)time(0));
//	z = rand() % (x * y + 1);
//	a = exp(pow(z, 2)) * (pow((x + 10 * y), 1.0 / 3) / (z - x*y));
//	printf("%i\n%lf\n", z, a);
//	_getch();
//	return 0;
//}


/* lr03_v24.c */
//#include <stdio.h>
//#define _USE_MATH_DEFINES
//#include <math.h>
//#include <stdlib.h>
//main()
//{
//	int x, b, n;
//	double y, a;
//	printf("x = "); scanf_s("%i", &x);
//	printf("y = "); scanf_s("%lf", &y);
//	a = x + fabs((pow(log(fabs(2*pow(x,3)+3*y*y-7)),3))/(pow(x*y,1.0/3)*sqrt(M_PI+pow(3*pow(x,3)+2*y*y-6,2))));
//	srand((unsigned)time(0));
//	n = rand() % (x + 1);
//	b = (int)ceil(a) * n;
//	printf("%i\n", n);
//	printf("%lf\n", a);
//	printf("%i", b);
//	_getch();
//	return 0;
//}

/* lr03_v25.c */
//#include <stdio.h>
//#include <math.h>
//main()
//{
//	int z, y, a;
//	double result;
//	printf("z="); scanf_s("%i", &z);
//	y = pow(z, 4) + 10 * pow(z, 3) + 7*pow(z, 2) + 2 * z - 5;
//	srand((unsigned)time(0));
//	a = rand() % (y + 1);
//	result = (double)a / z;
//	printf("%lf\n", result);
//	printf("%lf\n", ceil(result));
//	_getch();
//	return 0;
//}

// 0000 0000
// первый - старший
// последний - младший