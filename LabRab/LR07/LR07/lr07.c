/* lr07_example1 */
// ���� ���������� ����� n �� ���� ����� a1, a2, �, an.
// ��������� S = a1 + a3 + � + an.
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
// ������ ������� ����������� �������, ���������
// �������� ����������� ������ <Enter>. ��������� �������
// �������� �������� �������.
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



// 1. ���� ���������� ����� n �� ��������� ����� a1, a2, �, an.
// ������ ��������� ������� ������ ��� ������
// �����������.������������� ������������ ���������
// ������.
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



//2. ���� ��������� ����� n, k, m �� ����������� �����������
//����� a1, a2, �, an.��������� ������� ����� ������
//�����������, ������� k � ��������� m.
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


//3. ���� ���������� ����� n �� ����������� ����������� �����
//a1, a2, �, an.��������� ������� ������ � �������� �����
//������ �����������.
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


//4. ���� ���������� ����� n �� ����������� ����������� �����
//a1, a2, �, an.��������� ������� ����� ������
//�����������, �� ����� ���� �������� ������ �� �
//��������� �������.
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



//5. ������� ���������� �����, �� �� ����� ��� ������� �
//���� ����� � �������.���� ���������� ����� n ��
//����������� ����������� ����� a1, a2, �, an.���������
//������� ������� ����� � ����� ������ �����������.
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




//6. ���� ���������� ����� n �� ���� ����� a1, a2, �, an.
//��������� n
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
// 7. ���� ���������� ����� n �� ����������� ������ ����� a1, a2, �, an.
// ������ ����������� � �������� ����� ������ �����������.
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



//8. ���� ��������� ����� n, m �� ����������� �����������
//����� a1, a2, �, an.���� � ������ ����������� � ���� �
//���� ����, �� ������� m, �� ��������� ���� ��� �����, ��
//����� �� ������ ����� ������; � ���������� ��� �
//��������� ���� ��� ����� ������ �����������.
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
// ���� ���������� ����� n �� ����������� ������ ����� a1,
// a2, �, an.������ � ������ ����������� �����, �������
// ��������� �� ������.
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

//10. ���� ���������� ����� n �� ����������� ������ ����� a1,
//a2, �, an.��������� � ������ ����������� ����� �������
//���� �������� �����.
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





//11. ���� ���������� ����� n, ����� ����� k �� �����������
//������ ����� a1, a2, �, an.��������� ������� ����� ������
//����������� �� �������� 1, 2, 4, 8 ����, �� ����� ��������
//����� �� k.
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

//12. ���� ���������� ����� n, ����� ����� k �� �����������
//������ ����� a1, a2, �, an.������ � ������ �����������
//�����, ������� ��������� �� ����� k.
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



//14. ������ ������� ����������� �������.��������� � ������
//����������� ������� �������, �� �������� �� ���� - ���
//������.
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


//15. ������ ���������� ����� x ������� � ���� ���� �� �������
//����������� �������.��������� � ������ �����������
//������� �������, �������� ASCII - ���� ���� �������� �
//������ x.
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

//16. ������ ������� ����������� �������.��������� � ������
//����������� ����� ������� ��������� �������.
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

//17. ������ ��������� ����� a � b ������� � ���� ����
//���������� ������� ASCII - ���� ������� � �������� �� a �� b.
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

//18. ������ ������� ����������� �������.��������� � ������
//����������� ������� � ��������� �� ������������ ASCII -
//������ �� �� ����.
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
// 19. ������ ������� ����������� �������. ��������� ���� �
// ������� ASCII - ���� ����� ������ �����������.
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
// 20. ������ ������� ����������� �������. ��������� � ������
// ����������� ������� �������, �� � ��������� �� �����
// ���� �������� ������.
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
//21. ������ ���������� ����� x ������� � ���� ���� �� �������
//����������� �������.��������� � ������ �����������
//������, �������� ASCII - ���� ����� ������� ��������� ��
//����� x.
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




/*22. ������ ��� �������� ������� c1 � c2.������� �����������
�������, �������� ASCII - ���� ���� ����������� �� ASCII -
������ c1 � c2.*/
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


//24. ������ ������� ����������� �������.��������� � ������
//����������� ������� �������, �� �� � ��������� ��
//����� �������� ASCII - ���� ����� �� ��� ������� ��
//�������� �������.
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