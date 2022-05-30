// example
//#include <stdio.h>
//#include <conio.h>
//#define MAX 100
//
//main()
//{
//	unsigned int i, j, k = 0, n = 0;
//	int m[MAX], t;
//	do 
//	{
//		printf("m[%i] = ", n);
//		scanf_s("%i", &m[n]);
//	} while((m[n++])&&(n!=MAX));
//	n = (m[n - 1]) ? n : --n; /* n - kilkist elemetiv masyvu */
//	/* sortuvannya vyborom */
//	for (i = 0; i <= n - 1; i++)
//		for (j = i + 1; j < n; j++)
//			if (m[j] > m[i])
//			{
//				t = m[i];
//				m[i] = m[j];
//				m[j] = t;
//			}
//	printf("Results:\n");
//	for(i = 0; i < n; i++)
//		if (!(m[i] % 2))
//		{
//			k++;
//			printf("%8i", m[i]);
//		}
//	if (!k) printf("No results!");
//	_getch();
//	return 0;
//}

//1
//#include <stdio.h>
//#include <conio.h>
//#define MAX 100
//
//Sort(int m[], int n);
//
//main()
//{
//	unsigned int i, j, s = 0, n = 0, k = 0, l=0, t=0;
//	int m[MAX], repeat[MAX], single[MAX];
//	do 
//	{
//		printf("m[%i] = ", n);
//		scanf_s("%i", &m[n]);
//	} while((m[n++])&&(n!=MAX));
//	n = (m[n - 1]) ? n : --n; /* n - kilkist elemetiv masyvu */
//	Sort(m, n);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//			if (m[i] == m[j] && i != j) 
//				s++;
//		if (s) 
//		{
//			repeat[k++] = m[i];
//			repeat[k++] = ++s;
//		}
//		s = 0;
//	}
//	i = 0;
//	if (repeat[i]) {
//		single[l++] = repeat[i++];
//		single[l++] = repeat[i++];
//		while (i < k)
//		{
//			if (single[l - 2] != repeat[i])
//			{
//				single[l++] = repeat[i++];
//				single[l++] = repeat[i++];
//			}
//			else
//				i = i + 2;
//		}
//	}
//	printf("Results for m:\n");
//	for(i = 0; i < n; i++)
//		printf("%i\t", m[i]);
//	printf("\nResults for repeat:\n");
//	for (i = 0; i < k; i=i+2)
//		printf("%i(%i)\t", repeat[i], repeat[i + 1]);
//	printf("\nResults for single:\n");
//	for (i = 0; i < l; i = i + 2)
//		printf("%i(%i)\t", single[i], single[i + 1]);		
//	_getch();
//	return 0;
//}
///* sortuvannya obminom */
//Sort(int m[], int n)
//{
//	int i, j, t;
//	for (i = 0; i < n-1; i++) /* n Ц к≥льк≥сть елемент≥в у масив≥ */
//		for (j = 0; j < n-i-1; j++)
//			if (m[j + 1] > m[j]) /* > Ц дл€ упор€дкуванн€ за спаданн€м */
//			{
//				t = m[j];
//				m[j] = m[j + 1];
//				m[j + 1] = t;
//			}
//}


//2
//#include <stdio.h>
//#include <conio.h>
//#define MAX 100
//
//Sort(int m[], int n);
//
//main()
//{
//	unsigned int i, j, n = 0, l = 0;
//	int m[MAX], single[MAX];
//	do 
//	{
//		printf("m[%i] = ", n);
//		scanf_s("%i", &m[n]);
//	} while((m[n++])&&(n!=MAX));
//	n = (m[n - 1]) ? n : --n; /* n - kilkist elemetiv masyvu */
//	Sort(m, n);
//	i = 0;
//	single[l++] = m[i++];
//	for (i; i < n; i++)
//		if (single[l - 1] != m[i])
//			single[l++] = m[i];
//	printf("Results for m:\n");
//	for(i = 0; i < n; i++)
//		printf("%i\t", m[i]);	
//	printf("\nResults for single:\n");
//	for (i = 0; i < l; i++)
//		printf("%i\t", single[i]);
//	_getch();
//	return 0;
//}
///* sortuvannya obminom */
//Sort(int m[], int n)
//{
//	int i, j, t;
//	for (i = 0; i < n-1; i++) /* n Ц к≥льк≥сть елемент≥в у масив≥ */
//		for (j = 0; j < n-i-1; j++)
//			if (m[j + 1] < m[j]) /* > Ц дл€ упор€дкуванн€ за спаданн€м */
//			{
//				t = m[j];
//				m[j] = m[j + 1];
//				m[j + 1] = t;
//			}
//}


//3
//#include <stdio.h>
//#include <conio.h>
//#define MAX 100
//
//Sort(int m[], int n);
//
//main()
//{
//	unsigned int i, j, n = 0, l = 0, s = 0;
//	int m[MAX], single[MAX];
//	do
//	{
//		printf("m[%i] = ", n);
//		scanf_s("%i", &m[n]);
//	} while ((m[n++]) && (n != MAX));
//	n = (m[n - 1]) ? n : --n; /* n - kilkist elemetiv masyvu */
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < n; j++)
//			if (m[i] == m[j] && i != j)
//				s++;
//		if (!(s))
//			single[l++] = m[i];
//		s = 0;
//	}
//	Sort(single, l);
//	printf("Results for m:\n");
//	for (i = 0; i < n; i++)
//		printf("%i\t", m[i]);
//	printf("\nResults for single:\n");
//	for (i = 0; i < l; i++)
//		printf("%i\t", single[i]);
//	_getch();
//	return 0;
//}
///* sortuvannya obminom */
//Sort(int m[], int n)
//{
//	int i, j, t;
//	for (i = 0; i < n - 1; i++) /* n Ц к≥льк≥сть елемент≥в у масив≥ */
//		for (j = 0; j < n - i - 1; j++)
//			if (m[j + 1] < m[j]) /* > Ц дл€ упор€дкуванн€ за спаданн€м */
//			{
//				t = m[j];
//				m[j] = m[j + 1];
//				m[j + 1] = t;
//			}
//}

