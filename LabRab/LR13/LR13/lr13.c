//example
//#include <stdio.h>
//#include <conio.h>
//#include <string.h>
//#include <stdlib.h>
//#define MAXSTR 128
//
//int FindNum(char*, char*);
//
//main()
//{
//	const char enter = '\r';
//	int i = 0;
//	char s[MAXSTR], s1[MAXSTR];
//	printf("s = ");
//	do
//		s[i] = _getche();
//	while (s[i++] != enter);
//	s[i - 1] = '\0';
//	printf("\ns1 = ");
//	gets_s(s1, MAXSTR);
//	if (strlen(s1))
//		printf("Sum total << %s >> = %i", s1, FindNum(s, s1));
//	else printf("Incorrect data!");
//	_getche();
//	return 0;
//}
//
//int FindNum(char*s_a, char*s_b)
//{
//	int j = 0;
//	char* p = (char*)malloc(MAXSTR);
//	while (p = strstr(s_a, s_b))
//	{
//		printf("%i) ", ++j);
//		puts(p);
//		strcpy_s(s_a, MAXSTR, p + strlen(s_b));
//	}
//	free(p);
//	return j;
//}

//1
//#include <stdio.h>
//#include <stdlib.h>
//#include <conio.h>
//#include <string.h>
//#define MAXSTR 128
//
//Underline(char string[], char underlie[], int n, char find);
//
//main()
//{
//    char s[MAXSTR], str[MAXSTR], symbol;
//    int k;
//    symbol = _getche();
//    printf("\nEnter a string: "); gets_s(s, MAXSTR);
//    k = strnlen(s, MAXSTR);
//    Underline(s, str, k, symbol);
//    puts(s); puts(str);
//    _getch();
//    return 0;
//}
//
//Underline(char string[], char underlie[], int n, char find)
//{
//    int i;
//    for (i = 0; i < n; i++)
//        underlie[i] = (find == string[i]) ? '_' : ' ';
//    underlie[i] = '\0';
//}



//2
//#include <stdio.h>
//#include <stdlib.h>
//#include <conio.h>
//#include <string.h>
//#define MAXSTR 128
//
//Space(char string[], char substring[], char result[]);
//
//main()
//{
//    char s[MAXSTR], str[MAXSTR], res[MAXSTR];
//    printf("\nEnter a main string: "); gets_s(s, MAXSTR);
//    printf("\nEnter a substring: "); gets_s(str, MAXSTR);
//    Space(s, str, res);
//    puts(s);
//    puts(res);
//    _getch();
//    return 0;
//}
//
//Space(char string[], char substring[], char result[])
//{
//    int i = 0, j, k = 0, s = 0, v;
//    int amountString = strlen(string);
//    int amountSubstring = strlen(substring);
//    while (i < amountString)
//    {
//        v = i;
//        for (j = 0; j < amountSubstring; j++)
//            if (string[i++] == substring[j])
//                s++;
//        i = v;
//        if (amountSubstring == s)
//        {
//            for (j = 0; j < amountSubstring; j++)
//            {
//                i++;
//                result[k++] = '_';
//            }
//                
//        }
//        else
//        {
//            i++;
//            result[k++] = ' ';
//        }
//        s = 0;
//    }
//    result[k] = '\0';    
//}



//3
//#include <stdio.h>
//#include <stdlib.h>
//#include <conio.h>
//#include <string.h>
//#define MAXSTR 128
//
//int Delete(char string[], char substring[], char result[]);
//
//main()
//{
//    char s[MAXSTR], str[MAXSTR], res[MAXSTR];
//    printf("Enter a main string: "); gets_s(s, MAXSTR);
//    printf("Enter a substring: "); gets_s(str, MAXSTR);
//    printf("del = %i\n", Delete(s, str, res));
//    puts(res);
//    _getch();
//    return 0;
//}
//
//int Delete(char string[], char substring[], char result[])
//{
//    int i = 0, j, k = 0, s = 0, v, del = 0;
//    int amountSubstring = strlen(substring);
//    while (i < strlen(string))
//    {
//        v = i;
//        for (j = 0; j < amountSubstring; j++)
//            if (string[i++] == substring[j])
//                s++;
//        i = v;
//        if (amountSubstring == s)
//        {
//            del++;
//            for (j = 0; j < amountSubstring; j++)
//                i++;
//        }
//        else
//            result[k++] = string[i++];
//        s = 0;
//    }
//    result[k] = '\0';    
//    return del;
//}

