// lr04.c

// 1. Дано чотирьохзначне натуральне число.З’ясувати, яка з двох
// його частин більша.
/* lr04_v01 */
//#include <stdio.h>
//#include <conio.h>
//main()
//{
//	int n, a, b;
//	do
//	{
//		printf("Enter a natural nunber (999<n<10000) n = ");
//		scanf_s("%i", &n);
//	} while ((n <= 999) || (n >= 10000));
//	a = n % 100;
//	b = n / 100;
//	if (a > b)
//		printf("Second part is bigger");
//	else if (a < b)
//		printf("First part is bigger");
// else 
//		printf("First part = second part");
//	_getch();
//	return 0;
//}


// 2. Дано чотирьохзначне натуральне число.З’ясувати, яка сума
// більша, перших двох його цифр чи останніх.
// /* lr04_v02 */
//#include <stdio.h>
//#include <conio.h>
//main()
//{
//	int n, a, b;
//	do
//	{
//		printf("Enter a natural nunber (999<n<10000) n = ");
//		scanf_s("%i", &n);
//	} while ((n <= 999) || (n >= 10000));
//	a = n / 1000 + (n / 100 % 10);
//	b = n % 10 + n / 10 % 10;
//	if (a > b)
//		printf("a > b");
//	else if (a < b)
//		printf("a < b");
//	else
//		printf("a = b");
//	_getche();
//	return 0;
//}

// 3. Дано трьохзначне натуральне число. З’ясувати, яка з його
//цифр менша, перша чи остання.
/* lr04_v03 */
//#include <stdio.h>
//#include <conio.h>
//main()
//{
//	int n;
//	do {
//		printf("Enter a natural number (99 < n < 1000) n = ");
//		scanf_s("%i", &n);
//	} while (n <= 99 || n >= 1000);
//	if (n % 10 < n / 100)
//		printf("The first digit is bigger than last one");
//	else if (n % 10 > n / 100)
//		printf("The last digit is bigger than first one");
//	else
//		printf("The first and last digits are equal");
//	_getch();
//	return 0;
//}

// 4. Дано натуральне число.З’ясувати, чи рівні між собою його
// остання та передостання цифри.
/* lr04_v04 */
//#include <stdio.h>
//#include <conio.h>
//main()
//{
//	int n;
//	do {
//		printf("Enter a natural number (n > 9) n = ");
//		scanf_s("%i", &n);
//	} while (n <= 9);
//	if (n % 10 == n / 10 % 10)
//		printf("Last digits are equal");
//	else
//		printf("Last digits are different");
//	_getch();
//	return 0;
//}

// 5. Дано трьохзначне натуральне число.З’ясувати, чи всі його
// цифри різні.
//#include <stdio.h>
//#include <conio.h>
//main()
//{
//	int n;
//	do {
//		printf("Enter a natural number (99 < n < 1000) n = ");
//		scanf_s("%i", &n);
//	} while (n <= 99 || n > 999);
//	if (n % 10 == n / 10 % 10 && n % 10 == n / 100 % 10)
//		printf("All of the digits are the same");
//	else
//		printf("The digits of our number are not equal");
//	_getche();
//	return 0;
//}

// 6. Дано п’ятизначне натуральне число.Якщо остання його
// цифра більша за першу, то переставити їх місцями.
//#include <stdio.h>
//#include <conio.h>
//main()
//{
//	int n, v, a, b;
//	do
//	{
//		printf("Enter a natural number n = ");
//		scanf_s("%i", &n);
//	} while (n <= 9999 || n > 99999);
//	if (n % 10 == n / 10000 || n % 10 < n / 10000)
//		printf("%i", n);
//	else
//	{
//		v = n;
//		a = v % 10; // last
//		b = v / 10000; // first
//		printf("a = %i\nb = %i\n", a, b);
//		n = a * 10000 + v / 10 % 1000 * 10 + b;
//		printf("%i", n);
//	}
//	_getch();
//	return 0;
//}


// 7. Дано два дійсних числа.З’ясувати, чи одного знаку ці числа.
/* lr04_v07 */
//#include <stdio.h>
//main()
//{
//	double a, b;
//	printf("a="); scanf_s("%lf", &a);
//	printf("b="); scanf_s("%lf", &b);
//	(a * b) ? 
//		((a * b > 0) ? 
//			printf("Both numbers have the same sign") : 
//				printf("The numbers have the different signs")) : 
//					printf("One of the numbers equals 0");
//	_getch();
//	return 0;
//}



