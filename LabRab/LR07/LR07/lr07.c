/* lr07_example1 */
// Дано натуральне число n та дійсні числа a1, a2, …, an.
// Обчислити S = a1 + a3 + … + an.
//#include <stdio.h>
//#include <conio.h>
//main()
//{
//	int n, i;
//	double a, sum = 0;
//	do
//	{
//		printf("Enter a natural number n="); scanf_s("%i", &n);
//	} while (n <= 0);
//	for (i = 1; i <= n; i++)
//	{
//		printf("a%i=", i);
//		scanf_s("%lf", &a);
//		if(i % 2) sum += a;
//	}
//	printf("sum=%lf", sum);
//	_getch();
//	return 0;
//}

/* lr07_example2 */
// Ввести довільну послідовність символів, закінчивши
// введення натисканням клавіші <Enter>. Визначити кількість
// введених цифрових символів.
//#include <stdio.h>
//#include <conio.h>
//#include <ctype.h>
//char c, enter = '\r';
//int a;
//main()
//{
//	printf("Input text: ");
//	do
//	{
//		c = _getche();
//		if (isdigit(c)) a++;
//	} while (c != enter);
//	printf("\nDigits in the text = %i", a);
//	_getch();
//	return 0;
//}



// 1. Дано натуральне число n та натуральні числа a1, a2, …, an.
// Знайти найбільший спільний дільник для заданої
// послідовності.Рекомендовано застосування алгоритму
// Евкліда.
//#include <stdio.h>
//#include <conio.h>
//main()
//{
//	int n, a, b;
//	do
//	{
//		printf("n = "); scanf_s("%i", &n);
//	} while (n <= 1);
//	printf("a1 = "); scanf_s("%i", &a);
//	for (int i = 2; i <= n; i++)
//	{
//		printf("a%i = ", i); scanf_s("%i", &b);
//		do
//		{
//			if (a > b)
//				a -= b;
//			if (a < b)
//				b -= a;
//		} while (a != b);
//	}
//	printf("nod = %i", a);
//	_getch();
//	return 0;
//}



//2. Дано натуральні числа n, k, m та послідовність натуральних
//чисел a1, a2, …, an.Визначити кількість членів заданої
//послідовності, кратних k і некратних m.
//#include <stdio.h>
//#include <conio.h>
//main()
//{
//	int a, n, k, m, v = 0, w = 0;
//	do
//	{
//		printf("n = "); scanf_s("%i", &n);
//		printf("k = "); scanf_s("%i", &k);
//		printf("m = "); scanf_s("%i", &m);
//	} while (n <= 0);
//	for (int i = 1; i <= n; i++)
//	{
//		printf("a%i = ", i); scanf_s("%i", &a);
//		if (!(a % k))
//			v++;
//		if (a % m)
//			w++;
//	}
//	printf("kratni k: %i\n", v);
//	printf("ne kratni m: %i", w);
//	_getch();
//	return 0;
//}


//3. Дано натуральне число n та послідовність натуральних чисел
//a1, a2, …, an.Визначити кількість парних і непарних членів
//заданої послідовності.
//#include <stdio.h>
//#include <conio.h>
//main()
//{
//	int a, n, v = 0, w = 0, i;
//	do
//	{
//		printf("n = "); scanf_s("%i", &n);
//	} while (n <= 0);
//	for (i = 1; i <= n; i++)
//	{
//		printf("a%i = ", i); scanf_s("%i", &a);
//		if (a % 2)
//			v++;
//		else
//			w++;
//	}
//	printf("neparni: %i\n", v);
//	printf("parni: %i", w);
//	_getch();
//	return 0;
//}


//4. Дано натуральне число n та послідовність натуральних чисел
//a1, a2, …, an.Визначити кількість членів заданої
//послідовності, що мають парні порядкові номери та є
//непарними числами.
//#include <stdio.h>
//#include <conio.h>
//main()
//{
//	int a, n, v = 0, w = 0, i;
//	do
//	{
//		printf("n = "); scanf_s("%i", &n);
//	} while (n <= 0);
//	for (i = 1; i <= n; i++)
//	{
//		printf("a%i = ", i); scanf_s("%i", &a);
//		if (a % 2 && !(i % 2))
//			v++;
//	}
//	printf("%i\n", v);
//	_getch();
//	return 0;
//}



