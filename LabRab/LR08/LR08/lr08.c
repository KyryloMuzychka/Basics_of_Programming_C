// 1
//#include <stdio.h>
//#include <conio.h>
//#include <math.h>
//
//double max(double x, double y);
//
//main()
//{
//	double a, b, c;
//	printf("a = "); scanf_s("%lf", &a);
//	printf("b = "); scanf_s("%lf", &b);
//	printf("c = "); scanf_s("%lf", &c);
//	printf("%lf", (b * pow(max(pow(a, 3), b), 5)) / c + pow(c, 2) * sqrt(max(a + c, b)));
//	_getch();
//	return 0;
//}
//
//double max(double x, double y)
//{
//	if (x - y > 0)
//		return x;
//	else if (x - y < 0)
//		return y;
//	else
//		return x;
//}



//2 
//#include <stdio.h>
//#include <conio.h>
//#include <math.h>
//
//int GCD(int x, int y);
//
//main()
//{
//	int a, b, c, result;
//	printf("a = "); scanf_s("%i", &a);
//	printf("b = "); scanf_s("%i", &b);
//	printf("c = "); scanf_s("%i", &c);
//	printf("GCD = %i\n", GCD(a, b));
//	result = pow(GCD(a + c, b * b), 3) + pow(GCD(b, c), 2) - GCD(a * b, a * c) * GCD(a + b + c, b * b * c);
//	printf("%i", result);
//	_getch();
//	return 0;
//}
//
//int GCD(int x, int y)
//{
//	do
//	{
//		if (x > y)
//			x -= y;
//		if (x < y)
//			y -= x;
//	} while (x != y);
//}


//3 
//#include <stdio.h>
//#include <conio.h>
//#include <math.h>
//
//double nearest(double x, double y);
//
//main()
//{
//	int n;
//	double x, y, min;
//	printf("n = "); scanf_s("%i", &n);
//	printf("(x1, y1) "); scanf_s("%lf %lf", &x, &y);
//	min = nearest(x, y);
//	for (int i = 2; i <= n; i++)
//	{
//		printf("(x%i, y%i) ", i, i); scanf_s("%lf %lf", &x, &y);
//		if (nearest(x, y) < min) min = nearest(x, y);
//	}
//	printf("the nearest = %lf", min);
//}
//
//double nearest(double x, double y)
//{
//	double l;
//	l = sqrt(pow(x, 2) + pow(y, 2));
//	return l;
//}



//4
//#include <stdio.h>
//#include <conio.h>
//#include <math.h>
//
//double min(double x, double y);
//double max(double x, double y);
//
//main()
//{
//	double a, b, c;
//	printf("a = "); scanf_s("%lf", &a);
//	printf("b = "); scanf_s("%lf", &b);
//	printf("c = "); scanf_s("%lf", &c);
//	printf("%lf", max(pow(min(a * a, b + c),3), pow(min(a * b, c * c * c), 2)));
//}
//
//double min(double x, double y)
//{
//	if (x - y > 0)
//		return y;
//	else if (x - y < 0)
//		return x;
//	else
//		return x;
//}
//
//double max(double x, double y)
//{
//	if (x - y > 0)
//		return x;
//	else if (x - y < 0)
//		return y;
//	else
//		return x;
//}



//5
//#include <stdio.h>
//#include <conio.h>
//#include <math.h>
//
//int common(int x);
//
//main()
//{
//	int n, a, s = 0, z = 0, i;
//	printf("n = "); scanf_s("%i", &n);
//	for (i = 1; i <= n; i++)
//	{
//		printf("a%i = ", i); scanf_s("%i", &a);
//		if (common(a))
//		{
//			s += a;
//			z++;
//		}
//	}
//	if (z)
//		printf("result = %lf", (double)s / z);
//	else
//		printf("There isn't any common numbers");
//	
//}
//
//int common(int x)
//{
//	int c = 0;
//	for (int j = 1; j <= x; j++)
//		if (!(x % j)) c++;
//	if (c == 2)
//		return 1;
//	else
//		return 0;
//}


//6
//#include <stdio.h>
//#include <conio.h>
//#include <math.h>
//
//double RightTriangle(int x, int y, int z);
//
//main()
//{
//	int a, b, c;
//	double v = 0;
//
//	for (int i = 1; i <= 3; i++)
//	{
//		printf("a%i, b%i, c%i: ", i, i, i); scanf_s("%i %i %i", &a, &b, &c);
//		if (RightTriangle(a, b, c))
//			v += RightTriangle(a, b, c);
//	}
//	if (v)
//		printf("%lf", v);
//	else
//		printf("There isn't any right triangle");
//}
//
//double RightTriangle(int x, int y, int z)
//{
//	double s;
//	if (z * z == x * x + y * y)
//	{
//		s = (double)(x * y) / 2;
//		return s;
//	}
//	else
//		return 0;
//}