// 8. Дано два дійсних числа.Не використовуючи додаткової
//змінної розташувати їх таким чином, аби на першому місці
//стояло те з них, дробова частина якого є меншою.
//lr04_v08 
//#include <stdio.h>
//#include <math.h>
//main()
//{
//	double a, b, x, y;
//	printf("a="); scanf_s("%lf", &a);
//	printf("b="); scanf_s("%lf", &b);
//	x = modf(a, &x);
//	y = modf(b, &y);
//	printf("x=%lf\n", x);
//	printf("y=%lf\n", y);
//	if (x > y)
//	{
//		a = a + b; 
//		b = a - b; 
//		a = a - b;
//	}
//	printf("a=%lf\n", a);
//	printf("b=%lf\n", b);
//}


// 9. Дано три дійсних числа.Знайти суму двох найбільших серед
// них.
//#include <stdio.h>
//#include <conio.h>
//main()
//{
//	double a, b, c, x;
//	printf("a = "); scanf_s("%lf", &a);
//	printf("b = "); scanf_s("%lf", &b);
//	printf("c = "); scanf_s("%lf", &c);
//	if (a > b)
//	{
//		x = a;
//		a = b;
//		b = x;
//	}
//	if (b > c)
//	{
//		x = b;
//		b = c;
//		c = x;
//	}
//	if (a > b)
//	{
//		x = a;
//		a = b;
//		b = x;
//	}
//	printf("%lf", b + c);
//	_getch();
//	return 0;
//}

// 10. Дано три дійсних числа.Знайти серед них таке, що за
// значенням знаходиться між найбільшим та найменшим.
//#include <stdio.h>
//#include <conio.h>
//main()
//{
//	double a, b, c, x;
//	printf("a = "); scanf_s("%lf", &a);
//	printf("b = "); scanf_s("%lf", &b);
//	printf("c = "); scanf_s("%lf", &c);
//	if (a > b)
//	{
//		x = a;
//		a = b;
//		b = x;
//	}
//	if (b > c)
//	{
//		x = b;
//		b = c;
//		c = x;
//	}
//	if (a > b)
//	{
//		x = a;
//		a = b;
//		b = x;
//	}
//	printf("%lf", b);
//	_getch();
//	return 0;
//}


//11. Дано три дійсних числа.З’ясувати, які з них належать до
//діапазону[0, 1].
//#include <stdio.h>
//#include <conio.h>
//main()
//{
//	double a, b, c;
//	printf("a = "); scanf_s("%lf", &a);
//	printf("b = "); scanf_s("%lf", &b);
//	printf("c = "); scanf_s("%lf", &c);
//	if (a >= 0 && a <= 1)
//		printf("a belongs\n");
//	if (b >= 0 && b <= 1)
//		printf("b belongs\n");
//	if (c >= 0 && c <= 1)
//		printf("c belongs\n");
//	_getch();
//	return 0;
//}


// 12. Дано три натуральних числа.Розташувати їх таким чином,
// аби на першому місці стояло найменше з них, а на
// останньому – найбільше.
//#include <stdio.h>
//#include <conio.h>
//main()
//{
//	int a, b, c, x;
//	printf("a = "); scanf_s("%i", &a);
//	printf("b = "); scanf_s("%i", &b);
//	printf("c = "); scanf_s("%i", &c);
//	if (b < a)
//	{
//		x = b;
//		b = a;
//		a = x;
//	}
//	if (c < b)
//	{
//		x = c;
//		c = b;
//		b = x;
//	}
//	if (b < a)
//	{
//		x = b;
//		b = a;
//		a = x;
//	}
//	printf("%i, %i, %i", a, b, c);
//	_getch;
//	return 0;
//}


//13. Дано три дійсних числа.З’ясувати, що більше, квадрат
//мінімального чи максимальне з них.
//#include <stdio.h>
//main()
//{
//	double a, b, c, x;
//	printf("a="); scanf_s("%lf", &a);
//	printf("b="); scanf_s("%lf", &b);
//	printf("c="); scanf_s("%lf", &c);
//	if (a > b)
//	{
//		x = a;
//		a = b;
//		b = x;
//
//	}
//	if (b > c)
//	{
//		x = b;
//		b = c;
//		c = x;
//	}
//	if (a > b)
//	{
//		x = a;
//		a = b;
//		b = x;
//	}
//	printf("a = %lf ", a);
//	printf("b = %lf ", b);
//	printf("c = %lf \n", c);
//	if (a * a - c > 0) printf("square of min is bigger"); else printf("max is bigger");
//	_getch();
//	return 0;
//}