//5. Простим називається число, що має тільки два дільники –
//само число й одиницю.Дано натуральне число n та
//послідовність натуральних чисел a1, a2, …, an.Визначити
//кількість простих чисел – членів заданої послідовності.
//#include <stdio.h>
//#include <conio.h>
//main()
//{
//	int i, j, n, a, c, s = 0;
//	do
//	{
//		printf("n = "); scanf_s("%i", &n);
//	} while (n <= 0);
//	for (i = 1; i <= n; i++)
//	{
//		printf("a%i = ", i); scanf_s("%i", &a);
//		c = 0;
//		for (j = 1; j <= a; j++)
//		{
//			if (!(a % j))
//				c++;
//		}
//		if (c == 2) s++;
//	}
//	printf("%i\n", s);
//	_getch();
//	return 0;
//}




//6. Дано натуральне число n та дійсні числа a1, a2, …, an.
//Обчислити n
//#include <stdio.h>
//#include <conio.h>
//#include <math.h>
//main()
//{
//	int a, n, i;
//	double s = 0;
//	do
//	{
//		printf("n = "); scanf_s("%i", &n);
//	} while (n <= 0);
//	for (i = 0; i < n; i++)
//	{
//		printf("a%i = ", i+1); scanf_s("%i", &a);
//		if ((i + 1) % 2)
//			s += powf(a, (n - i));
//		else
//			s -= powf(a, (n - i));
//	}
//	printf("%lf\n", s);
//	_getch();
//	return 0;
//}


/* lr07_v07 */
// 7. Дано натуральне число n та послідовність дійсних чисел a1, a2, …, an.
// Знайти максимальне і мінімальне числа заданої послідовності.
//#include <stdio.h>
//#include <conio.h>
//main()
//{
//	int n, i;
//	double min, max, a;
//	do
//	{
//		printf("Enter a natural number n = ");
//		scanf_s("%i", &n);
//	} while (n <= 0);
//	printf("a1=");
//	scanf_s("%lf", &a);
//	min = max = a;
//	for (i = 2; i <= n; i++)
//	{
//		printf("a%i=", i);
//		scanf_s("%lf", &a);
//		if (a > max) max = a;
//		if (a < min) min = a;
//	}
//	printf("min = %lf\nmax = %lf", min, max);
//	_getch();
//	return 0;
//}



//8. Дано натуральні числа n, m та послідовність натуральних
//чисел a1, a2, …, an.Якщо у заданій послідовності є хоча б
//один член, що дорівнює m, то обчислити суму тих членів, що
//йдуть за першим таким числом; у противному разі –
//обчислити суму усіх членів заданої послідовності.
//#include <stdio.h>
//#include <conio.h>
//main()
//{
//	int a, n, m, i, s = 0;
//	do
//	{
//		printf("Enter a natural number n = ");
//		scanf_s("%i", &n);
//		printf("Enter a natural number m = ");
//		scanf_s("%i", &m);
//	} while (n <= 0 || m <= 0);
//	for (i = 1; i <= n; i++)
//	{
//		printf("a%i=", i); scanf_s("%i", &a);
//		s += a;
//		if (a == m) s = 0;
//	}
//	printf("s = %i", s);
//	_getch();
//	return 0;
//}

/* lr07_v09 */
// Дано натуральне число n та послідовність дійсних чисел a1,
// a2, …, an.Знайти у заданій послідовності число, якомога
// наближене до цілого.
//#include <stdio.h>
//#include <math.h>
//main () 
//{
//	int i, n, b;
//	double l, a, c, min = 1;
//	do
//	{
//		printf("Enter a natural number n = ");
//		scanf_s("%i", &n);
//	} while (n <= 0);
//	for (i = 1; i <= n; i++)
//	{
//		printf("a%i=", i);
//		scanf_s("%lf", &a);
//		b = round(a);
//		c = fabs(abs(b) - fabs(a));
//		if (c < min) 
//		{
//			min = c;
//			l = a;
//		}
//	}
//	printf("%lf", l);
//	_getch();
//	return 0;
//}

//10. Дано натуральне число n та послідовність дійсних чисел a1,
//a2, …, an.Визначити у заданій послідовності число сусідств
//двох додатних чисел.
//#include <stdio.h>
//#include <conio.h>
//#include <math.h>
//main()
//{
//	int a, b, n, i, s = 0;
//	do
//	{
//		printf("Enter a natural number n = ");
//		scanf_s("%i", &n);
//	} while (n <= 1);
//	printf("a1="); scanf_s("%i", &a);
//	for (i = 2; i <= n; i++)
//	{
//		b = a;
//		printf("a%i=", i); scanf_s("%i", &a);
//		if (abs(b - a) == 1) s++;
//	}
//	printf("s = %i", s);
//	_getch();
//	return 0;
//}





