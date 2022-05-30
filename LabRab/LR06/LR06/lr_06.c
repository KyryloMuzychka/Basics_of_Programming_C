/* lr06_example */
//Дано натуральне число n. Обчислити суму ряду заформулою:
// s = 1 + (1/2)^2 + (1/3)^3 + ... + (1/n)^n
//#include <stdio.h>
//#include <conio.h>
//main()
//{
//	double s = 0, a, p;
//	int n, i, j;
//	printf("n=");  scanf_s("%i", &n);
//	for (i = 1; i <= n; i++)
//	{
//		p = 1.0 / i;
//		a = 1.0 / i;
//		for (j = 2; j <= i; j++) p *= a;
//		s += p;
//	}
//	printf("s=%lf", s);
//	_getch();
//	return 0;
//}


/* lr06_v01 */
// 1 Будь - яке натуральне число n(n > 7) можна отримати за
// формулою n = 3а + 5b, де а і b – натуральні числа.За заданим n
// знайти усі а і b.
//#include <stdio.h>
//#include <conio.h>
//main()
//{
//	int n, a, b;
//	do
//	{
//		printf("Enter a natural number bigger than 7 n=");  
//		scanf_s("%i", &n);
//	} while (n <= 7);
//	for (a = 0; a <= n / 3; a++)
//	{
//		for (b = 0; b <= n / 5; b++)
//		{
//			if ((3 * a + 5 * b) == n) printf("a=%i b=%i\n", a, b);
//		}
//	}
//	_getch();
//	return 0;
//}


/* lr06_v02 */
// 2. Дано дійсне число a(1 <= a <= 1, 29).Обчислити
// s = 1 + (1/2)^2 + (1/3)^3 ..., доки S не стане більше за a, та
// визначити кількість задіяних членів ряду.
//#include <stdio.h>
//#include <conio.h>
//main()
//{
//	double c, a, b, s = 0, p = 0;
//	do
//	{
//		printf("a ="); 
//		scanf_s("%lf", &a);
//	} while (a < 1 || a > 1.29);
//	for (int i = 1; s <= a; i++)
//	{
//		c = b = 1.0 / i;
//		for (int j = 2; j <= i; j++)  c *= b;
//		s += c; p++;
//	}
//	printf("s = %lf, p = %lf", s, p);
//	_getch();
//	return 0;
//}




/* lr06_v03 */
// 3 Дано натуральне число n. Обчислити
// s = 1 + (1/2)^n + (1/n)^n
//#include <stdio.h>
//#include <conio.h>
//main()
//{
//	int n, i, j;
//	double a, b, s = 0;
//	do
//	{
//		printf("Enter a natural number n="); 
//		scanf_s("%i", &n);
//	} while (n <= 0);
//	for (i = 1; i <= n; i++)
//	{
//		a = b = 1.0 / i;
//		for (j = 2; j <= n; j++) a *= b;
//		s += a;
//	}
//	printf("s=%lf", s);
//	_getch();
//	return 0;
//}



/* lr06_v04 */
//4. Дано натуральне число n.Обчислити p = (1/2)^n(1/3)^n...(1/n)^n .
//#include <stdio.h>
//#include <conio.h>
//main()
//{
//	int n, i, j;
//	double p = 1, a, b;
//	do
//	{
//		printf("Enter a natural number n=");  
//		scanf_s("%i", &n);
//	} while (n <= 0);
//	for (i = 2; i <= n; i++)
//	{
//		a = b = 1.0 / i;
//		for (j = 2; j <= n; j++) b *= a; 	
//		p *= b;
//	}
//	printf("s=%lf\n", p);
//	_getch();
//	return 0;
//}


/* lr06_v05 */
// 5 Дано натуральне число n.Обчислити p = (1 + 1/1)(1 + 1/2)^2 ... (1 + 1/n)^n .
//#include <stdio.h>
//#include <conio.h>
//main()
//{
//	int n, i, j;
//	double p = 1, a, b;
//	do
//	{
//		printf("Enter a natural number n=");  
//		scanf_s("%i", &n);
//	} while (n <= 0);
//	for (i = 1; i <= n; i++)
//	{
//		a = b = 1 + 1.0 / i;
//		for (j = 2; j <= i; j++) b *= a; 	
//		p *= b;
//	}
//	printf("s=%lf\n", p);
//	_getch();
//	return 0;
//}