//7
//#include <stdio.h>
//#include <conio.h>
//
//int even(int x);
//
//main()
//{
//	int a, n, s = 0;
//	do {
//		printf("n = "); scanf_s("%i", &n);
//	} while (n <= 0);	
//	for (int i = 1; i <= n; i++)
//	{
//		printf("a%i = ", i); scanf_s("%i", &a);
//		if (even(a))
//			s += a;
//	}
//	printf("s = %i\n", s);
//	if (!even(s))
//		printf("It's the even number");
//	else
//		printf("It isn't the even number");
//	_getch();
//	return 0;
//}
//
//int even(int x)
//{
//	if (x % 2)
//		return 1;
//	else
//		return 0;
//}



//8. Дано натуральні числа n і x та послідовність генерованих натуральних чисел
//a1, a2, …, an(ai = 0…x).Визначити функцію обчислення суми цифр довільно -
//го натурального числа та за допомогою неї з’ясувати, який з членів генеро -
//ваної послідовності має найбільшу таку суму.

//#include <stdio.h>
//#include <stdlib.h>
//#include <conio.h>
//
//int SumNumbers(int x);
//
//main()
//{
//	int x, n, a, max, number;
//	do
//	{
//		printf("n = "); scanf_s("%i", &n);
//		printf("x = "); scanf_s("%i", &x);
//	} while (n <= 0 || x <= 0);
//	srand((unsigned)time(0));
//	a = rand() % (x + 1);
//	printf("a1 = %i\n", a);
//	max = SumNumbers(a);
//	number = a;
//	for (int i = 2; i <= n; i++)
//	{
//		a = rand() % (x + 1);
//		printf("a%i = %i\n", i, a);
//		if (max < SumNumbers(a))
//		{
//			max = SumNumbers(a);
//			number = a;
//		}
//			
//	}
//	printf("s = %i\nnumber = %i", max, number);
//	_getch();
//	return 0;
//}
//
//int SumNumbers(int x)
//{
//	int s = 0;
//	while (x)
//	{
//		s += x % 10;
//		x /= 10;
//	}
//	return s;
//}

//9. На площині задано три точки з дійсними координатами(x1, y1), (x2, y2), та
//(x3, y3).Знайти площу заданого зазначеними координатами трикутника, ви -
//значивши функцію розрахунку довжини його сторін.Кожну пару координат
//точок ввести через пробіл.

//#include <stdio.h>
//#include <conio.h>
//#include <math.h>
//
//double Length(double x1, double y1, double x2, double y2);
//
//main()
//{
//	double x1, x2, x3, y1, y2, y3, p, s, a, b, c;
//	printf("x1, y1, x2, y2, x3, y3 : ");
//	scanf_s("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);
//	a = Length(x1, y1, x2, y2);
//	b = Length(x2, y2, x3, y3);
//	c = Length(x3, y3, x1, y1);
//	p =  (a + b + c) / 2;
//	s = sqrt(p * (p - a) * (p - b) * (p - c));
//	printf("s = %lf", s);
//	_getch();
//	return 0;
//}
//
//double Length(double x1, double y1, double x2, double y2)
//{
//	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
//}





//10
//#include <stdio.h>
//#include <conio.h>
//#include <math.h>
//
//Part(double x, double y);
//
//main()
//{
//	double x, y;
//	int n;
//	printf("n = "); scanf_s("%i", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		do {
//			printf("(x%i, y%i): ", i, i); scanf_s("%lf %lf", &x, &y);
//		} while (!x || !y);
//		Part(x,y);
//	}
//	_getch();
//	return 0;
//}
//
//Part(double x, double y)
//{
//	if (x > 0 && y > 0)
//		printf("1\n");
//	else if (x < 0 && y < 0)
//		printf("3\n");
//	else if (x < 0 && y > 0)
//		printf("2\n");
//	else if (x > 0 && y < 0)
//		printf("4\n");
//}