//14. Дано два натуральних числа.Розташувати їх таким чином,
//аби на першому місці стояло найбільше з них.
//#include <stdio.h>
//#include <conio.h>
//main()
//{
//	int a, b, x;
//	printf("a="); scanf_s("%i", &a);
//	printf("b="); scanf_s("%i", &b);
//	if (b > a)
//	{
//		x = a;
//		a = b;
//		b = x;
//	}
//	printf("%i, %i", a, b);
//	_getch();
//	return 0;
//}


//  15. На площині задано три точки з координатами(x1, y1), (x2, y2), та
//  (x3, y3).Визначити, яка з них ближча до початку координат.
//#include <stdio.h>
//#include <conio.h>
//#include <math.h>
//main()
//{
//	int x1, y1, x2, y2, x3, y3, a, b, c;
//	printf("x1="); scanf_s("%i", &x1);
//	printf("y1="); scanf_s("%i", &y1);
//	printf("x2="); scanf_s("%i", &x2);
//	printf("y2="); scanf_s("%i", &y2);
//	printf("x3="); scanf_s("%i", &x3);
//	printf("y3="); scanf_s("%i", &y3);
//	a = sqrt(pow(x1, 2) + pow(y1, 2));
//	b = sqrt(pow(x2, 2) + pow(y2, 2));
//	c = sqrt(pow(x3, 2) + pow(y3, 2));
//	if (a < b && a < c)
//		printf("x1=%i, y1=%i", x1, y1); 
//	if (b < a && b < c)
//		printf("x2=%i, y2=%i", x2, y2);
//	if (c < a && c < b)
//		printf("x3=%i, y3=%i", x3, y3);
//	_getch();
//	return 0;
//}

//16. Дано три натуральних числа.З’ясувати, чи є серед них хоча б
//два однакових.
//#include <stdio.h>
//main()
//{
//	int a, b, c;
//	printf("a = "); scanf_s("%i", &a);
//	printf("b = "); scanf_s("%i", &b);
//	printf("c = "); scanf_s("%i", &c);
//	if (a == b || a == c || b == c)
//		printf("yes");
//	else
//		printf("no");
//	_getch();
//	return 0;
//}



// 17. Дано дійсні числа а, b, с.Подвоїти ці числа, якщо a≥b≥c.
//#include <stdio.h>
//main()
//{
//	double a, b, c;
//	printf("a = "); scanf_s("%lf", &a);
//	printf("b = "); scanf_s("%lf", &b);
//	printf("c = "); scanf_s("%lf", &c);
//	if (a >= b && a >= c && b >= c)
//	{
//		a = 2 * a;
//		b = 2 * b;
//		c = 2 * c;
//		printf("a = %lf, b = %lf, c = %lf", a, b, c);
//	}
//	else
//		printf("a = %lf, b = %lf, c = %lf", a, b, c);
//	_getch();
//	return 0;
//}


//18. Дано дійсне число.Якщо його дробова частина менша за 0, 5,
//то округлити це число до найближчого більшого, а якщо ні,
//то знайти його цілу частину.
//#include <stdio.h>
//#include <math.h>
//main()
//{
//	double x, y;
//	printf("x = "); scanf_s("%lf", &x);
//	y = modf(x, &y);
//	if (y < 0.5)
//		x = ceilf(x);
//	else
//		x = x - y;
//	printf("%lf", x);
//	_getch();
//	return 0;
//}

 

//19. Дано три дійсних числа, що визначають довжину сторін
//деякого трикутника.З’ясувати, чи існує такий трикутник.
 //lr04_v19 
//#include <stdio.h>
//main()
//{
//	double a, b, c; 
//	printf("a="); scanf_s("%lf", &a);
//	printf("b="); scanf_s("%lf", &b);
//	printf("c="); scanf_s("%lf", &c);
//	((a + b > c) && (b + c > a) && (a + c > b)) ?
//		printf("The triangle with these sides exists") : 
//			printf("The triangle with these sides doesn't exist");
//}

