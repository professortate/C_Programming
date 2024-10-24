#include <stdio.h>
#include <stdlib.h>

void main()
{

    int *array;

    array = (int *)malloc(10 * sizeof(int));
    printf("Enter elements");
    for (int i = 0; i < 5; i++)
    {

        scanf("%d", array + i);
    }
    printf("Array in reverse ");
    for (int i = 4; i >= 0; i--)
    {
        printf("%d\t", *array + i);
    }

    free(array);
}