/* lr06_v06 */
// 6. Дано натуральне число n.Знайти всі Піфагорові трійки
// натуральних чисел, кожне з яких не перевищує n, тобто всі
// такі трійки натуральних чисел a, b, c, коли a^2 + b^2 = c^2
// (a <= b <= c <= n).
//#include<stdio.h>
//main()
//{
//
//    int n, a, b, c;
//    do
//    {
//    	printf("Enter a natural number n=");  
//    	scanf_s("%i", &n);
//    } while (n <= 0);
//    for (c = 1; c <= n; c++)
//        for (a = 1; a <= n; a++)
//            for (b = 1; b <= n; b++)
//                if ((c * c == (a * a) + (b * b) ) && (a <= b) && ( a <= c) && (b <= c))
//                    printf("%i, %i, %i\n", a, b, c);
//    _getch();
//    return 0;
//}


/* lr06_v07 */
//7. Дано натуральне число n. Обчислити
// s = 1 + (1/2)^(n-1) + (1/3)^(n-2) + ... + (1/n)
//#include <stdio.h>
//#include <conio.h>
//main()
//{
//	int n, i, j;
//	double s = 0, a, b;
//	do
//	{
//		printf("Enter a natural number n=");  
//		scanf_s("%i", &n);
//	} while (n <= 0);
//	for (i = 1; i <= n; i++)
//	{
//		a = b = 1.0 / i;
//		for (j = n - 1; j >= i; j--) b *= a; 	
//		s += b;
//	}
//	printf("s=%lf\n", s);
//	_getch();
//	return 0;
//}


/* lr06_v08 */
//8. Дано натуральне число n та дійсне число s. Обчислити
//   значення функції y = 1 + sin(x) + sin(x^2) + ... + sin(x^n) на відрізку
//   x є [0, 2*pi] з кроком s.
//#include <stdio.h>
//#include <conio.h>
//#define _USE_MATH_DEFINES
//#include <math.h>
//main()
//{
//	int n, i;
//	double y, x, s;
//	do
//	{
//		printf("Enter a natural number n=");
//		scanf_s("%i", &n);
//	} while (n <= 0);
//	do
//	{
//		printf("Enter a number between 0 and 2*pi s=");
//		scanf_s("%lf", &s);
//	} while ((s < 0) || (s > 2 * M_PI));
//	for (x = 0; x <= 2 * M_PI; x += s)
//	{
//		y = 1;
//		for (i = 1; i <= n; i++)
//			y += sin(pow(x, i));
//		printf("x=%lf ", x);
//		printf("y=%lf\n", y);
//	}
//	_getch();
//	return 0;
//}

/* lr06_v09 */
//9. Дано натуральне число n та дійсне число s. Обчислити
//   значення функції y = 1 + cos(x) + cos^2(x) + ... + cos^n(x) на відрізку
//   x є [0, pi] з кроком s.
//#include <stdio.h>
//#include <conio.h>
//#define _USE_MATH_DEFINES
//#include <math.h>
//main()
//{
//	int n, i;
//	double y, x, s;
//	do
//	{
//		printf("Enter a natural number n=");
//		scanf_s("%i", &n);
//	} while (n <= 0);
//	do
//	{
//		printf("Enter a number between 0 and pi s=");
//		scanf_s("%lf", &s);
//	} while ((s < 0) || (s > M_PI));
//	for (x = 0; x <= M_PI; x += s)
//	{
//		y = 1;
//		for (i = 1; i <= n; i++)
//			y += pow(cos(x), i);
//		printf("x=%lf ", x);
//		printf("y=%lf\n", y);
//	}
//	_getch();
//	return 0;
//}

/* lr06_v10 */
//10. Простим називається число, що має тільки два дільники –
//само число й одиницю.Вивести всі прості числа, що менші за
//задане натуральне число n.
//#include <stdio.h>
//#include <conio.h>
//main()
//{
//	int n, c;
//	do
//	{
//		printf("Enter a natural number n="); 
//		scanf_s("%i", &n);
//	} while (n <= 0);
//	for (int j = 1; j < n; j++)
//	{
//		c = 0;
//		for (int l = 1; l < n; l++)
//		{
//			if (!(j % l)) c++;
//		}
//		if (c == 2) printf("%i\n", j);
//			
//	}
//	_getch();
//	return 0;
//}



/* lr06_v11 */
//11. Простим називається число, що має тільки два дільники – само
//число й одиницю.Дано натуральне число n. Вивести n перших
//простих чисел.
//#include <stdio.h>
//#include <conio.h>
//main()
//{
//	int n, c, v = 1, j, l;
//	do
//	{
//		printf("Enter a natural number n=");
//		scanf_s("%i", &n);
//	} while (n <= 0);
//	for (j = 1; v <= n; j++)
//	{
//		c = 0;
//		for (l = 1; l <= j; l++)
//		{
//			if (!(j % l))
//				c++;
//		}
//		if (c == 2 && v <= n) 
//		{
//			printf("%i - %i\n", j, v); 
//			v++;
//		}
//	}
//	_getch();
//	return 0;
//}