//4
//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//#define MAX 100
//
//int i, j;
//
//int SortVstavka(float m[], int n);
//
//main()
//{
//	unsigned int n = 0, i = 0, s1, s2;
//	float  u[MAX], m[MAX], * pu = u, *pm = m;
//	do
//	{
//		printf("u[%i] = ", n);
//		scanf_s("%f", &u[n]);
//	} while ((u[n++]) && (n != MAX));
//	n = (*(pu + n - 1)) ? n : --n; /* n - kilkist elemetiv masyvu */
//	do
//	{
//		printf("m[%i] = ", i);
//		scanf_s("%f", &m[i]);
//	} while (i++ < (n-1));
//	printf("u:\n");
//	for (i = 0; i < n; i++)
//		printf("%15.3f", *(pu + i));
//	printf("\nm:\n");
//	for (i = 0; i < n; i++)
//		printf("%15.3f", *(pm + i));
//	printf("\n");
//	s1 = SortVstavka(u, n);
//	s2 = SortVstavka(m, n);
//	printf("u:\n");
//	for (i = 0; i < n; i++)
//		printf("%15.3f", *(pu + i));
//	printf("\nm:\n");
//	for (i = 0; i < n; i++)
//		printf("%15.3f", *(pm + i));
//	printf("\n");
//	printf("sortuvannya vstavkouy u %i\n", s1);
//	printf("sortuvannya vstavkouy m %i\n", s2);
//	if (s1 > s2)
//		printf("sortuvannya vstavkouy u > m\n");
//	else if (s1 < s2)
//		printf("sortuvannya vstavkouy u < m\n");
//	else
//		printf("sortuvannya vstavkouy u = m\n");
//	_getch();
//	return 0;
//}
//
///* sortuvannya vstavkouy */
//int SortVstavka(float m[], int n)
//{
//	int s = 0;
//	float t;
//	for (i = 1; i < n; i++)
//		for (j = 0; j <= i - 1; j++)
//		if (m[i] > m[j])
//		{
//			t = m[i];
//			for (int k = i; k >= j + 1; k--) m[k] = m[k - 1];
//			m[j] = t;
//			s++;
//		}
//	return s;
//}



//5
//#include <stdio.h>
//#include <conio.h>
//#define MAX 100
//
//Sort(int m[], int n);
//
//main()
//{
//	unsigned int i, j = 0, n1 = 0, n2 = 0, n3;
//	float M1[MAX], M2[MAX], M3[MAX];
//	do
//	{
//		printf("M1[%i] = ", n1);
//		scanf_s("%f", &M1[n1]);
//	} while ((M1[n1++]) && (n1 != MAX));
//	n1 = (M1[n1 - 1]) ? n1 : --n1; /* n - kilkist elemetiv masyvu */
//	do
//	{
//		printf("M2[%i] = ", n2);
//		scanf_s("%f", &M2[n2]);
//	} while ((M2[n2++]) && (n2 != MAX));
//	n2 = (M2[n2 - 1]) ? n2 : --n2; /* n - kilkist elemetiv masyvu */
//	n3 = n1 + n2;
//	for (i = 0; i < n1; i++)
//		M3[i] = M1[i];
//	while (i < n3)
//			M3[i++] = M2[j++];
//	Sort(M3, n3);
//	printf("Results for M1:\n");
//	for (i = 0; i < n1; i++)
//		printf("%.3f\t", M1[i]);
//	printf("\nResults for M2:\n");
//	for (i = 0; i < n2; i++)
//		printf("%.3f\t", M2[i]);
//	printf("\nResults for M3:\n");
//	for (i = 0; i < n3; i++)
//		printf("%.3f\t", M3[i]);
//	_getch();
//	return 0;
//}
///* sortuvannya obminom */
//Sort(int m[], int n)
//{
//	int i, j, t;
//	for (i = 0; i < n - 1; i++) /* n Ц к≥льк≥сть елемент≥в у масив≥ */
//		for (j = 0; j < n - i - 1; j++)
//			if (m[j + 1] < m[j]) /* > Ц дл€ упор€дкуванн€ за спаданн€м */
//			{
//				t = m[j];
//				m[j] = m[j + 1];
//				m[j + 1] = t;
//			}
//}
 


