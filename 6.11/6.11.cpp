#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main(void)
{
    int a[SIZE] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
    int pass; 
    size_t i;
    int hold;
    int swap;

    printf("Data items in original order\n");
    for (i = 0; i < SIZE; ++i)
    {
        printf("%4d", a[i]);
    }

    for (pass = 1; pass < SIZE; ++pass)
    {
        swap = 0; 

        for (i = 0; i < SIZE - pass; ++i)
        {
            if (a[i] > a[i + 1])
            {
                hold = a[i];
                a[i] = a[i + 1];
                a[i + 1] = hold;
                swap = 1; 
            }
        }

        if (swap == 0)
        {
            break;
        }
    }

    printf("\nData items in ascending order\n");
    for (i = 0; i < SIZE; ++i)
    {
        printf("%4d", a[i]);
    }

    printf("\n");
    system("pause");
    return 0;
}