#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define N 255

Sort(int* number, int k);

FILE* stream;

int main(void)
{
    int number[N], k = 0;
	fopen_s(&stream, "C:\\Kyrylo\\VisualStudio\\OP\\forSort.txt", "a+");
    // Set pointer to beginning of file:
    fseek(stream, 0L, SEEK_SET);
    // Read data back from file:
    while (fscanf_s(stream, "%i", &number[k]) != EOF) 
        printf("%5i", number[k++]);
    printf("\n");
    Sort(number, k);
    fprintf(stream, "\n");
    for (int i = 0; i < k; i++)
    {
        printf("%5i", number[i]);
        fprintf(stream, "%i ", number[i]);
    }
    return 0;
}

Sort(int *number, int k)
{
    for (int i = 0; i < k; i++)
        for (int j = 0; j < k; j++)
            if (number[i] > number[j])
            {
                int t = number[i];
                number[i] = number[j];
                number[j] = t;
            }
}