//6
//#include <stdio.h>
//#include <conio.h>
//#define MAX 100
//
//Sort(int m[], int n);
//
//main()
//{
//	unsigned int i, j = 0, n = 0;
//	int M[MAX];
//	do
//	{
//		printf("M[%i] = ", n);
//		scanf_s("%i", &M[n]);
//	} while ((M[n++]) && (n != MAX));
//	n = (M[n - 1]) ? n : --n; /* n - kilkist elemetiv masyvu */
//	printf("Source:\n");
//	for (i = 0; i < n; i++)
//		printf("%i\t", M[i]);
//	printf("\nsortuvannya obminom\n");
//	Sort(M, n);
//	printf("Result:\n");
//	for (i = 0; i < n; i++)
//		printf("%i\t", M[i]);
//	_getch();
//	return 0;
//}
///* sortuvannya obminom */
//Sort(int m[], int n)
//{
//	int i, j, t;
//	for (i = 0; i < n - 1; i++) /* n Ц к≥льк≥сть елемент≥в у масив≥ */
//		for (j = 0; j < n - i - 1; j++)
//			if (m[j + 1] < m[j]) /* > Ц дл€ упор€дкуванн€ за спаданн€м */
//			{
//				t = m[j];
//				m[j] = m[j + 1];
//				m[j + 1] = t;
//				for (int k = 0; k < n; k++)
//					printf("%i\t", m[k]);
//				printf("\n");
//			}
//}
 
 

//7
//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//#define MAX 100
//
//int i, j;
//
//int SortVstavka(const int m[], int n);
//int SortVybor(const int m[], int n);
//int SortObmin(const int m[], int n);
//
//main()
//{
//	unsigned int n = 0, s1, s2, s3;
//	int  u[MAX], * pu = u;
//	do
//	{
//		printf("m[%i] = ", n);
//		scanf_s("%i", &u[n]);
//	} while ((u[n++]) && (n != MAX));
//	n = (*(pu + n - 1)) ? n : --n; /* n - kilkist elemetiv masyvu */
//
//	printf("Masyv:\n");
//	for (i = 0; i < n; i++)
//		printf("%6i", *(pu + i));
//	printf("\n");
//
//	s1 = SortVstavka(u, n);
//	s2 = SortVybor(u, n);
//	s3 = SortObmin(u, n);
//
//	if ((s1 < s2 && s1 < s3) || (s1 < s2 && s2 == s3))
//		printf("The best way is sortuvannya vstavkouy s1 = %i\n", s1);
//	else if ((s2 < s1 && s2 < s3) || (s2 < s1 && s1 == s3))
//		printf("The best way is sortuvannya vyborom s2 = %i\n", s2);
//	else if ((s3 < s1 && s3 < s2) || (s1 == s2 && s1 > s3))
//		printf("The best way is sortuvannya obminom s3 = %i\n", s3);
//	else if (s1 == s2 && s1 < s3)
//		printf("The best way is sortuvannya vstavkouy and sortuvannya vyborom s1 = s2 = %i\n", s1);
//	else if (s1 == s3 && s1 < s2)
//		printf("The best way is sortuvannya vstavkouy and sortuvannya obminom s1 = s3 = %i\n", s1);
//	else if (s2 == s3 && s2 < s1)
//		printf("The best way is sortuvannya vyborom and sortuvannya obminom s2 = s3 = %i\n", s2);
//
//	printf("sortuvannya vstavkouy: (s1 = %i)\n", s1);
//	printf("sortuvannya vyborom: (s2 = %i)\n", s2);
//	printf("sortuvannya obminom: (s3 = %i)\n", s3);
//
//	_getch();
//	return 0;
//}
//
///* sortuvannya vstavkouy */
//int SortVstavka(const int m[], int n)
//{
//	int s1 = 0;
//	for (i = 1; i < n; i++)
//		for (j = 0; j <= i - 1; j++)
//			s1++;
//	//if (m[i] < m[j])
//	//{
//		//t = m[i];
//		//for (int k = i; k >= j + 1; k--) m[k] = m[k - 1];
//		//m[j] = t;
//	//}
//	return s1;
//}
//
///* sortuvannya vyborom */
//int SortVybor(const int m[], int n)
//{
//	int s2 = 0;
//	for (i = 0; i <= n - 1; i++)
//		for (j = i + 1; j < n; j++)
//			s2++;
//	//if (m[j] < m[i])
//	//{
//		//t = m[i];
//		//m[i] = m[j];
//		//m[j] = t;
//	//}
//	return s2;
//}
//
///*sortuvannya obminom*/
//int SortObmin(const int m[], int n)
//{
//	int s3 = 0;
//	for (i = 0; i < n - 1; i++)
//		for (j = 0; j < n - 1; j++)
//			s3++;
//	//if (m[j + 1] < m[j])
//	//{
//		//t = m[j];
//		//m[j] = m[j + 1];
//		//m[j + 1] = t;
//	//}
//	return s3;
//}

