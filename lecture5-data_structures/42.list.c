#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    const int arrSize = 3;
    int *list = malloc(arrSize * sizeof(int));
    if(list == NULL) return 1; //protection for potential errors like lack of memory

    list[0] = 23; // *list = 23; using de-reference
    list[1] = 24; // *(list+1) = 24;
    list[2] = 25; // *(list+2) = 25;

    for(int i = 0; i < arrSize; i++)
    {
        printf("%i ", list[i]);
    }
    printf("\n");

    // if we wanted the list to have 4 values
    const int arrSizeNew = 4;
    int *tmp = malloc(arrSizeNew * sizeof(int));
    if(tmp == NULL)
    {
        free(list);
        return 1;
    }

    for (int i = 0; i < arrSize; i++)
    {
        tmp[i] = list[i];
    }
    tmp[3] = 26;

    free(list);
    list = tmp; // since both list and tmp were declared as pointers, now the original list variable will point to the new array of 4 values

    for (int i = 0; i < arrSizeNew; i++)
    {
        printf("%i ", list[i]);
    }
    printf("\n");
    //    23 24 25 26





    return 0;

}