//11. Дано натуральні числа n і x та послідовність генерованих натуральних чисел
//a1, a2, …, an(ai = 0…x).Визначити функцію обчислення кількості цифр дові -
//льного натурального числа та за допомогою неї з’ясувати, який з членів ге -
//нерованої послідовності має найменшу таку кількість.
//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//
//int SumNumbers(int x);
//
//main()
//{
//	int n, x, a, min, b;
//	do {
//		printf("n = "); scanf_s("%i", &n);
//		printf("x = "); scanf_s("%i", &x);
//	} while (n <= 0 || x <= 0);
//	srand((unsigned)time(0));
//	a = rand() % (x + 1);
//	printf("a1 = %i\n", a);
//	b = a;
//	min = SumNumbers(a);
//	for (int i = 2; i <= n; i++)
//	{
//		//srand((unsigned)time(0));
//		a = rand() % (x + 1);
//		printf("a%i = %i\n", i, a);
//		if (min > SumNumbers(a))
//		{
//			b = a;
//			min = SumNumbers(a);
//		}	
//	}
//	printf("a = %i\n%i", b, min);
//	_getch();
//	return 0;
//}
//
//int SumNumbers(int x)
//{
//	int y = 0;
//	while (x)
//	{
//		x /= 10;
//		y++;
//	}
//	return y;
//}



//12. Дано цілі числа a, b і c(a < b < c).Визначити функцію Sum(x, y) знаходження
//	суми всіх цілих чисел від x до y включно та обчислити
//	Sum3(a, b)....

//#include <stdio.h>
//#include <conio.h>
//#include <math.h>
//
//long int Sum(int x, int y);
//
//main()
//{
//	long int a, b, c, result;
//	do
//	{
//		printf("a = "); scanf_s("%li", &a);
//		printf("b = "); scanf_s("%li", &b);
//		printf("c = "); scanf_s("%li", &c);
//	} while (a > b || b > c || a > c);
//	printf("%li\n", Sum(a, b));
//	result = pow(Sum(a, b), 3) + 3 * pow(Sum(b, 2 * c), 2) - a * pow(b, 5) * Sum(a * b, b * c) * sqrt(Sum(a + b, b * b + c));
//	printf("%li", result);
//	_getch();
//	return 0;
//}
//
//long int Sum(int x, int y)
//{
//	long int sum = 0;
//	do
//	{
//		sum += x;
//		x++;
//	} while (x != y + 1);
//	return sum;
//}



//13
//#include <stdio.h>
//#include <conio.h>
//#include <math.h>
//
//double Sum(double x, double y, double h);
//
//main()
//{
//	double a, b, c, result;
//	do
//	{
//		printf("a = "); scanf_s("%lf", &a);
//		printf("b = "); scanf_s("%lf", &b);
//		printf("c = "); scanf_s("%lf", &c);
//	} while (a > b || b > c || a > c);
//	result = (a * pow(b, 3) * pow(Sum(a, b, a / b), 5) + 2 * c * c * pow(Sum(b, 3 * c, a / (4 * c)), 3) - pow(Sum(a * b, b * c, a / (b + c)), 1.0/3)) / (a * b * c * sqrt(Sum(2 * b - a, b * b + c, a / 3)));
//	printf("%lf", result);
//	_getch();
//	return 0;
//}
//
//double Sum(double x, double y, double h)
//{
//	double sum = 0;
//	do
//	{
//		sum += x;
//		x += h;
//	} while (x <= y);
//	return sum;
//}



//14. Два натуральних числа називаються «дружніми», якщо кожне з них дорівнює
//сумі дільників іншого за винятком самого числа.Дано натуральні числа a і b.
//Визначити функцію обчислення суми дільників довільного натурального чи -
//сла та за допомогою неї з’ясувати, чи є задані числа дружніми.Приклади пар
//дружніх чисел : 220 і 284, 1184 і 1210, 2620 і 2924, 5020 і 5564, …


//#include <stdio.h>
//#include <conio.h>
//
//int SumDividers(int x);
//
//main()
//{
//	int a, b, r;
//	do 
//	{
//		printf("a = "); scanf_s("%i", &a);
//		printf("b = "); scanf_s("%i", &b);
//	} while (a <= 0 || b <= 0);
//	if (a == SumDividers(b) && b == SumDividers(a))
//		printf("They are friendly");
//	else
//		printf("They are not friendly");
//	_getch();
//	return 0;
//}
//
//int SumDividers(int x)
//{
//	int v = x, dividers = 0;
//	for (int i = 1; i < v; i++)
//	{
//		x = v;
//		while (x > 0)
//		{
//			x -= i;
//		}
//		if (!x) dividers += i;
//	}
//	return dividers;
//}


//15. Дано ненульове дійсне число x та n кругів, радіус яких задано послідовністю
//генерованих дійсних чисел. Визначити функцію обчислення площі 
//круга за заданим радіусом та за допомогою неї з’ясувати, який з
//заданих кругів займає найбільшу поверхню.

