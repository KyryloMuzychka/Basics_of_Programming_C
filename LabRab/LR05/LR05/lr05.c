//Дано натуральне число n.
//Визначити скільки цифр містить це число
//#include <stdio.h>
//main()
//{
//	unsigned int x = 1;
//	unsigned long int n, y;
//	printf("n="); scanf_s("%li", &n);
//	y = n;
//	while ((y /= 10) >= 1) x++;
//	printf("In %li = %i digits.", n, x);
//	_getch();
//	return 0;
//}

//1. Дано натуральні числа a і b. Обчислити суму та добуток усіх
//   чисел, що знаходяться між a і b.
//#include <stdio.h>
//main()
//{
//	int a, b, sum = 0, mult = 0;
//	printf("a="); scanf_s("%i", &a);
//	printf("b="); scanf_s("%i", &b);
//	if (a >= b)
//	{
//		printf("[Error]: a is gigger or equals b");
//		return 1;
//	}
//	for (int i = ++a; i < b; i++)
//	{
//		if (mult == 0) mult = 1;
//		sum += i;
//		mult *= i;
//	}
//	printf("%i\n%i\n", sum, mult);
//}

//2. Дано натуральні числа a і b.Обчислити середнє арифметичне
//усіх парних чисел, що знаходяться між a і b.
//#include <stdio.h>
//main()
//{
//	int a, b, c = 0, sum = 0;
//	do
//	{
//		printf("a = "); scanf_s("%i", &a);
//		printf("b = "); scanf_s("%i", &b);
//	} 
//	while (a >= b);
//	for (int i = ++a; i < b; i++)
//	{
//		if (!(i % 2))
//		{
//			sum += i;
//			c++;
//		}
//	}
//	printf("%lf", (double)sum / c);
//}


//3. Дано натуральні числа a і b.З’ясувати, чи є задані числа
//дружніми.Два натуральних числа називаються «дружніми»,
//якщо кожне з них дорівнює сумі дільників іншого за
//винятком самого числа.Приклади пар дружніх чисел : 220 і
//284, 1184 і 1210, 2620 і 2924, 5020 і 5564 тощо.
//#include <stdio.h>
//main()
//{
//	int a, b, v, w, sumA = 0, sumB = 0;
//	do
//	{
//		printf("a = "); scanf_s("%i", &a);
//		printf("b = "); scanf_s("%i", &b);
//	} 
//	while (a <= 0 || b <= 0);
//	v = a; w = b;
//	for (int i = 1; i < v; i++)
//	{
//		a = v;
//		while (a >= i)
//			a -= i;
//		if (!a) sumA += i;
//	}
//	for (int j = 1; j < w; j++)
//	{
//		b = w;
//		while (b >= j)
//			b -= j;
//		if (!b) sumB += j;
//	}
//	if (v == sumB && w == sumA)
//		printf("yes");
//	else
//		printf("no");
//}



//4. Дано натуральне число n.Обчислити факторіал n != 1·2·…·n.
//#include <stdio.h>
//main()
//{
//	int n, x = 1;
//	do
//	{
//		printf("n = "); scanf_s("%i", &n);
//	} while (n <= 0);
//	for (int i = 1; i < n; i++)
//	{
//		x *= (i + 1);
//	}
//	printf("n! = %i", x);
//}


//  5. Дано натуральне число n.Обчислити S= -1/3 + 1/5 - ... +- 1/(2n+1)
//#include <stdio.h>
//main()
//{
//	int n;
//	double s = 0;
//	do
//	{
//		printf("n = "); scanf_s("%i", &n);
//	} while (n <= 0);
//	for (int i = 1; i <= n; i++)
//	{
//		if(i % 2)
//			s -= 1.0 / (2 * i + 1);
//		if (!(i % 2))
//			s += 1.0 / (2 * i + 1);
//	}
//	printf("s = %lf", s);
//}



// 6. Дано натуральне число n.Обчислити s = 1 + 1/2 + 1/3 + ... + 1/n
//#include <stdio.h>
//main()
//{
//	int n;
//	double s = 0;
//	do
//	{
//		printf("n = "); scanf_s("%i", &n);
//	} while (n <= 0);
//	for (int i = 1; i <= n; i++)
//	{
//		s += 1.0 / i;
//	}
//	printf("s = %lf", s);
//}




// 7. Дано натуральне число n.
// Обчислити S = 1 + 1/2+ 1/3! + ... + 1/n!
//#include <stdio.h>
//main()
//{
//	int x = 1, n;
//	double s = 0;
//	do 
//	{
//		printf("Enter a natural number n=");
//		scanf_s("%i", &n);
//	} while (n <= 0);
//	for (int i = 1; i <= n; i++)
//	{
//		x *= i;
//		s += 1.0 / x;
//	}
//	printf("s=%lf", s);
//	_getch();
//	return 0;
//}