//4
//#include <stdio.h>
//#include <stdlib.h>
//#include <conio.h>
//#include <string.h>
//#define MAXSTR 128
//
//Add(char string[], char substring[]);
//
//main()
//{
//    char s[MAXSTR], str[MAXSTR];
//    printf("Enter a main string: "); gets_s(s, MAXSTR);
//    printf("Enter a substring: "); gets_s(str, MAXSTR);
//    Add(s, str);
//    puts(s);
//    _getch();
//    return 0;
//}
//
//Add(char string[], char substring[])
//{
//    char t[MAXSTR];
//    strcpy_s(t, MAXSTR, substring);
//    strcat_s(t, MAXSTR, string);
//    strcat_s(t, MAXSTR, substring);
//    strcpy_s(string, MAXSTR, t);
//}

//5
//#include <stdio.h>
//#include <stdlib.h>
//#include <conio.h>
//#include <string.h>
//#define MAXSTR 128
//
//Space(char string[], char symbol, char result[]);
//
//main()
//{
//    char s[MAXSTR], str[MAXSTR], c;
//    printf("c = "); c = _getche();
//    printf("\nEnter a string: "); gets_s(s, MAXSTR);
//    Space(s, c, str);
//    puts(str);
//    _getch();
//    return 0;
//}
//
//Space(char string[], char symbol, char result[])
//{
//    int i, n, k = 0, j;
//    n = strlen(string);
//    char strsym[MAXSTR] = { ' ', symbol, ' ', 0 };
//    for (i = 0; i < n; i++) 
//    {
//        if (strsym[1] == string[i])
//            for (j = 0; j < strlen(strsym); j++)
//                result[k++] = strsym[j];
//        else
//            result[k++] = string[i];
//    }
//    result[k] = '\0';
//}

//6
//#include <stdio.h>
//#include <stdlib.h>
//#include <conio.h>
//#include <string.h>
//#define MAXSTR 128
//
//Space(char string[], char substring[], char result[]);
//
//main()
//{
//    char s[MAXSTR], str[MAXSTR], res[MAXSTR];
//    printf("\nEnter a main string: "); gets_s(s, MAXSTR);
//    printf("\nEnter a substring: "); gets_s(str, MAXSTR);
//    Space(s, str, res);
//    puts(res);
//    _getch();
//    return 0;
//}
//
//Space(char string[], char substring[], char result[])
//{
//    int i = 0, j, k = 0, s = 0, v;
//    int amountString = strlen(string);
//    int amountSubstring = strlen(substring);
//    while (i < amountString)
//    {
//        v = i;
//        for (j = 0; j < amountSubstring; j++)
//            if (string[i++] == substring[j])
//                s++;
//        i = v;
//        if (amountSubstring == s)
//        {
//            result[k++] = ' ';
//            for (j = 0; j < amountSubstring; j++)
//                result[k++] = string[i++];
//            result[k++] = ' ';
//        }
//        else
//            result[k++] = string[i++];
//        s = 0;
//    }
//    result[k] = '\0';    
//}

//v_7
//#include <stdio.h>
//#include <conio.h>
//#include <string.h>
//#include <stdlib.h>
//#define MAXSTR 128
//
//main()
//{
//	const char enter = '\r';
//	int i = 2, middle;
//	char s[MAXSTR], s1[MAXSTR] = "  ";
//	printf("s = "); 
//	gets_s(s, MAXSTR);
//	printf("s1 = ");
//	do
//		s1[i] = _getche();
//	while (s1[i++] != enter);
//	s1[i - 1] = s1[i] = ' ';
//	s1[i + 1] = '\0';
//	middle = strlen(s) / 2;
//	printf("\nmiddle = %i\n", middle);
//	strcat_s(s1, MAXSTR, s + middle);
//	s[middle] = '\0';
//	strcat_s(s, MAXSTR, s1);
//	puts(s);
//	_getche();
//	return 0;
//}