//#include <stdio.h>
//#include <stdlib.h>
//#include <conio.h>
//#define _USE_MATH_DEFINES
//#include <math.h>
//
//double Square(int x);
//
//main()
//{
//	double a, max;
//	int n, x;
//	do
//	{
//		printf("x = "); scanf_s("%i", &x);
//		printf("n = "); scanf_s("%i", &n);
//	} while (x <= 0 || n <= 0);
//	srand((unsigned)time(0));
//	a = rand() % x; 
//	max = Square(a);
//	printf("a = %lf\n", a);
//	for (int i = 2; i <= n; i++)
//	{
//		a = rand() % x;
//		printf("a = %lf\n", a);
//		if (max < Square(a)) max = Square(a);
//	}
//	printf("max = %lf\n", max);
//	_getch();
//	return 0;
//}
//
//double Square(int x)
//{
//	return M_PI * x * x;
//}



//16

//#include <stdio.h>
//#include <stdlib.h>
//#include <conio.h>
//#define _USE_MATH_DEFINES
//#include <math.h>
//
//double Calc(double x, double y, int op);
//
//main()
//{
//	double a, b;
//	int op;
//	printf("a = "); scanf_s("%lf", &a);
//	printf("b = "); scanf_s("%lf", &b);
//	printf("op:\n1: +\n2: -\n3: *\n4: /\n");
//	do {
//		printf("op = "); scanf_s("%i", &op);
//	} while ((op > 4) || (op < 1));
//	printf("result = %lf\n", Calc(a, b, op));
//	_getch();
//	return 0;
//}
//
//double Calc(double x, double y, int op)
//{
//	double c;
//	switch (op)
//	{
//		case 1: c = x + y; break;
//		case 2: c = x - y; break;
//		case 3: c = x * y; break;
//		case 4: c = x / y; break;
//	}
//}







//17. Дано натуральні числа n, k, m та послідовність натуральних чисел a1, a2, …,
//an.Визначити функцію з’ясування кратності / некратності натуральних чисел
//та за допомогою неї порахувати кількість членів заданої послідовності, крат -
//них k і некратних m.

//#include <stdio.h>
//#include <conio.h>
//
//int Multiplicity(int x, int y);
//
//main()
//{
//	int a, n, k, m, sum = 0;
//	printf("n = "); scanf_s("%i", &n);
//
//	printf("k = "); scanf_s("%i", &k);
//	printf("m = "); scanf_s("%i", &m);
//	for (int i = 1; i <= n; i++)
//	{
//		printf("a%i = ", i); scanf_s("%i", &a);
//		if (Multiplicity(a, k) && !Multiplicity(a, m))
//			sum += 1;
//	}
//	printf("sum = %i", sum);
//	_getch();
//	return 0;
//}
//
//int Multiplicity(int x, int y)
//{
//	while (x > 0)
//	{
//		x -= y;
//	}
//	if (!x) 
//		return 1;
//	else 
//		return 0;
//}



//18. Дано генеровані ненульові натуральні числа a, b і c. Визначити функцію зна-
//ходження останньої цифри довільного натурального числа та за допомогою
//неї обчислити добуток останніх цифр генерованих чисел.
//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//
//int LastDigit(int x);
//
//main()
//{
//	int a, b, c, mult = 1;
//	srand((unsigned)time(0));
//	a = 1 + rand();
//	b = 1 + rand();
//	c = 1 + rand();
//	mult *= LastDigit(a) * LastDigit(b) * LastDigit(c);
//	printf("a = %i\n", a); 
//	printf("b = %i\n", b); 
//	printf("c = %i\n", c);
//	printf("mult = %i", mult);
//	_getch();
//	return 0;
//}
//
//int LastDigit(int x)
//{
//	return x % 10;
//}


//19. Дано ненульові натуральні числа a, b і c.Визначити функцію знаходження
//першої цифри довільного натурального числа та за допомогою неї обчислити
//суму перших цифр заданих чисел.
//#include <stdio.h>
//#include <conio.h>
//
//int FirstNumber(int x);
//
//main()
//{
//	int a, b, c;
//	do
//	{
//		printf("a = "); scanf_s("%i", &a);
//		printf("b = "); scanf_s("%i", &b);
//		printf("c = "); scanf_s("%i", &c);
//	} while (a <= 0 || b <= 0 || c <= 0);
//	printf("%i", FirstNumber(a) + FirstNumber(b) + FirstNumber(c));
//	_getch();
//	return 0;
//}
//
//int FirstNumber(int x)
//{
//	while (x > 9)
//		x /= 10;
//	return x;	
//}