/* lr06_v12 */
//#include <stdio.h>
//#include <math.h>
//main()
//{
//	int n, z = 1;
//	double result = 0;
//	do
//	{
//		printf("Enter a natural number n="); 
//		scanf_s("%i", &n);
//	} while (n <= 0);
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 2; j <= i * i; j++)
//		{
//			z *= j;
//		}
//		result += 1.0 / z;
//	}
//	printf("result = %lf", result);
//	_getch();
//	return 0;
//}

/* lr06_v13 */
//#include <stdio.h>
//#include <math.h>
//main()
//{
//	int n;
//	double result = 1;
//	do
//	{
//		printf("Enter a natural number n="); 
//		scanf_s("%i", &n);
//	} while (n <= 0);
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = i; j <= i; j++)
//		{
//			result *= sin(2 * i + j * j);
//		}
//	}
//	printf("result = %lf", result);
//	_getch();
//	return 0;
//}


/* lr06_v14 */
// 14. Два натуральних числа називаються «дружніми», якщо кожне
// з них дорівнює сумі дільників іншого за винятком самого
// числа.Дано натуральні числа a і b.З’ясувати, чи є задані
// числа дружніми.Приклади пар дружніх чисел : 220 і 284, 1184
// і 1210, 2620 і 2924, 5020 і 5564 тощо.
//#include <stdio.h>
//main()
//{
//	int a, b, sumA = 0, sumB = 0, x;
//	do
//	{
//		printf("Enter a natural number a="); 
//		scanf_s("%i", &a);
//	} while (a <= 0);
//	{
//		printf("Enter a natural number b="); 
//		scanf_s("%i", &b);
//	} while (b <= 0);
//	for (int i = 1; i < a; i++)
//	{
//		x = a;
//		while (x >= i) x -= i;
//		if (!x) sumA += i;
//	}
//	for (int i = 1; i < b; i++)
//	{
//		x = b;
//		while (x >= i) x -= i;
//		if (!x) sumB += i;
//	}
//	((sumA == b) && (sumB == a)) ? (printf("They are friendly")) : (printf("They are not friendly"));
//	_getch();
//	return 0;
//}


/* lr06_v15 */
//#include <stdio.h>
//#include <math.h>
//main()
//{
//	int n, i, j;
//	double s = 0;
//	do
//	{
//		printf("Enter a natural number n="); 
//		scanf_s("%i", &n);
//	} while (n <= 0);
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= n; j++)
//		{
//			s += (j - i + 1.0) / (2.0 * i + j);
//		}
//	}
//	printf("s = %lf", s);
//	_getch();
//	return 0;
//}



/* lr06_v16 */
//#include <stdio.h>
//#include <math.h>
//main()
//{
//	int n, i, j;
//	double s = 0;
//	do
//	{
//		printf("Enter a natural number n = "); 
//		scanf_s("%i", &n);
//	} while (n <= 0);
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			s += (double)i / (i + 2 * j);
//		}
//	}
//	printf("s = %lf", s);
//	_getch();
//	return 0;
//}


/* lr06_v17 */
// 17 Дано натуральне число n.Обчислити 1^1+2^2+...+n^n
//#include <stdio.h>
//#include <math.h>
//main()
//{
//	int n, s = 0, a, b;
//	do
//	{
//		printf("Enter a natural number n="); 
//		scanf_s("%i", &n);
//	} while (n <= 0);
//	for (int i = 1; i <= n; i++)
//	{
//		a = b = i;
//		for (int j = 2; j <= i; j++)
//		{
//			a = a * b;
//		}
//		s += a;
//	}
//	printf("s=%i", s);
//	_getch();
//	return 0;
//}


/* lr06_v18 */
// 18. Дано натуральне число n.Знайти всі двійки натуральних
// чисел x і y,  n = x^3 + y^3.
//#include <stdio.h>
//#include <math.h>
//main()
//{
//	int n, x, y;
//	double a, b;
//	do
//	{
//		printf("Enter a natural number n="); 
//		scanf_s("%i", &n);
//	} while (n <= 0);
//	for (x = 1; x <= n; x++)
//		for (y = 1; y <= n; y++)
//			if (pow(x, 3) + pow(y, 3) == n) printf("%i, %i\n", x, y);
//	_getch();
//	return 0;
//}