// 8. Дано натуральне число n. Обчислити S = sin 1 + (sin 2)^2 + ... + (sin n)^n
//#include <stdio.h>
//#include <math.h>
//main() 
//{
//	int n;
//	double s = 0;
//	do
//	{
//		printf("Enter a natural number n="); 
//		scanf_s("%i", &n);
//	} while (n <= 0);
//	for (int i = 1; i <= n; i++)
//	{
//		s += powf(sin(i), i);
//	}
//	printf("s=%lf", s);
//	_getch();
//	return 0;
//}



//9. Дано натуральні числа a і b.Обчислити a^b без використання
//стандартної функції зведення в степень.
//#include <stdio.h>
//main() 
//{
//	int a, b, n;
//	do
//	{
//		printf("a = "); scanf_s("%i", &a);
//		printf("b = "); scanf_s("%i", &b);
//	} while (a <= 0 || b <=0);
//	n = a;
//	for (int i = 2; i <= b; i++)
//	{
//		a *= n;
//	}
//	printf("a^b = %i", a);
//	_getch();
//	return 0;
//}


// 10. Дано дійсні числа a, b і с. Обчислити значення функції
// y = e^x*cos(x) з кроком с на відрізку x Є [a, b] .
//#include <stdio.h>
//#include <math.h>
//main() 
//{
//	double a, b, c, x, y;
//	do
//	{
//		printf("a = "); scanf_s("%lf", &a);
//		printf("b = "); scanf_s("%lf", &b);
//		printf("c = "); scanf_s("%lf", &c);
//	} while (a <= 0 || b <=0 || c <= 0);
//	for (x = a; x <= b; x += c)
//	{
//		y = exp(x) * cos(x);
//		printf("x = %lf, y = %lf\n", x, y);
//	}
//	_getch();
//	return 0;
//}



// 12. Дано натуральне число n.Обчислити подвійний факторіал
// n!!= 1·3·5·…·n для непарного n або за формулою n!!= 2·4·…·n
// для парного n.
//#include <stdio.h>
//#include <math.h>
//main()
//{
//	int n, i, c = 1, d = 2, result_1 = 1, result_2 = 1;
//	do
//	{
//		printf("Enter a natural number n="); 
//		scanf_s("%i", &n);
//	} while (n <= 0);
//	if (n % 2) {
//		for (i = 1; i <= n; i += 2)
//		{
//			result_1 = result_1 * c;
//			c += 2;
//		}
//		printf("result=%i\n", result_1);
//	}
//	else if (!(n % 2)) {
//		for (i = 2; i <= n; i += 2)
//		{
//			result_2 = result_2 * d;
//			d += 2;
//		}
//		printf("result=%i\n", result_2);
//	}
//	_getch();
//	return 0;
//}



//13. З’ясувати, чи є задане натуральне число n простим.Простим
//називається число, що має тільки два дільники – само число й
//одиницю.
//#include <stdio.h>
//#include <math.h>
//main()
//{
//	int x, y = 0, n;
//	printf("n="); scanf_s("%i", &n);
//	x = n;
//	while (x >= 1)
//	{
//		if (n % x == 0) y++;
//		x--;
//	}
//	if (y == 2) printf("yes"); else printf("no");
//	_getch();
//	return 0;
//}


//14. Дано натуральне число n та дійсне число x. Обчислити n(1/i!+sqrt(abs(x))
//#include <stdio.h>
//#include <math.h>
//main()
//{
//	int i = 1, n;
//	double result = 0, x;
//	do
//	{
//		printf("n="); scanf_s("%i", &n);
//	} while (n <= 0);
//	printf("x="); scanf_s("%lf", &x);
//	for (int y = 1; y <= n; y++)
//	{
//		i *= y;
//		result += 1.0 / i + sqrtf(fabs(x));
//	}
//	printf("i=%i\n result=%lf", i, result);
//}




//15
//#include <stdio.h>
//#include <math.h>
//main()
//{
//	int n, facti = 1;
//	double x, mult = 1;
//	do
//	{
//		printf("n = "); scanf_s("%i", &n);
//		printf("x = "); scanf_s("%lf", &x);
//	} while (n <= 0);
//	for (int i = 1; i <= n; i++)
//	{
//		facti *= i;
//		mult *= (1 + sin(i * x) / facti);
//		printf("facti = %i, mult = %lf\n", facti, mult);
//	}
//	_getch();
//	return 0;
//}