//8
//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//#define MAX 100
//
//int i, j;
//
//int SortObminMin(int m[], int n);
//int SortObminMax(int m[], int n);
//
//main()
//{
//	unsigned int n = 0, s1, s2;
//	int  u[MAX], m[MAX], * pu = u, * pm = m;
//	do
//	{
//		printf("m[%i] = ", n);
//		scanf_s("%i", &u[n]);
//	} while ((u[n++]) && (n != MAX));
//	n = (*(pu + n - 1)) ? n : --n; /* n - kilkist elemetiv masyvu */
//
//	printf("Masyv:\n");
//	for (i = 0; i < n; i++) {
//		printf("%6i", *(pu + i));
//		*(pm + i) = *(pu + i);
//	}
//	s1 = SortObminMin(u, n);
//	s2 = SortObminMax(m, n);
//	printf("\nsortuvannya obminom: (min to max) %i\n", s1);
//	for (i = 0; i < n; i++) 
//		printf("%6i", *(pu + i));	
//	printf("\nsortuvannya obminom: (max to min) %i\n", s2);
//	for (i = 0; i < n; i++) 
//		printf("%6i", *(pm + i));
//	if (s1 < s2)
//		printf("\nmax to min\n");
//	else if (s1 > s2)
//		printf("\nmin to max\n");
//	else 
//		printf("\equal\n");
//	_getch();
//	return 0;
//}
///*sortuvannya obminom*/
//int SortObminMin(int m[], int n)
//{
//	int s = 0, t;
//	for (i = 0; i < n - 1; i++)
//		for (j = 0; j < n - 1; j++)		
//			if (m[j + 1] < m[j])
//			{
//				t = m[j];
//				m[j] = m[j + 1];
//				m[j + 1] = t;
//				s++;
//			}
//	return s;
//}
//
//int SortObminMax(int m[], int n)
//{
//	int s = 0, t;
//	for (i = 0; i < n - 1; i++)
//		for (j = 0; j < n - 1; j++)
//			if (m[j + 1] > m[j])
//			{
//				t = m[j];
//				m[j] = m[j + 1];
//				m[j + 1] = t;
//				s++;
//			}
//	return s;
//}

//9
//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//#define MAX 100
//
//int i, j;
//
//SortObminMin(int m[], int start, int end);
//SortObminMax(int m[], int start, int end);
//
//main()
//{
//	unsigned int n = 0;
//	int  u[MAX], m[MAX], * pu = u, * pm = m;
//	do
//	{
//		printf("m[%i] = ", n);
//		scanf_s("%i", &u[n]);
//	} while ((u[n++]) && (n != MAX));
//	n = (*(pu + n - 1)) ? n : --n; /* n - kilkist elemetiv masyvu */
//	SortObminMax(u, 0, n/2);
//	SortObminMin(u, n/2, n);
//	for (i = 0; i < n; i++)
//		m[i] = *(pu + i);
//	for (i = 0; i < n; i++)
//		printf("%i\t", m[i]);
//	_getch();
//	return 0;
//}
///*sortuvannya obminom*/
//SortObminMin(int m[], int start, int end)
//{
//	int t;
//	for (i = start; i < end - 1; i++)
//		for (j = start; j < end - 1; j++)		
//			if (m[j + 1] < m[j])
//			{
//				t = m[j];
//				m[j] = m[j + 1];
//				m[j + 1] = t;
//
//			}
//}
//
//SortObminMax(int m[], int start, int end)
//{
//	int t;
//	for (i = start; i < end - 1; i++)
//		for (j = start; j < end - 1; j++)
//			if (m[j + 1] > m[j])
//			{
//				t = m[j];
//				m[j] = m[j + 1];
//				m[j + 1] = t;
//			}
//}

//10
//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//#define MAX 100
//
//int i, j;
//
//SortObminMin(int m[], int n);
//
//main()
//{
//	unsigned int n = 0;
//	int  u[MAX], m[MAX], * pu = u, * pm = m;
//	do
//	{
//		printf("m[%i] = ", n);
//		scanf_s("%i", &u[n]);
//	} while ((u[n++]) && (n != MAX));
//	n = (*(pu + n - 1)) ? n : --n; /* n - kilkist elemetiv masyvu */
//	printf("Masyv:\n");
//	for (i = 0; i < n; i++)
//		printf("%6i", *(pu + i));
//	SortObminMin(u, n);
//	for (i = 0, j = 1; j < n - 1; i++, j++)
//		*(pm + i) = *(pu + j);
//	printf("\nResult:\n");
//	for (i = 0; i < n-2; i++) 
//		printf("%6i", *(pm + i));	
//	
//	_getch();
//	return 0;
//}
///*sortuvannya obminom*/
//SortObminMin(int m[], int n)
//{
//	int t;
//	for (i = 0; i < n - 1; i++)
//		for (j = 0; j < n - 1; j++)		
//			if (m[j + 1] < m[j])
//			{
//				t = m[j];
//				m[j] = m[j + 1];
//				m[j + 1] = t;
//			}
//}

//11
//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//#define MAX 100
//
//int i, j;
//
//SortObminMin(int m[], int n);
//
//main()
//{
//	unsigned int n = 0;
//	int  u[MAX], * pu = u;
//	do
//	{
//		printf("m[%i] = ", n);
//		scanf_s("%i", &u[n]);
//	} while ((u[n++]) && (n != MAX));
//	n = (*(pu + n - 1)) ? n : --n; /* n - kilkist elemetiv masyvu */
//	printf("Masyv:\n");
//	for (i = 0; i < n; i++) 
//	{
//		printf("%6i", *(pu + i));
//		if (u[i] < 0) u[i] *= u[i];
//	}
//	SortObminMin(u, n);
//	printf("\nResult:\n");
//	for (i = 0; i < n; i++) 
//		printf("%6i", *(pu + i));	
//	
//	_getch();
//	return 0;
//}
///*sortuvannya obminom*/
//SortObminMin(int m[], int n)
//{
//	int t;
//	for (i = 0; i < n - 1; i++)
//		for (j = 0; j < n - 1; j++)		
//			if (m[j + 1] < m[j])
//			{
//				t = m[j];
//				m[j] = m[j + 1];
//				m[j + 1] = t;
//			}
//}

