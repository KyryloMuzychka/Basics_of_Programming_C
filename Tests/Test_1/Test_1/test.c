// 1) Дано натуральне число n (n менше або дорівнює 100). Визначити кількість цифр у n.
//#include <stdio.h>
//main()
//{
//	int n, a = 1;
//	do
//	{
//		printf("Enter a natural number less than 100 or equal it n=");
//		scanf_s("%i", &n);
//	} while (n <= 0 || n > 100);
//	while (n /= 10) a++;
//	printf("%i", a);
//	_getch();
//	return 0;
//}

//#include <stdio.h>
//main()
//{
//	int n;
//	printf("Enter a natural number less than 100 or equal it n=");
//	scanf_s("%i", &n);
//	//if (n <= 100 && n > 0)
//	//{
//	//	if (n == 100) 	printf("3");
//	//	else if (n < 10) printf("1");
//	//	else printf("2");
//	//}
//	//else printf("wrong number");
//	(n <= 100 && n > 0) ? ( n == 100 ? printf("3") : ((n < 10) ? printf("1") : printf("2"))) : printf("wrong number");
//
//	_getch();
//	return 0;
//}


// 2) Дано 4-значне натуральне число. Перевірити, чи є воно паліндромом.
//#include <stdio.h>
//main()
//{
//	int n, x, y;
//	do
//	{
//		printf("Enter a three-digit number n=");
//		scanf_s("%i", &n);
//	} while (n < 1000 || n > 9999);
//	x = 0; y = n;
//	while (n) 
//	{
//		x *= 10;
//		x += n % 10;
//		n /= 10;
//	}
//	(y == x) ? printf("It's the palindrome") : printf("It isn't the palindrome");
//	_getch();
//	return 0;
//}

//#include <stdio.h>
//main()
//{
//	int n;
//	printf("Enter a three-digit number n=");
//	scanf_s("%i", &n);
//	(n > 1000 && n < 9999) ? ((n % 10 == n / 1000) && (n / 10 % 10 == n / 100 % 10) ? printf("It's the palindrome") : printf("It isn't the palindrome")) : printf("wrong number");;
//	_getch();
//	return 0;
//}


// 3) Дано 3-значне число. З'ясувати, чи усі цифри цього числа різні.
//#include <stdio.h>
//main()
//{
//	int n;
//	do
//	{
//		printf("Enter a three-digit number n=");
//		scanf_s("%i", &n);
//	} while (n < 100 || n > 999);
//	(((n % 10) == ((n / 10) % 10)) && ((n % 10) == (n / 100))) ? printf("All digits are equal") : printf("There are different digits");
//	_getch();
//	return 0;
//}

//#include <stdio.h>
//main()
//{
//	int n;
//	printf("Enter a three-digit number n=");
//	scanf_s("%i", &n);
//	(n>=100 && n <= 999) ? ((((n % 10) == ((n / 10) % 10)) && ((n % 10) == (n / 100))) ? printf("All digits are equal") : printf("There are different digits")) : printf("wrong number");
//	_getch();
//	return 0;
//}