//11. Дано натуральне число n, дійсне число k та послідовність
//дійсних чисел a1, a2, …, an.Визначити кількість членів заданої
//послідовності із номерами 1, 2, 4, 8 тощо, що мають значення
//менше за k.
//#include <stdio.h>
//#include <conio.h>
//#include <math.h>
//main()
//{
//	int a, n, k, i, s = 0;
//	do
//	{
//		printf("Enter a natural number n = ");
//		scanf_s("%i", &n);
//		printf("Enter a natural number k = ");
//		scanf_s("%i", &k);
//	} while (n <= 0 || k <= 0);
//	for (i = 1; i <= n; i++)
//	{
//		printf("a%i=", i); scanf_s("%i", &a);
//		if (!(i % 2) && a < k) s++;
//	}
//	printf("s = %i", s);
//	_getch();
//	return 0;
//}

//12. Дано натуральне число n, дійсне число k та послідовність
//дійсних чисел a1, a2, …, an.Знайти у заданій послідовності
//число, якомога наближене до числа k.
//#include <stdio.h>
//#include <conio.h>
//#include <math.h>
//main()
//{
//	int i, n;
//	double a, k, min, number;
//	do
//	{
//		printf("Enter a natural number n = ");
//		scanf_s("%i", &n);
//		printf("k = ");
//		scanf_s("%lf", &k);
//	} while (n <= 0);
//	printf("a1="); scanf_s("%lf", &a);
//	min = fabs(a - k);
//	number = a;
//	for (i = 2; i <= n; i++)
//	{
//		printf("a%i=", i); scanf_s("%lf", &a);
//		if (fabs(a - k) < min) {
//			min = fabs(a - k);
//			number = a;
//		}
//	}
//	printf("%lf", number);
//	_getch();
//	return 0;
//}

/* lr07_v13 */
//#include <stdio.h>
//#include <math.h>
//main () 
//{
//	int n, i;
//	double a, p = 1;
//	do
//	{
//		printf("Enter a natural number n = ");
//		scanf_s("%i", &n);
//	} while (n <= 0);
//	for (i = 1; i <= n; i++)
//	{
//		printf("a%i=", i);
//		scanf_s("%lf", &a);
//		p = p * (1 + pow(a, n));
//	}
//	printf("p=%lf", p);
//	_getch();
//	return 0;
//}



//14. Ввести довільну послідовність символів.Визначити у заданій
//послідовності кількість символів, що належать до будь - якої
//абетки.
//#include <stdio.h>
//#include <conio.h>
//#include <ctype.h>
//main () 
//{
//	char c;
//	int s = 0;
//	printf("Input text:");
//	do
//	{
//		c = _getche();
//		if (isalpha(c)) s++;
//	} while (c != '\r');
//	printf("\n%i", s);
//	_getch();
//	return 0;
//}


//15. Ввести натуральне число x розміром в один байт та довільну
//послідовність символів.Визначити у заданій послідовності
//кількість символів, значення ASCII - коду яких збігається з
//числом x.
//#include <stdio.h>
//#include <conio.h>
//#include <ctype.h>
//main()
//{
//	char c;
//	int x, s = 0;
//	do
//	{
//		printf("n = "); scanf_s("%i", &x);
//	} while (x <= 0 || x > 255);
//	printf("Input text:");
//	do
//	{
//		c = _getche();
//		if (x == c) s++;
//	} while (c != '\r');
//	printf("\n%i", s);
//	_getch();
//	return 0;
//}

//16. Ввести довільну послідовність символів.Визначити у заданій
//послідовності номер першого цифрового символу.
//#include <stdio.h>
//#include <conio.h>
//#include <ctype.h>
//main()
//{
//	char c;
//	int s = 0;
//	printf("Input text:");
//	do
//	{
//		c = _getche(); 
//		s++;
//		if (isdigit(c))
//			break;
//	} while (c != '\r');
//	do
//	{
//		c = _getche();
//	} while (c != '\r');
//	printf("\n%i", s);
//	_getch();
//	return 0;
//}