//v_7 2way
//#include <stdio.h>
//#include <conio.h>
//#include <string.h>
//#include <stdlib.h>
//#define MAXSTR 128
//
//main()
//{
//	int i = 2, middle;
//	char s[MAXSTR], s1[MAXSTR];
//	const char space2[] = "  ";
//	printf("s = ");
//	gets_s(s, MAXSTR);
//	printf("s1 = ");
//	gets_s(s1, MAXSTR);
//	middle = strlen(s) / 2;
//	printf("middle = %i\n", middle);
//	strcat_s(s1, MAXSTR, space2);
//	strcat_s(s1, MAXSTR, s + middle);
//	s[middle] = '\0';
//	strcat_s(s, MAXSTR, space2);
//	strcat_s(s, MAXSTR, s1);
//	puts(s);
//	_getche();
//	return 0;
//}



//8
//#include <stdio.h>
//#include <stdlib.h>
//#include <conio.h>
//#include <string.h>
//#define MAXSTR 128
//
//Add(char string[], char symbol, char result[]);
//
//main()
//{
//    char s[MAXSTR], c, res[MAXSTR];
//    printf("c = "); c = _getche();
//    printf("\nEnter a string: "); gets_s(s, MAXSTR);
//    Add(s, c, res);
//    puts(res);
//    _getch();
//    return 0;
//}
//
//Add(char string[], char symbol, char result[])
//{
//    int i = 0, j, k = 0, s = 0, v;
//    while (i < strlen(string))
//    {
//        for (j = 0; j < 2; j++)
//            result[k++] = string[i++];
//        result[k++] = symbol;
//    }
//    result[k] = '\0';    
//}

//9
//#include <stdio.h>
//#include <stdlib.h>
//#include <conio.h>
//#include <string.h>
//#define MAXSTR 128
//
//Space(char string[], char result[]);
//
//main()
//{
//    char s[MAXSTR], res[MAXSTR];
//    printf("Enter a string: "); gets_s(s, MAXSTR);
//    Space(s, res);
//    puts(res);
//    _getch();
//    return 0;
//}
//
//Space(char string[], char result[])
//{
//    int i = 0, k = 0;
//    while (i < strlen(string))
//        result[k++] = (k & 1) ? ' ' : string[i++];
//    result[k] = '\0';    
//}

//10
//#include <stdio.h>
//#include <stdlib.h>
//#include <conio.h>
//#include <string.h>
//#define MAXSTR 128
//
//Add(char string[], char substring[], char result[]);
//
//main()
//{
//    char s[MAXSTR], subs[MAXSTR], res[MAXSTR];
//    printf("Enter a string: "); gets_s(s, MAXSTR);
//    printf("Enter a substring: "); gets_s(subs, MAXSTR);
//    Add(s, subs, res);
//    puts(res);
//    _getch();
//    return 0;
//}
//
//Add(char string[], char substring[], char result[])
//{
//    int i = 0, k = 0, j, m = 2;
//    while (i < strlen(string))
//    {
//        for (j = 0; j < m; j++)
//        {
//            result[k++] = string[i++];
//        }
//        m *= 2;
//        for (j = 0; j < strlen(substring); j++)
//            result[k++] = substring[j];
//    }
//    result[k] = '\0';    
//}

//11
//#include <stdio.h>
//#include <stdlib.h>
//#include <conio.h>
//#include <string.h>
//#define MAXSTR 128
//
//Add(char string[], char substring[], int m, char result[]);
//
//main()
//{
//    int n;
//    char s[MAXSTR], subs[MAXSTR], res[MAXSTR];
//    printf("Enter a string: "); gets_s(s, MAXSTR);
//    printf("Enter a substring: "); gets_s(subs, MAXSTR);
//    printf("n = ");  scanf_s("%i", &n);
//    Add(s, subs, n, res);
//    puts(res);
//    _getch();
//    return 0;
//}
//
//Add(char string[], char substring[], int m, char result[])
//{
//    int i = 0, k = 0, j;
//    while (i < strlen(string))
//    {
//        for (j = 0; j < m; j++)
//        {
//            result[k++] = string[i++];
//        }
//        for (j = 0; j < strlen(substring); j++)
//            result[k++] = substring[j];
//    }
//    result[k] = '\0';
//}