//12
//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//#define MAX 100
//
//int i, j;
//
//int SortObminMin(int m[], int n);
//int SortObminMax(int m[], int n);
//
//main()
//{
//	unsigned int n = 0;
//	int  u[MAX], m[MAX], *pu = u, * pm = m, s1, s2;
//	do
//	{
//		printf("m[%i] = ", n);
//		scanf_s("%i", &u[n]);
//	} while ((u[n++]) && (n != MAX));
//	n = (*(pu + n - 1)) ? n : --n; /* n - kilkist elemetiv masyvu */
//	printf("Masyv:\n");
//	for (i = 0; i < n; i++)
//	{
//		printf("%6i", *(pu + i));
//		*(pm + i) = *(pu + i);
//	}	
//	s1 = SortObminMin(u, n);
//	s2 = SortObminMax(m, n);
//		if (!(s1))
//		printf("\nYes >>");
//	else if (!(s2))
//		printf("\nYes <<");
//	else
//		printf("\nNo");	
//	_getch();
//	return 0;
//}
///*sortuvannya obminom*/
//int SortObminMin(int m[], int n)
//{
//	int t, s = 0;
//	for (i = 0; i < n - 1; i++)
//		for (j = 0; j < n - 1; j++)		
//			if (m[j + 1] < m[j])
//			{
//				t = m[j];
//				m[j] = m[j + 1];
//				m[j + 1] = t;
//				s++;
//			}
//	return s;
//}
//int SortObminMax(int m[], int n)
//{
//	int t, s = 0;
//	for (i = 0; i < n - 1; i++)
//		for (j = 0; j < n - 1; j++)
//			if (m[j + 1] > m[j])
//			{
//				t = m[j];
//				m[j] = m[j + 1];
//				m[j + 1] = t;
//				s++;
//			}
//	return s;
//}

//13
//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//#define MAX 100
//
//int i, j;
//
//SortObminMin(int m[], int n);
//
//main()
//{
//	int  u[MAX], m[MAX], * pm = m, *pu = u, n = 0, s = 0, max = 0, j, k = 0;
//	do
//	{
//		printf("m[%i] = ", n);
//		scanf_s("%i", &u[n]);
//	} while ((u[n++]) && (n != MAX));
//	n = (*(pu + n - 1)) ? n : --n; /* n - kilkist elemetiv masyvu */
//	printf("Masyv:\n");
//	for (i = 0; i < n; i++)
//		printf("%6i", *(pu + i));
//	SortObminMin(u, n);
//	printf("\nsort:\n");
//	for (i = 0; i < n; i++)
//		printf("%6i", *(pu + i));
//	i = 0;
//	while (i < n) {
//		if ((u[i] + 1) == u[i + 1]) {
//			j = i;
//			while ((u[i] + 1) == u[i + 1])
//			{
//				s++;
//				i++;
//			}
//			if (max < s)
//			{
//				max = ++s;
//				while (k < max)
//					m[k++] = u[j++];
//			}
//			k = 0;
//			s = 0;
//		}
//		else
//			i++;
//	}
//	printf("\nmax = %i\n", max);
//	printf("Result:\n");
//	for (i = 0; i < max; i++)
//		printf("%6i", *(pm + i));
//	_getch();
//	return 0;
//}
///*sortuvannya obminom*/
//SortObminMin(int m[], int n)
//{
//	int t;
//	for (i = 0; i < n - 1; i++)
//		for (j = 0; j < n - 1; j++)		
//			if (m[j + 1] < m[j])
//			{
//				t = m[j];
//				m[j] = m[j + 1];
//				m[j + 1] = t;
//			}
//
//}

//14
//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//#define MAX 100
//
//SortObminMin(int m[], int n);
//
//main()
//{
//	int  u[MAX], *pu = u, m[MAX], * pm = m, n = 0, j=0, i;
//	do
//	{
//		printf("m[%i] = ", n);
//		scanf_s("%i", &u[n]);
//	} while ((u[n++]) && (n != MAX));
//	n = (*(pu + n - 1)) ? n : --n; /* n - kilkist elemetiv masyvu */
//	printf("Masyv:\n");
//	for (i = 0; i < n; i++)
//		printf("%6i", *(pu + i));
//	SortObminMin(u, n);
//	printf("\nsort:\n");
//	for (i = 0; i < n; i++)
//		printf("%6i", *(pu + i));
//	while ((i) && (u[i] != (u[i - 1] + 1)))
//		i--;
//	j = 0;
//	while ((u[i] - 1) == u[i - 1])
//		m[j++] = u[i--];
//	if (u[i] +1 == u[i + 1])
//		m[j++] = u[i];
//	SortObminMin(m, j);
//	printf("\nResult:\n");
//	for (i = 0; i < j; i++)
//		printf("%6i", *(pm + i));
//	_getch();
//	return 0;
//}
//	
//	
///*sortuvannya obminom*/
//SortObminMin(int m[], int n)
//{
//	int t, j, i;
//	for (i = 0; i < n - 1; i++)
//		for (j = 0; j < n - 1; j++)		
//			if (m[j + 1] < m[j])
//			{
//				t = m[j];
//				m[j] = m[j + 1];
//				m[j + 1] = t;
//			}
//
//}