//  17. Дано натуральне число n. Як найменшою кількістю монет
//  можна виплатити грошову суму n, якщо в достатній кількості
//  є монети гідністю в 1, 2, 5, 10, 25 та 50 коп.
//#include <stdio.h>
//main() 
//{
//	int n, a = 1, b = 2, c = 5, d = 10, e = 25, k = 50, coins = 0;
//	do
//	{	
//		printf("Enter a natural number n=");
//		scanf_s("%i", &n);
//	} while (n <= 0);
//	while (n >= k)
//	{
//		n -= k;
//		coins++;
//	}
//	while (n >= e)
//	{
//		n -= e;
//		coins++;
//	}
//	while (n >= d)
//	{
//		n -= d;
//		coins++;
//	}
//	while (n >= c)
//	{
//		n -= c;
//		coins++;
//	}
//	while (n >= a)
//	{
//		n -= a;
//		coins++;
//	}
//	printf("coins= %i",coins);
//}




//18. Дано натуральне число n. Знайти усі його дільники.
//#include <stdio.h>
//main() 
//{
//	int n, v, i;
//	do
//	{	
//		printf("Enter a natural number n = ");
//		scanf_s("%i", &n);
//	} while (n <= 0);
//	v = n;
//	for (i = 1; i <= v; i++)
//	{
//		n = v;
//		while (n >= i)
//			n -= i;
//		if (n == 0)
//			printf("%i\n", i);
//	}
//}


// 19. Дано натуральне число n. Отримати це число
// зі зворотним порядком цифр.
//#include <stdio.h>
//main() 
//{
//	int n, x;
//	do
//	{	
//		printf("Enter a natural number n=");
//		scanf_s("%i", &n);
//	} while (n <= 0);
//	x = 0;
//	while (n) 
//	{
//		x *= 10;
//		x += n % 10;
//		n /= 10;
//	}
//	printf("%i\n",x);
//}

// 20. Дано натуральне число n.Обчислити добуток його першої і
// останньої цифр.
//#include <stdio.h>
//main()
//{
//	int n, a;
//	do
//	{
//		printf("Enter a natural number n=");
//		scanf_s("%i", &n);
//	} while (n <= 0);
//	a = n % 10;
//	while (n > 10)
//	{
//		n /= 10;
//	}
//	printf("a*b=%i", a * n);
//	_getch();
//	return 0;
//}


// 21. Дано натуральні числа n і m (m<10). З’ясувати, чи входить
// цифра m в запис числа n.
//#include <stdio.h>
//main()
//{
//	int n, m, a;
//	do
//	{
//		printf("Enter a natural number n="); scanf_s("%i", &n);
//	} while (n <= 0);
//	do
//	{
//		printf("Enter a natural number m (m < 10)="); scanf_s("%i", &m);
//	} while (m <= 0 || m > 9);
//	do
//	{
//		a = n % 10;
//		if (a == m) 
//		{
//			printf("yes");
//			break;
//		}
//		n /= 10;
//	} while (n);
//	if (a != m) printf("no");
//	_getch();
//	return 0;
//}



//22. Дано натуральне число n.Визначити суму його цифр.
//#include <stdio.h>
//main()
//{
//	int n, b = 0, a;
//	do
//	{
//		printf("Enter a natural number n="); scanf_s("%i", &n);
//	} while (n <= 0);
//	do
//	{
//		a = n % 10;
//		b += a; 
//		n /= 10;
//	} while (n);
//	printf("b = %i", b);
//	_getch();
//	return 0;
//}


//23. Дано натуральні числа n і m. Визначити суму m останніх цифр
//числа n.
//#include <stdio.h>
//main()
//{
//	int n, m, s = 0;
//	do
//	{
//		printf("Enter a natural number n = "); scanf_s("%i", &n);
//		printf("Enter a natural number m = "); scanf_s("%i", &m);
//	} while (n <= 0);
//	for (int i = 1; i <= m; i++)
//	{
//		s += n % 10;
//		n /= 10;
//	}
//	printf("%i", s);
//	_getch();
//	return 0;
//}



// 24. Дано натуральне число n.Визначити його першу цифру.
//#include <stdio.h>
//main()
//{
//	int n;
//	do
//	{
//		printf("Enter a natural number n="); scanf_s("%i", &n);
//	} while (n <= 0);
//	while (n > 10)
//	{
//		n /= 10;
//	}
//	printf("%i", n);
//	_getch();
//	return 0;
//}


// lr05_v25
//#include <stdio.h>
//main()
//{
//	long long int n, a = 1, b = 2;
//	long double  x, y, s = 0;
//	printf("Enter a natural number n="); scanf_s("%lli", &n);
//	while (a <= n)
//	{
//		x = 1.0 / (a * b);	
//		a++; b++;
//		if (a <= n) y = 1.0 / (a * b); else y = 0;
//		a++; b++;
//		s = s + x - y;
//	}
//	printf("s=%lf", s);
//	_getch();
//	return 0;
//}

// example of  break
//#include <stdio.h>
//main() 
//{
//	int c;
//	for (int i = 0; i <= 5; i++) 
//	{
//		printf("Enter a number, 1 to quit: "); 
//		scanf_s("%i", &c);
//		if (c == 1) break;
//	}
//	_getch();
//	return 0;
//} 