//12
//#include <stdio.h>
//#include <stdlib.h>
//#include <conio.h>
//#include <string.h>
//#define MAXSTR 128
//
//Add(char string[], int m, char result[]);
//
//main()
//{
//    int n;
//    char s[MAXSTR], subs[MAXSTR], res[MAXSTR];
//    printf("Enter a string: "); gets_s(s, MAXSTR);
//    printf("Enter a substring: "); gets_s(subs, MAXSTR);
//    printf("n = ");  scanf_s("%i", &n);
//    Add(s, n, res);
//    puts(res);
//    _getch();
//    return 0;
//}
//
//Add(char string[], int m, char result[])
//{
//    int i = 0, k = 0, j, h = 2;
//    while (h < strlen(string))
//    {
//        j = h - 1;
//        for (i = 0; i < m; i++)
//            result[k++] = string[j++];
//        h *= 2;
//    }
//    result[k] = '\0';
//}


//13
//#include <stdio.h>
//#include <stdlib.h>
//#include <conio.h>
//#include <string.h>
//#define MAXSTR 128
//
//int Replace(char string[], char substring1[], char substring2[], char result[]);
//
//main()
//{
//    char s[MAXSTR], str1[MAXSTR], str2[MAXSTR], res[MAXSTR];
//    printf("Enter a main string: "); gets_s(s, MAXSTR);
//    printf("Enter a substring 1: "); gets_s(str1, MAXSTR);
//    printf("Enter a substring 2: "); gets_s(str2, MAXSTR);
//    printf("replacement = %i\n", Replace(s, str1, str2, res));
//    puts(res);
//    _getch();
//    return 0;
//}
//
//int Replace(char string[], char substring1[], char substring2[], char result[])
//{
//    int j, v, i = 0, k = 0, s = 0, replacement = 0;
//    int amountString = strlen(string);
//    int amountSubstring1 = strlen(substring1);
//    int amountSubstring2 = strlen(substring2);
//    while (i < amountString)
//    {
//        v = i;
//        for (j = 0; j < amountSubstring1; j++)
//            if (string[i++] == substring1[j])
//                s++;
//        i = v;
//        if (amountSubstring1 == s)
//        {
//            for (j = 0; j < amountSubstring2; j++)  
//                result[k++] = substring2[j];
//            i += amountSubstring1;      
//            replacement++;
//        }
//        else            
//            result[k++] = string[i++]; 
//        s = 0;
//    }
//    result[k] = '\0';   
//    return replacement;
//}

//14
//#include <stdio.h>
//#include <stdlib.h>
//#include <conio.h>
//#include <string.h>
//#define MAXSTR 128
//
//int Digit(char string[], char result[]);
//
//main()
//{
//    char s[MAXSTR], res[MAXSTR];
//    int sum = 0, i, amount;
//    printf("Enter a main string: "); gets_s(s, MAXSTR);
//    amount = Digit(s, res);
//    for (i = 0; i < amount; i++)
//        sum += (int)res[i] - 48;
//    puts(res);
//    printf("amount = %i\n", amount);
//    printf("sum = %i\n", sum);
//    _getch();
//    return 0;
//}
//
//int Digit(char string[], char result[])
//{
//    int i, k = 0;
//    int amountString = strlen(string);
//    for (i = 0; i < amountString; i++)
//        if (string[i] >= '0' && string[i] <= '9')
//            result[k++] = string[i];
//    result[k] = '\0'; 
//    return k;
//}

//15
//#include <stdio.h>
//#include <stdlib.h>
//#include <conio.h>
//#include <string.h>
//#define MAXSTR 128
//
//int Digit(char string[], char result[]);
//
//main()
//{
//    char s[MAXSTR], res[MAXSTR];
//    printf("Enter a main string: "); gets_s(s, MAXSTR);
//    printf("sum = %i\n", Digit(s, res));
//    puts(res);
//    _getch();
//    return 0;
//}
//
//int Digit(char string[], char result[])
//{
//    int i, k = 0, s = 0;
//    int amountString = strlen(string);
//    for (i = 0; i < amountString; i++)
//        if (string[i] >= '0' && string[i] <= '9')
//        {
//            result[k++] = (char)i + 48;
//            result[k++] = ' ';
//            s += i;
//        }
//    result[k] = '\0'; 
//    return s;
//}



