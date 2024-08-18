#include <stdio.h>
#include <stdlib.h>

//using: alloc, realloc to create a list of size 3 and then grow the list to 4 items

int main(void)
{
    //allocate a section of memory for list of size 3
    const int arrSize = 3;
    int *list = malloc(arrSize * sizeof(int));
    //protection for potential errors like lack of memory
    if(list == NULL) return 1;
    // assign values to the list
    list[0] = 23; // *list = 23; using de-reference
    list[1] = 24; // *(list+1) = 24;
    list[2] = 25; // *(list+2) = 25;
    // print the list
    for(int i = 0; i < arrSize; i++)printf("%i ", list[i]); printf("\n");
    // reallocate the list into a tmp list of size 4
    const int arrSizeNew = 4;
    int *tmp = realloc(list, arrSizeNew * sizeof(int));
    //make sure there are no errors of memory from relloc and free memory from the original list we allocated
    if(tmp == NULL){free(list);return 1;}
    // assign the address of the new space of memory to the original list
    list = tmp;
    // assign a fourth value to the list
    list[3] = 26;
    // print the new list
    for (int i = 0; i < arrSizeNew; i++){printf("%i ", list[i]);}printf("\n");
    //    23 24 25 26
    // at the end of the program always free the memory of the space we allocated
    free(list);
    // return 0 as successful
    return 0;

}