//15
//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//#define MAX 100
//
//int i, j;
//
//SortObminMax(int m[], int n);
//
//main()
//{
//	int  u[MAX], * pu = u, n = 0;
//	do
//	{
//		printf("m[%i] = ", n);
//		scanf_s("%i", &u[n]);
//	} while ((u[n++]) && (n != MAX));
//	n = (*(pu + n - 1)) ? n : --n; /* n - kilkist elemetiv masyvu */
//	printf("Masyv:\n");
//	for (i = 0; i < n; i++)
//		printf("%6i", *(pu + i));
//	SortObminMax(u, n);
//	printf("\nsort:\n");
//	for (i = 0; i < n; i++)
//		printf("%6i", *(pu + i));
//	printf("\nResult:\n");
//	for (i = 0; i < n; i++) {
//		if (u[i] == (u[i + 1] + 1)) {
//			while (u[i] == (u[i + 1] + 1)) {
//				printf("%6i", u[i++]);
//			}
//			if ((u[i]) && (u[i] + 1 == (u[i - 1]))) {
//				printf("%6i", u[i]);
//			}
//			break;
//		}
//	}
//	_getch();
//	return 0;
//}
///*sortuvannya obminom*/
//SortObminMax(int m[], int n)
//{
//	int t;
//	for (i = 0; i < n - 1; i++)
//		for (j = 0; j < n - 1; j++)
//			if (m[j + 1] > m[j])
//			{
//				t = m[j];
//				m[j] = m[j + 1];
//				m[j + 1] = t;
//			}
//
//}


//16
//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//#define MAX 100
//
//SortObminMax(float m[], int n);
//
//main()
//{
//	float  M1[MAX], M2[MAX], M3[MAX], * pM1 = M1, * pM2 = M2, * pM3 = M3;
//	int n = 0, k = 0, i, j = 0;
//	do
//	{
//		printf("M1[%i] = ", n);
//		scanf_s("%f", &M1[n]);
//	} while ((M1[n++]) && (n != MAX));
//	n = (*(pM1 + n - 1)) ? n : --n; /* n - kilkist elemetiv masyvu */
//	printf("Masyv:\n");
//	for (i = 0; i < n; i++)
//		printf("%9.3f", *(pM1 + i));
//	SortObminMax(M1, n);
//	printf("\nsort:\n");
//	for (i = 0; i < n; i++)
//		printf("%9.3f", *(pM1 + i));
//	for (i = 0; i < n; i++) {
//		if (M1[i] >= 0) 
//			M2[k++] = M1[i];
//		else 
//			M3[j++] = M1[i];
//	}
//	printf("\nResult M2:\n");
//	for (i = 0; i < k; i++)
//		printf("%9.3f", *(pM2 + i));
//	printf("\nResult M3:\n");
//	for (i = 0; i < j; i++)
//		printf("%9.3f", *(pM3 + i));
//	_getch();
//	return 0;
//}
///*sortuvannya obminom*/
//SortObminMax(float m[], int n)
//{
//	int i,j;
//	float t;
//	for (i = 0; i < n - 1; i++)
//		for (j = 0; j < n - 1; j++)
//			if (m[j + 1] > m[j])
//			{
//				t = m[j];
//				m[j] = m[j + 1];
//				m[j + 1] = t;
//			}
//}

//17
//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//#define MAX 100
//
//SortObminMax(int m[], int n);
//SortObminMin(int m[], int n);
//
//main()
//{
//	int  M1[MAX], M2[MAX], M3[MAX], * pM1 = M1, * pM2 = M2, * pM3 = M3;
//	int n = 0, k = 0, i, j = 0;
//	do
//	{
//		printf("M1[%i] = ", n);
//		scanf_s("%i", &M1[n]);
//	} while ((M1[n++]) && (n != MAX));
//	n = (*(pM1 + n - 1)) ? n : --n; /* n - kilkist elemetiv masyvu */
//	printf("Masyv:\n");	
//	for (i = 0; i < n; i++) {
//		printf("%6i", *(pM1 + i));
//		if (!(M1[i] & 1))
//			M2[k++] = M1[i];
//		else
//			M3[j++] = M1[i];
//	}
//	SortObminMin(M2, k);
//	SortObminMax(M3, j);
//	printf("\nResult M2:\n");
//	for (i = 0; i < k; i++)
//		printf("%6i", *(pM2 + i));
//	printf("\nResult M3:\n");
//	for (i = 0; i < j; i++)
//		printf("%6i", *(pM3 + i));
//	_getch();
//	return 0;
//}
///*sortuvannya obminom*/
//SortObminMax(int m[], int n)
//{
//	int t, i, j;
//	for (i = 0; i < n - 1; i++)
//		for (j = 0; j < n - 1; j++)
//			if (m[j + 1] > m[j])
//			{
//				t = m[j];
//				m[j] = m[j + 1];
//				m[j + 1] = t;
//			}
//}
///*sortuvannya obminom*/
//SortObminMin(int m[], int n)
//{
//	int t, i, j;
//	for (i = 0; i < n - 1; i++)
//		for (j = 0; j < n - 1; j++)
//			if (m[j + 1] < m[j])
//			{
//				t = m[j];
//				m[j] = m[j + 1];
//				m[j + 1] = t;
//			}
//}