//16
//#include <stdio.h>
//#include <stdlib.h>
//#include <conio.h>
//#include <string.h>
//#define MAXSTR 128
//
//int Multiply(char string[], char result[]);
//
//main()
//{
//    char s[MAXSTR], res[MAXSTR];
//    printf("Enter a s: "); gets_s(s, MAXSTR);
//    printf("multiply = %i\n", Multiply(s, res));
//    puts(res);
//    _getch();
//    return 0;
//}
//
//int Multiply(char string[], char result[])
//{
//    int i, mul = 1, k = 0, t, symbol = 0;   
//    for (i = 0; i < strlen(string); i++)
//    {
//        mul += string[i];
//        t = string[i];
//        while (t)
//        {
//            symbol *= 10;
//            symbol += t % 10;
//            t /= 10;
//        }
//        while (symbol)
//        {
//            result[k++] = symbol % 10 + 48;
//            symbol /= 10;
//        }
//        result[k++] = ' ';
//    }
//    result[k] = '\0';
//    return mul;
//}




//17
//#include <stdio.h>
//#include <stdlib.h>
//#include <conio.h>
//#include <string.h>
//#define MAXSTR 2048
//
//Fill(char string[]);
//NumberToChar(char string[], char result[]);
//
//main()
//{
//    char s[MAXSTR], res[MAXSTR], result[MAXSTR];
//    printf("s:\n");
//    Fill(s);
//    puts(s);
//    NumberToChar(s, res);
//    printf("\nres:\n");
//    puts(res);
//    printf("\n");
//    //
//    int k = 0;
//    for (int i = 32; i <= 255; i++)
//    {
//        result[k++] = i;
//        result[k++] = ',';
//
//    }
//    result[--k] = '\0';
//    puts(result);
//    //
//    _getch();
//    return 0;
//}
//
//NumberToChar(char string[], char result[])
//{
//    int i = 0, number, k = 0;
//    int amountString = strlen(string);
//    while (i < amountString)
//    {
//        number = 0;
//        while (string[i] != ',' && string[i] != '\0')
//        {
//            number *= 10;
//            number += string[i++]-48;
//        }
//        printf("%i\n", number);
//        result[k++] = number;
//        result[k++] = ',';
//        i++;
//    } 
//    result[--k] = '\0';
//}
//
//Fill(char string[])
//{
//    int i, k = 0, t, number = 0;
//    for (i = 32; i <= 255; i++)
//    {
//        t = i;
//        
//        while (t)
//        {
//            number *= 10;
//            number += t % 10;
//            t /= 10;
//        }
//        while (number)
//        {
//            string[k++] = number % 10 + 48;
//            number /= 10;
//        }
//        if (!(i % 10))
//        {
//            string[k++] = '0';
//            if (!((i/10) % 10))
//                string[k++] = '0'; 
//        }
//        string[k++] = ',';
//    }
//    string[--k] = '\0';
//}