//17. Ввести натуральні числа a і b розміром в один байт
//Сформувати таблицю ASCII - кодів символів з номерами від a до b.
//#include <stdio.h>
//#include <conio.h>
//#include <ctype.h>
//main()
//{
//	int a, b;
//	do
//	{
//		printf("a = "); scanf_s("%i", &a);
//		printf("b = "); scanf_s("%i", &b);
//	} while (a <= 0 || a > 255 || b <= 0 || b > 255);
//	do
//	{
//		printf("%i - %c\n", a, a);
//		a++;
//	} while (a != b);
//	
//	_getch();
//	return 0;
//}

//18. Ввести довільну послідовність символів.Визначити у заданій
//послідовності символи з мінімальним та максимальним ASCII -
//кодами та ці коди.
//#include <stdio.h>
//#include <conio.h>
//#include <ctype.h>
//main()
//{
//	char c;
//	int min = 256, max = 0;
//	do
//	{
//		c = _getche();
//		if (c < min) min = c;
//		if (c > max) max = c;
//	} while (c != '\r');
//	printf("\nmin = %i - %c", min, min);
//	printf("\nmax = %i - %c", max, max);
//	_getch();
//	return 0;
//}

/* lr07_v19 */
// 19. Ввести довільну послідовність символів. Визначити суму і
// добуток ASCII - кодів членів заданої послідовності.
//#include <stdio.h>
//#include <conio.h>
//#include <ctype.h>
//main()
//{
//	char c;
//	int sum = 0, mult = 1;
//	printf("Input text:");
//	do
//	{
//		c = _getche();
//		sum += c;
//		mult *= c;
//	} while (c != '\r');
//	printf("\nSum of ASCII codes = %i,\nmultiplication of ASCII codes = %i", sum, mult);
//	_getch();
//	return 0;
//}


/*lr7_v.20*/
// 20. Ввести довільну послідовність символів. Визначити у заданій
// послідовності кількість символів, що є цифровими та мають
// парні порядкові номери.
//#include <stdio.h>
//#include <conio.h>
//#include <ctype.h>
//main()
//{
//    const char enter = '\r';
//    int array_size = 0;
//    unsigned int s = 0;
//    char c;
//    printf("Input text:");
//    do
//    {
//        c = _getche();
//        array_size++;
//        if ((isdigit(c)) && (!(array_size % 2))) s++;
//    } while (c != enter);
//    printf("\nDigits=%u", s);
//    _getch();
//    return 0;
//}

/* lr07_v21*/
//21. Ввести натуральне число x розміром в один байт та довільну
//послідовність символів.Визначити у заданій послідовності
//символ, значення ASCII - коду якого якомога наближене до
//числа x.
//#include <stdio.h>
//#include <ctype.h>
//#include <math.h>
//main()
//{
//	char c, l;
//	int x, d, min = 256;
//	do
//	{
//		printf("x=");
//		scanf_s("%i", &x);
//	} while (x <= 0 || x > 255);
//	do
//	{
//		c = _getche();
//		d = abs(x - abs(c));
//		if (d <= min)
//		{
//			min = d;
//			l = c;
//		}
//	} while (c != '\r');
//	printf("\n%i\n", x);
//	printf("%1c", l);
//	_getch();
//	return 0;
//}




/*22. Ввести два довільних символи c1 і c2.Вивести послідовність
символів, значення ASCII - кодів яких знаходяться між ASCII -
кодами c1 і c2.*/
//#include <stdio.h>
//#include <ctype.h>
//main()
//{
//	char c1, c2;
//	c1 = _getche();
//	c2 = _getche();
//	for (; c1 <= c2; c1++)
//	{
//		printf("\n%c", c1);
//	}
//	_getch();
//	return 0;
//}


//24. Ввести довільну послідовність символів.Визначити у заданій
//послідовності кількість символів, що не є цифровими та
//мають значення ASCII - коду більше за код першого із
//введених символів.
//#include <stdio.h>
//#include <ctype.h>
//main()
//{
//	char first, c, s = 0;
//	first = _getche();
//	do
//	{
//		c = _getche();
//		if (c > first && !isdigit(c)) s++;
//	} while (c != '\r');
//	printf("\ns = %i", s);
//	_getch();
//	return 0;
//}

/* lr07_v25*/
//#include <stdio.h>
//#include <ctype.h>
//#include <conio.h>
//main()
//{
//	char c, result;
//	double d, a = 0, b = 0;
//	printf("Input text: ");
//	do
//	{
//		c = _getche();
//		a += c;
//		b++;
//	} while (c != '\r');
//	d = a / b;
//	printf("\nd=%lf\n", d);
//	result = d;
//	_putch(result);
//	_getch();
//	return 0;
//}