//18
//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//#define MAX 100
//
//SortObminMin(float m[], int n);
//
//main()
//{
//	float  M1[MAX], M2[MAX], * pM1 = M1, * pM2 = M2;
//	int n = 0, k = 0, i;
//	do
//	{
//		printf("M1[%i] = ", n);
//		scanf_s("%f", &M1[n]);
//	} while ((M1[n++]) && (n != MAX));
//	n = (*(pM1 + n - 1)) ? n : --n; /* n - kilkist elemetiv masyvu */
//	printf("Masyv:\n");	
//	for (i = 0; i < n; i++) {
//		printf("%9.3f", *(pM1 + i));
//		if (!(i & 1))
//			M2[k++] = M1[i];
//	}
//	SortObminMin(M2, k);
//	printf("\nResult M2:\n");
//	for (i = 0; i < k; i++)
//		printf("%9.3f", *(pM2 + i));
//	_getch();
//	return 0;
//}
//
///*sortuvannya obminom*/
//SortObminMin(float m[], int n)
//{
//	int i, j;
//	float t;
//	for (i = 0; i < n - 1; i++)
//		for (j = 0; j < n - 1; j++)
//			if (m[j + 1] < m[j])
//			{
//				t = m[j];
//				m[j] = m[j + 1];
//				m[j + 1] = t;
//			}
//}

//19
//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//#define MAX 100
//
//SortObminMax(int m[], int n);
//
//main()
//{
//	int  M1[MAX], M2[MAX], M3[MAX], * pM1 = M1, * pM2 = M2, * pM3 = M3;
//	int n, k = 0, i, j = 0;
//	printf("n = "); scanf_s("%i", &n);
//	do
//	{
//		printf("M1[%i] = ", j);
//		scanf_s("%i", &M1[j]);
//	} while ((M1[j++]) && (j != MAX));
//	j = (*(pM1 + j - 1)) ? j : --j; /* j - kilkist elemetiv masyvu */
//	printf("Masyv:\n");	
//	for (i = 0; i < j; i++) {
//		printf("%6i", *(pM1 + i));
//		if (!((M1[i] / n) & 1))
//			M2[k++] = M1[i];
//	}
//	SortObminMax(M2, k);
//	printf("\nResult M2:\n");
//	for (i = 0; i < k; i++)
//		printf("%6i", *(pM2 + i));
//	_getch();
//	return 0;
//}
///*sortuvannya obminom*/
//SortObminMax(int m[], int n)
//{
//	int t, i, j;
//	for (i = 0; i < n - 1; i++)
//		for (j = 0; j < n - 1; j++)
//			if (m[j + 1] < m[j])
//			{
//				t = m[j];
//				m[j] = m[j + 1];
//				m[j + 1] = t;
//			}
//}


//20
//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//#include <math.h>
//#define MAX 100
//
//SortObminMax(float m[], int n);
//
//main()
//{
//	float  M1[MAX], M2[MAX], * pM1 = M1, * pM2 = M2;
//	int n = 0, k = 0, i;
//	do
//	{
//		printf("M1[%i] = ", n);
//		scanf_s("%f", &M1[n]);
//	} while ((M1[n++]) && (n != MAX));
//	n = (*(pM1 + n - 1)) ? n : --n; /* n - kilkist elemetiv masyvu */
//	printf("Masyv:\n");	
//	for (i = 0; i < n; i++) {
//		printf("%9.3f", *(pM1 + i));
//		if ((int)floor(M1[i]) & 1)
//			M2[k++] = M1[i];
//	}
//	SortObminMax(M2, k);
//	printf("\nResult M2:\n");
//	for (i = 0; i < k; i++)
//		printf("%9.3f", *(pM2 + i));
//	_getch();
//	return 0;
//}
//
///*sortuvannya obminom*/
//SortObminMax(float m[], int n)
//{
//	int i, j;
// float t;
//	for (i = 0; i < n - 1; i++)
//		for (j = 0; j < n - 1; j++)
//			if (m[j + 1] > m[j])
//			{
//				t = m[j];
//				m[j] = m[j + 1];
//				m[j + 1] = t;
//			}
//}

//21
//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//#include <math.h>
//#define MAX 100
//
//SortObminMin(float m[], int n);
//
//main()
//{
//	float  M1[MAX], M2[MAX], * pM1 = M1, * pM2 = M2;
//	int n = 0, k = 0, i;
//	do
//	{
//		printf("M1[%i] = ", n);
//		scanf_s("%f", &M1[n]);
//	} while ((M1[n++]) && (n != MAX));
//	n = (*(pM1 + n - 1)) ? n : --n; /* n - kilkist elemetiv masyvu */
//	printf("Masyv:\n");	
//	for (i = 0; i < n; i++) {
//		printf("%9.3f", *(pM1 + i));
//		M2[k++] = floor(M1[i]);
//	}
//	SortObminMin(M2, k);
//	printf("\nResult M2:\n");
//	for (i = 0; i < k; i++)
//		printf("%9.3f", *(pM2 + i));
//	_getch();
//	return 0;
//}
//
///*sortuvannya obminom*/
//SortObminMin(float m[], int n)
//{
//	int i, j;
//	float t;
//	for (i = 0; i < n - 1; i++)
//		for (j = 0; j < n - 1; j++)
//			if (m[j + 1] < m[j])
//			{
//				t = m[j];
//				m[j] = m[j + 1];
//				m[j + 1] = t;
//			}
//}