//18
//#include <stdio.h>
//#include <stdlib.h>
//#include <conio.h>
//#include <string.h>
//#define MAXSTR 128
//
//int Sum(char string[]);
//Add(char s[], int sumS, char str[], int sumStr, char string[], int sumString);
//
//main()
//{
//    char s[MAXSTR], str[MAXSTR], string[MAXSTR];
//    printf("Enter a s: "); gets_s(s, MAXSTR);
//    printf("Enter a str: "); gets_s(str, MAXSTR);
//    printf("Enter a string: "); gets_s(string, MAXSTR);
//    Add(s, Sum(s), str, Sum(str), string, Sum(string));
//    _getch();
//    return 0;
//}
//
//int Sum(char string[])
//{
//    int i, sum = 0, amountString, t, end = 0;
//	amountString = strlen(string);
//    for (i = 0; i < amountString; i++)
//    {
//        sum += string[i];
//    }
//    t = amountString;
//    string[amountString++] = '-';
//    while (t)
//    {
//        end *= 10;
//        end += t % 10;
//        t /= 10;
//    }
//    while (end)
//    {
//        string[amountString++] = end % 10 + 48;
//        end /= 10;
//    }
//    string[amountString] = '\0';
//    return sum;
//}
//
//Add(char s[], int amountS, char str[], int amountStr, char string[], int amountString)
//{
//    if (amountS > amountStr && amountS > amountString && amountStr > amountString)
//    {
//        strcat_s(string, MAXSTR, str);
//        strcat_s(string, MAXSTR, s);
//        puts(string);
//    }
//    else if (amountS > amountStr && amountS > amountString && amountString > amountStr)
//    {
//        strcat_s(str, MAXSTR, string);
//        strcat_s(str, MAXSTR, s);
//        puts(str);
//    }
//    else if (amountStr > amountS && amountStr > amountString && amountS > amountString)
//    {
//        strcat_s(string, MAXSTR, s);
//        strcat_s(string, MAXSTR, str);
//        puts(string);
//    }
//    else if (amountStr > amountS && amountStr > amountString && amountString > amountS)
//    {
//        strcat_s(s, MAXSTR, string);
//        strcat_s(s, MAXSTR, str);
//        puts(s);
//    }
//    else if (amountString > amountS && amountString > amountStr && amountS > amountStr)
//    {
//        strcat_s(str, MAXSTR, s);
//        strcat_s(str, MAXSTR, string);
//        puts(str);
//    }
//    else if (amountString > amountS && amountString > amountStr && amountStr > amountS)
//    {
//        strcat_s(s, MAXSTR, str);
//        strcat_s(s, MAXSTR, string);
//        puts(s);
//    }
//}





//19
//#include <stdio.h>
//#include <stdlib.h>
//#include <conio.h>
//#include <string.h>
//#define MAXSTR 128
//
//int Sum(char string[]);
//Add(char s[], int sumS, char str[], int sumStr, char string[], int sumString);
//
//main()
//{
//    char s[MAXSTR], str[MAXSTR], string[MAXSTR];
//    printf("Enter a s: "); gets_s(s, MAXSTR);
//    printf("Enter a str: "); gets_s(str, MAXSTR);
//    printf("Enter a string: "); gets_s(string, MAXSTR);
//    Add(s, Sum(s), str, Sum(str), string, Sum(string));
//    _getch();
//    return 0;
//}
//
//int Sum(char string[])
//{
//    int i, sum = 0, amountString, t, end = 0;
//	amountString = strlen(string);
//    for (i = 0; i < amountString; i++)
//    {
//        sum += string[i];
//    }
//    string[amountString++] = '-';
//    t = sum;
//    while (t)
//    {
//        end *= 10;
//        end += t % 10;
//        t /= 10;
//    }
//    while (end)
//    {
//        string[amountString++] = end % 10 + 48;
//        end /= 10;
//    }
//    string[amountString] = '\0';
//    return sum;
//}
//
//Add(char s[], int sumS, char str[], int sumStr, char string[], int sumString)
//{
//    if (sumS > sumStr && sumS > sumString && sumStr > sumString)
//    {
//        strcat_s(s, MAXSTR, str);
//        strcat_s(s, MAXSTR, string);
//        puts(s);
//    }
//    else if (sumS > sumStr && sumS > sumString && sumString > sumStr)
//    {
//        strcat_s(s, MAXSTR, string);
//        strcat_s(s, MAXSTR, str);
//        puts(s);
//    }
//    else if (sumStr > sumS && sumStr > sumString && sumS > sumString)
//    {
//        strcat_s(str, MAXSTR, s);
//        strcat_s(str, MAXSTR, string);
//        puts(str);
//    }
//    else if (sumStr > sumS && sumStr > sumString && sumString > sumS)
//    {
//        strcat_s(str, MAXSTR, string);
//        strcat_s(str, MAXSTR, s);
//        puts(str);
//    }
//    else if (sumString > sumS && sumString > sumStr && sumS > sumStr)
//    {
//        strcat_s(string, MAXSTR, s);
//        strcat_s(string, MAXSTR, str);
//        puts(string);
//    }
//    else if (sumString > sumS && sumString > sumStr && sumStr > sumS)
//    {
//        strcat_s(string, MAXSTR, str);
//        strcat_s(string, MAXSTR, s);
//        puts(string);
//    }
//}




