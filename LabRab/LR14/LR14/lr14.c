//ќрган≥зувати базу даних дл€ складу промислових товар≥в, використавши
//структуру з наступними пол€ми :
//Ц номер накладноњ;
//Ц варт≥сть одиниц≥ товару;
//Ц найменуванн€ товару;
//Ц к≥льк≥сть кожноњ одиниц≥ товару.
//ƒодатковий серв≥с : забезпечити можлив≥сть зб≥льшенн€ / зменшенн€ вар -
//тост≥ товар≥в на склад≥ у заданому процентному в≥дношенн≥.

#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#define MAX 50
#define N 15

struct base
{
	int num;
	int sum;
	char tovar[N];
	int kol;
};

struct base Bases[MAX];
int AMOUNT = 0;

void Line(void);
void Exit(void);
void GetNameTovar(int n);
void InputData(void);
void ViewOne(int n);
void ViewBase(void);
void EditData(void);
void SearchData(void);
void Service(void);


//int DeleteData();
//int DeleteBase();


int main(void)
{
	int i;
	char c;
	do
	{
		system("cls"); // clear screen (console)
		//print menu
		puts("M E N U");
		for (int i = 1; i <= 23; i++) putc('\x5F', stdout); // line
		printf("\n");
		puts("1. Input data");
		puts("2. Edit data");
		puts("3. Delete data");
		puts("4. Delete base");
		puts("5. Search data");
		puts("6. View base");
		puts("7. Service");
		puts("0. E X I T");
		Line();
		// get char for the next command
		do
			c = _getch();
		while ((!isdigit(c)) || (c == '8') || (c == '9'));
		switch (c)
		{
		case '0':break;
		case '1':InputData(); break;
		case '2':EditData(); break;
			//case '3':i = DeleteData(m, i); break;
			//case '4':i = DeleteBase(i); break;
		case '5':SearchData(); break;
		case '6':ViewBase(); break;
		case '7':Service(); break;
		}
	} while (c != '0');
	return 0;
}


void Service(void)
{
	system("cls"); // clear screen (console)
	int n; char c;
	float change;
	printf("Print the number beetween 0 and %i: ", AMOUNT - 1); scanf_s("%i", &n);
	Line();
	ViewOne(n);
	printf("Print the change: "); scanf_s("%f", &change);
	printf("Bigger(1) or smaller(2)");
	do
		c = _getch();
	while ((!isdigit(c)) || ((c >= '3') && (c <= '9')));
	switch (c)
	{
		case '1':Bases[n].sum += Bases[n].sum * (change / 100); break;
		case '2':Bases[n].sum -= Bases[n].sum * (change / 100); break;
	}
	printf("\n");
	Line();
	ViewOne(n);
	Exit();
}

void SearchData(void)
{
	system("cls"); // clear screen (console)
	int i, n;
	printf("Input the num of tovar: "); scanf_s("%i", &n);
	for (i = 0; i < AMOUNT; i++)
	{
		if (Bases[i].num == n)
		{
			Line();
			ViewOne(i);
			Exit();
			return 0;
		}		
	}
	if (i == AMOUNT)
	{
		printf("Not Found\n");
		Line();
		Exit();
		return 0;
	}

}


void GetNameTovar(int n)
{
	printf("Input name of tovar: ");
	for (int i = 0; i < N; i++)
	{
		Bases[n].tovar[i] = _getche();
		if (Bases[n].tovar[i] == '\r')
		{
			Bases[n].tovar[i] = '\0';
			break;
		}
	}
	printf("\n");
	return 0;
}

void InputData(void)
{
	char c;
	system("cls"); // clear screen (console)
	//get info
	GetNameTovar(AMOUNT);
	printf("Input number: "); scanf_s("%i", &Bases[AMOUNT].num);
	printf("Input price: "); scanf_s("%i", &Bases[AMOUNT].sum);
	printf("Input amount: "); scanf_s("%i", &Bases[AMOUNT].kol);
	AMOUNT++;
	Line();
	Exit();
	return 0;
}

//print info for one tovar
void ViewOne(int n)
{
	printf("1. name of tovar: ");
	puts(Bases[n].tovar);
	printf("2. number: %i\n", Bases[n].num);
	printf("3. price: %i\n", Bases[n].sum);
	printf("4. amount: %i\n", Bases[n].kol);
	Line();
	return 0;
}

void ViewBase(void)
{
	system("cls"); // clear screen (console)
	for (int i = 0; i < AMOUNT; i++)
		ViewOne(i);
	Exit();
	return 0;
}

void EditData(void)
{
	system("cls"); // clear screen (console)
	char c;
	int n;
	printf("Print the number beetween 0 and %i: ", AMOUNT - 1); scanf_s("%i", &n);
	Line();
	ViewOne(n);
	// get char for the next command
	do
		c = _getch();
	while ((!isdigit(c)) || ((c >= '5') && (c <= '9')));
	switch (c)
	{
	case '1':
		GetNameTovar(n);  break;
	case '2':
		printf("Input number: "); scanf_s("%i", &Bases[n].num); break;
	case '3':
		printf("Input price: "); scanf_s("%i", &Bases[n].sum); break;
	case '4':
		printf("Input amount: "); scanf_s("%i", &Bases[n].kol); break;
	}
	Line();
	Exit();
	return 0;
}

void Line(void)
{
	for (int i = 1; i <= 23; i++) putc('\x5F', stdout); // line
	printf("\n");
	return 0;
}

void Exit(void)
{
	puts("Exit - press 0");
	char c;
	do
		c = _getch();
	while (c != '0');
	return 0;
}