//20. Дано натуральне число, що визначає деякий рік.З’ясувати, чи
//є він високосним.Високосний рік, ділиться на 4, за
//виключенням тих років, які діляться на 100 та не діляться на
//400 (наприклад, 300, 1300 і 1900 не є високосними, а 1200 і
//	2000 – високосні роки).
//lr04_v20
//#include <stdio.h>
//main()
//{
//	int year;
//	printf("year="); scanf_s("%i", &year);
//	if (year % 4 == 0)
//		if ((year % 100 == 0) && (year % 400 != 0))
//			printf("This year isn't a leap year");
//		else
//			printf("This year is a leap year");
//	else printf("This year isn't a leap year");
//	_getch();
//	return 0;
//}


//21.Дано натуральне число від 1 до 12, що визначає деякий
//місяць року.З’ясувати, скільки днів у цьому місяці.
/* lr04_v21 */
//#include <stdio.h>
//main() 
//{
//	int n;
//	do
//	{
//		printf("Enter a number between 1 and 12: ");
//		scanf_s("%i", &n);
//	} while ((n < 1) || (n > 12));
//	switch (n)
//	{
//	case 2: printf("days = 28"); break;
//	case 1: case 3: case 5: case 7: case 8: case 10: case 12: printf("days = 31"); break;
//	case 4: case 6: case 9: case 11: printf("days = 30"); break;
//	}
//	_getch();
//	return 0;
//}


//22. Дано натуральне число n(n<=9999).З’ясувати, чи є це число
//паліндромом(перевертнем) з урахуванням чотирьох цифр, як,
//наприклад: 5555, 3223, 0770 тощо.
//#include <stdio.h>
//main() 
//{
//	int x;
//	printf("x = "); scanf_s("%i", &x);
//	if ((x % 10 == x / 1000) && ((x / 10) % 10 == (x / 100) % 10))
//		printf("yes");
//	else
//		printf("no");
//	_getch();
//	return 0;
//}

//23. Дано чотирьохзначне натуральне число. З’ясувати, чи містить
//воно три однакові цифри.
//#include <stdio.h>
//main() 
//{
//	int x, a, b, c, d;
//	printf("x = "); scanf_s("%i", &x);
//	a = x % 10;
//	b = x / 10 % 10;
//	c = x / 100 % 10;
//	d = x / 1000;
//	if (a == b && a == c || a == c && a == d || a == b && a == d || b == c && c == d)
//		printf("yes");
//	else
//		printf("no");
//	_getch();
//	return 0;
//}

//23 with loops
//#include <stdio.h>
//main()
//{
//	int x, y, c, n, i;
//	printf("x = "); scanf_s("%i", &x);
//	n = x;
//	for (i = 1; i <= 9; i++)
//	{
//		x = n;
//		c = 0;
//		while (x)
//		{
//			y = x % 10;
//			if (i == y) c++;
//			x /= 10;
//		}
//		if (c >= 3)
//		{
//			printf("yes");
//			break;
//		}
//	}
//	if (i == 10) printf("no");
//	_getch();
//	return 0;
//}



//24. Дано чотирьохзначне натуральне число.З’ясувати, чи всі
//його цифри однакові.
//#include <stdio.h>
//main() 
//{
//	int x, a, b, c, d;
//	printf("x = "); scanf_s("%i", &x);
//	a = x % 10;
//	b = x / 10 % 10;
//	c = x / 100 % 10;
//	d = x / 1000;
//	if (a == b && a == c && a == d)
//		printf("yes");
//	else
//		printf("no");
//	_getch();
//	return 0;
//}


//24 with loops
//#include <stdio.h>
//main()
//{
//	int x, y, c, n, i;
//	printf("x = "); scanf_s("%i", &x);
//	n = x;
//	for (i = 1; i <= 9; i++)
//	{
//		x = n;
//		c = 0;
//		while (x)
//		{
//			y = x % 10;
//			if (i == y) c++;
//			x /= 10;
//		}
//		if (c == 4)
//		{
//			printf("yes");
//			break;
//		}
//	}
//	if (i == 10) printf("no");
//	_getch();
//	return 0;
//}


//25. Дано три дійсних числа, що визначають довжину сторін
//деякого трикутника.З’ясувати, чи є цей трикутник
//прямокутним.
//#include <stdio.h>
//main() 
//{
//	double a, b, c;
//	printf("a="); scanf_s("%lf", &a);
//	printf("b="); scanf_s("%lf", &b);
//	printf("c="); scanf_s("%lf", &c);
//	if (c * c == a * a + b * b) printf("yes");
//	else printf("no");
//	_getch();
//	return 0;
//}