//20
//#include <stdio.h>
//#include <stdlib.h>
//#include <conio.h>
//#include <string.h>
//#define MAXSTR 128
//
//SortObminMin(char string[]);
//
//main()
//{
//    char s[MAXSTR], str[MAXSTR], string[MAXSTR];
//    printf("Enter a s: "); gets_s(s, MAXSTR);
//    printf("Enter a str: "); gets_s(str, MAXSTR);
//    printf("Enter a string: "); gets_s(string, MAXSTR);
//    strcat_s(s, MAXSTR, str);
//    strcat_s(s, MAXSTR, string);
//    SortObminMin(s);
//    puts(s);
//    _getch();
//    return 0;
//}
//
///*sortuvannya obminom*/
// SortObminMin(char string[])
// {
// 	int i, j, n = strlen(string);
//    char t;
// 	for (i = 0; i < n - 1; i++)
// 		for (j = 0; j < n - 1; j++)
// 			if (string[j + 1] < string[j])
// 			{
// 				t = string[j];
//                string[j] = string[j + 1];
//                string[j + 1] = t;
// 			}
// }



//21
//#include <stdio.h>
//#include <stdlib.h>
//#include <conio.h>
//#include <string.h>
//#define MAXSTR 128
//
//Add(char s[], char str[], char string[]);
//
//main()
//{
//    char s[MAXSTR], str[MAXSTR], string[MAXSTR];
//    printf("Enter a s: "); gets_s(s, MAXSTR);
//    printf("Enter a str: "); gets_s(str, MAXSTR);
//    printf("Enter a string: "); gets_s(string, MAXSTR);
//    Add(s, str, string);
//    _getch();
//    return 0;
//}
//
//Add(char s[], char str[], char string[])
//{
//    int amountS = strlen(s);
//    int amountStr = strlen(str);
//    int amountString = strlen(string);
//    if (amountS > amountStr && amountS > amountString && amountStr > amountString)
//    {
//        strcat_s(s, MAXSTR, str);
//        strcat_s(s, MAXSTR, string);
//        puts(s);
//    }
//    else if (amountS > amountStr && amountS > amountString && amountString > amountStr)
//    {
//        strcat_s(s, MAXSTR, string);
//        strcat_s(s, MAXSTR, str);
//        puts(s);
//    }
//    else if (amountStr > amountS && amountStr > amountString && amountS > amountString)
//    {
//        strcat_s(str, MAXSTR, s);
//        strcat_s(str, MAXSTR, string);
//        puts(str);
//    }
//    else if (amountStr > amountS && amountStr > amountString && amountString > amountS)
//    {
//        strcat_s(str, MAXSTR, string);
//        strcat_s(str, MAXSTR, s);
//        puts(str);
//    }
//    else if (amountString > amountS && amountString > amountStr && amountS > amountStr)
//    {
//        strcat_s(string, MAXSTR, s);
//        strcat_s(string, MAXSTR, str);
//        puts(string);
//    }
//    else if (amountString > amountS && amountString > amountStr && amountStr > amountS)
//    {
//        strcat_s(string, MAXSTR, str);
//        strcat_s(string, MAXSTR, s);
//        puts(string);
//    }
//}