/* lr06_v19 */
// 19. Дано натуральне число n.Вивести послідовність
// 1, (1/2)^n, ... , (1/n)^n
//#include <stdio.h>
//#include <conio.h>
//main()
//{
//	int n, i, j;
//	double a, b;
//	do
//	{
//		printf("Enter a natural number n="); 
//		scanf_s("%i", &n);
//	} while (n <= 0);
//	for (i = 1; i <= n; i++)
//	{
//		a = b = 1.0 / i;
//		for (j = 2; j <= n; j++) a *= b;
//		printf("%lf; ", a);
//	}
//	_getch();
//	return 0;
//}

//20. Дано натуральне число n.Знайти число від 1 до n, що має
//якомога більше дільників
//#include <stdio.h>
//#include <conio.h>
//main()
//{
//	int n, i, j, c;
//	int a = 0, b = 0;
//	do
//	{
//		printf("Enter a natural number n="); 
//		scanf_s("%i", &n);
//	} while (n <= 0);
//	for (i = 1; i <= n; i++)
//	{
//		a = 0;
//		for (j = 1; j <= i; j++)
//		{	
//			if (i % j == 0) a++;
//			if (a > b)
//			{
//				b = a;
//				c = i;
//			}
//		}
//	}
//	printf("%i\n", b); // кількість дільників
//	printf("%i\n", c); // саме число 
//	_getch();
//	return 0;
//}

//21. Дано натуральне число n.Знайти число від 1 до n, що має
//якомога більшу суму дільників.
//#include <stdio.h>
//#include <conio.h>
//main()
//{
//	int n, i, j, c;
//	int max = 0, s;
//	do
//	{
//		printf("Enter a natural number n="); 
//		scanf_s("%i", &n);
//	} while (n <= 0);
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{	
//			s = 0;
//			for (int l = 1; l <= j; l++)
//			{
//				if (j % l == 0) s += l;
//				if (s > max) { max = s; c = j; }
//			}
//		}
//	}
//	printf("%i\n%i\n", c, max);
//	_getch();
//	return 0;
//}


/* lr06_v22 */
// 22. Дано натуральне число n.Знайти всі трійки натуральних
// чисел x, y і z, що x^2+y^2+y^2=n.
//#include <stdio.h>
//#include <conio.h>
//main()
//{
//	int x, y, z, n, i;
//	do
//	{
//		printf("Enter a natural number n=");
//		scanf_s("%i", &n);
//	} while (n <= 0);
//	for (x = 1; x <= n; x++)
//		for (y = 1; y <= n; y++)
//			for (z = 1; z <= n; z++)
//				if (x * x + y * y + z * z == n) printf("%i, %i, %i\n", x, y, z);
//	_getch();
//	return 0;
//}



/* lr06_v23 */
// 23. Визначити суму цифр заданого числа n.
//#include <stdio.h>
//#include <conio.h>
//main()
//{
//	int x = 0, c = 0, v, i, n, a;
//	do
//	{
//		printf("Enter a natural number n=");
//		scanf_s("%i", &n);
//	} while (n <= 0);
//	v = n;
//	do
//	{
//		v /= 10;
//		x++;
//	} while (v);
//	for (i = 1; i <= x; i++)
//	{
//		a = n % 10;
//		n /= 10;
//		c += a;
//	}
//	printf("%i", c);
//	_getch();
//	return 0;
//}


/* lr06_v24 */
//24. Визначити першу цифру заданого числа n.
//#include <stdio.h>
//#include <conio.h>
//main()
//{
//	int x = 0, v, i, n, a;
//	do
//	{
//		printf("Enter a natural number n=");
//		scanf_s("%i", &n);
//	} while (n <= 0);
//	v = n;
//	do
//	{
//		v /= 10;
//		x++;
//	} while (v);
//	for (i = 1; i <= x; i++)
//	{
//		a = n % 10;
//		n /= 10;
//	}
//	printf("%i", a);
//	_getch();
//	return 0;
//}



/* lr06_v25 */
// 25. Дано натуральне число. Отримати це число, записане у
// зворотному порядку.
//#include <stdio.h>
//#include <conio.h>
//main()
//{
//	int n, c = 0;
//	do
//	{
//		printf("Enter a natural number n="); 
//		scanf_s("%i", &n);
//	} while (n <= 0);
//	while (n)
//	{ 
//		c *= 10;
//		c = c + n % 10;
//		n /= 10;
//	}
//	printf("%i", c);
//	_getch();
//	return 0;
//}