//22
//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//#include <math.h>
//#define MAX 100
//
//SortObminMin(float m[], int n);
//
//main()
//{
//	float  M1[MAX], * pM1 = M1, sum = 0, s, k = 0;
//	int n = 0, i;
//	do
//	{
//		printf("M1[%i] = ", n);
//		scanf_s("%f", &M1[n]);
//	} while ((M1[n++]) && (n != MAX));
//	n = (*(pM1 + n - 1)) ? n : --n; /* n - kilkist elemetiv masyvu */
//	printf("Masyv:\n");	
//	for (i = 0; i < n; i++) {
//		printf("%9.3f", *(pM1 + i));
//		if (*(pM1 + i) > 0) 
//		{
//			sum += M1[i];
//			k++;
//		}
//	}
//	s = sum / k;
//	for (i = 0; i < n; i++)
//		M1[i] = fabsf(M1[i] - s);
//	SortObminMin(M1, n);
//	printf("\nResult:\n");
//	for (i = 0; i < n; i++)
//		printf("%9.3f", M1[i]);
//	_getch();
//	return 0;
//}
//
///*sortuvannya obminom*/
//SortObminMin(float m[], int n)
//{
//	int i, j;
//	float t;
//	for (i = 0; i < n - 1; i++)
//		for (j = 0; j < n - 1; j++)
//			if (m[j + 1] < m[j])
//			{
//				t = m[j];
//				m[j] = m[j + 1];
//				m[j + 1] = t;
//			}
//}



//23
//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//#include <math.h>
//#include <limits.h>
//#define MAX 100
//
//SortObminMax(float m[], int n);
//
//main()
//{
//	float  M1[MAX], * pM1 = M1, s = INT_MIN;
//	int n = 0, i;
//	do
//	{
//		printf("M1[%i] = ", n);
//		scanf_s("%f", &M1[n]);
//	} while ((M1[n++]) && (n != MAX));
//	n = (*(pM1 + n - 1)) ? n : --n; /* n - kilkist elemetiv masyvu */
//	printf("Masyv:\n");	
//	for (i = 0; i < n; i++) {
//		printf("%9.3f", *(pM1 + i));
//		if (s < M1[i])
//			s = M1[i];
//	}
//	printf("\ns = %f", s);
//	for (i = 0; i < n; i++)
//		M1[i] = fabsf(M1[i] - s);
//	SortObminMax(M1, n);
//	printf("\nResult:\n");
//	for (i = 0; i < n; i++)
//		printf("%9.3f", M1[i]);
//	_getch();
//	return 0;
//}
//
///*sortuvannya obminom*/
//SortObminMax(float m[], int n)
//{
//	int i, j;
//	float t;
//	for (i = 0; i < n - 1; i++)
//		for (j = 0; j < n - 1; j++)
//			if (m[j + 1] > m[j])
//			{
//				t = m[j];
//				m[j] = m[j + 1];
//				m[j + 1] = t;
//			}
//}


//24
//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//#include <math.h>
//#define MAX 100
//
//SortObminMax(float m[], int n);
//
//main()
//{
//	float  M1[MAX], * pM1 = M1, M2[MAX], * pM2 = M2;
//	int n = 0, i, k = 0;
//	do
//	{
//		printf("M1[%i] = ", n);
//		scanf_s("%f", &M1[n]);
//	} while ((M1[n++]) && (n != MAX));
//	n = (*(pM1 + n - 1)) ? n : --n; /* n - kilkist elemetiv masyvu */
//	printf("Masyv:\n");	
//	for (i = 0; i < n; i++) {
//		printf("%9.3f", *(pM1 + i));
//		if (!((int)floorf(M1[i]) & 1))
//			M2[k++] = floorf(M1[i]);
//	}
//	SortObminMax(M2, k);
//	printf("\nResult:\n");
//	for (i = 0; i < k; i++)
//		printf("%9.3f", M2[i]);
//	_getch();
//	return 0;
//}
//
///*sortuvannya obminom*/
//SortObminMax(float m[], int n)
//{
//	int i, j;
//	float t;
//	for (i = 0; i < n - 1; i++)
//		for (j = 0; j < n - 1; j++)
//			if (m[j + 1] > m[j])
//			{
//				t = m[j];
//				m[j] = m[j + 1];
//				m[j + 1] = t;
//			}
//}


//25
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#include <math.h>
//#define _USE_MATH_DEFINES
//#define MAX 100
//
//SortObminMin(float m[], int n);
//
//main()
//{
//	float  M1[MAX], *pM1 = M1, M2[MAX], *pM2 = M2, n, d;
//	int i, k = 0, j = 0;
//	srand((unsigned)time(0));
//	n = (float)rand() / RAND_MAX;
//	printf("n = %f\n", n);
//	do
//	{
//		printf("M1[%i] = ", j);
//		scanf_s("%f", &M1[j]);
//	} while ((M1[j++]) && (j != MAX));
//	j = (*(pM1 + j - 1)) ? j : --j; /* n - kilkist elemetiv masyvu */
//	printf("Masyv:\n");	
//	for (i = 0; i < j; i++)
//	{
//		printf("%9.3f", *(pM1 + i));
//		if (modff(M1[i], &d) > n)
//			M2[k++] = M1[i];
//	}
//	SortObminMin(M2, k);
//	printf("\nResult:\n");
//	for (i = 0; i < k; i++)
//		printf("%9.3f", *(pM2 + i));
//	_getch();
//	return 0;
//}
//
///*sortuvannya obminom*/
//SortObminMin(float m[], int n)
//{
//	int i, j;
//	float t;
//	for (i = 0; i < n - 1; i++)
//		for (j = 0; j < n - 1; j++)
//			if (m[j + 1] < m[j])
//			{
//				t = m[j];
//				m[j] = m[j + 1];
//				m[j + 1] = t;
//			}
//}