//22
//#include <stdio.h>
//#include <stdlib.h>
//#include <conio.h>
//#include <string.h>
//#define MAXSTR 128
//
//Add(char string[], int limit);
//
//main()
//{
//    char s[MAXSTR], str[MAXSTR], string[MAXSTR];
//    int max;
//    printf("Enter a s: "); gets_s(s, MAXSTR);
//    printf("Enter a str: "); gets_s(str, MAXSTR);
//    printf("Enter a string: "); gets_s(string, MAXSTR);
//    if (strlen(s) > strlen(str) && strlen(s) > strlen(string))
//        max = strlen(s);
//    else if (strlen(str) > strlen(s) && strlen(str) > strlen(string))
//        max = strlen(str);
//    else
//        max = strlen(string);
//    Add(s, max);
//    Add(str, max);
//    Add(string, max);
//    puts(s);
//    puts(str);
//    puts(string);
//    _getch();
//    return 0;
//}
//
//Add(char string[], int limit)
//{
//    int i, amountString = strlen(string);
//    char t;
//    for (i = amountString; i < limit; i++)
//        string[i] = ' ';
//    string[i] = '\0';
//    for (i = 0; i < amountString; i++)
//    {
//        t = string[i];
//        string[i] = string[strlen(string) - 1 - i];
//        string[strlen(string) - 1 - i] = t;
//    }
// 
//}



//23
//#include <stdio.h>
//#include <stdlib.h>
//#include <conio.h>
//#include <string.h>
//#define MAXSTR 128
//
//Add(char string[], int limit);
//
//main()
//{
//    char s[MAXSTR], str[MAXSTR], string[MAXSTR];
//    int max;
//    printf("Enter a s: "); gets_s(s, MAXSTR);
//    printf("Enter a str: "); gets_s(str, MAXSTR);
//    printf("Enter a string: "); gets_s(string, MAXSTR);
//    if (strlen(s) > strlen(str) && strlen(s) > strlen(string))
//        max = strlen(s);
//    else if (strlen(str) > strlen(s) && strlen(str) > strlen(string))
//        max = strlen(str);
//    else
//        max = strlen(string);
//    Add(s, max);
//    Add(str, max);
//    Add(string, max);
//    puts(s);
//    puts(str);
//    puts(string);
//    _getch();
//    return 0;
//}
//
//Add(char string[], int limit)
//{
//    int i = limit;
//    for (i = strlen(string); i < limit; i++)
//        string[i] = '*';
//    string[i] = '\0';
//}



//24
//#include <stdio.h>
//#include <stdlib.h>
//#include <conio.h>
//#include <string.h>
//#define MAXSTR 128
//
//int Amount(char string[], char substring[]);
//
//main()
//{
//    char s[MAXSTR], str[MAXSTR], res[MAXSTR] = "";
//    int n, i = 0, max = 0, t;
//    printf("n = "); n = _getche();
//    n -= 48;
//    printf("\nEnter a substring: "); gets_s(str, MAXSTR);
//    for (i = 0; i < n; i++)
//    {
//        printf("Enter a string(%i): ", i+1); gets_s(s, MAXSTR);//
//        t = Amount(s, str);
//        printf("%i\n", t);
//        if (t > max)
//        {
//            max = t;
//            strcpy_s(res, MAXSTR, s);
//        }
//    }
//    printf("max = %i\n", max);
//    puts(res);
//    _getch();
//    return 0;
//}
//
//int Amount(char string[], char substring[])
//{
//    int i = 0, j, k = 0, s, v;
//    int amountString = strlen(string);
//    int amountSubstring = strlen(substring);
//    while (i < amountString)
//    {
//        s = 0;
//        v = i;
//        for (j = 0; j < amountSubstring; j++)
//            if (string[i++] == substring[j])
//                s++;
//        if (amountSubstring == s)
//            k++;
//        else
//            i = ++v;
//    } 
//    return k;
//}

//25
//#include <stdio.h>
//#include <stdlib.h>
//#include <conio.h>
//#include <string.h>
//#define MAXSTR 128
//
//Same(char string[], int k);
//
//main()
//{
//    char s[MAXSTR];
//    int n;
//    printf("Enter a main string: "); gets_s(s, MAXSTR);
//    printf("n = "); scanf_s("%i", &n);
//    Same(s, n);
//    _getch();
//    return 0;
//}
//
//Same(char string[], int k)
//{
//    int t = 0;
//    _strrev(string);
//    while (k)
//    {
//        t *= 10;
//        t += k % 10;
//        k /= 10;
//    }
//    if (atoi(string) == t)
//        printf("YES");
//    else
//        printf("NO");
//}