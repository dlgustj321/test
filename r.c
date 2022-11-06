#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    int arr[10] = {1,2,3,4,5};
    printf("%d  \n",sizeof(arr));
    printf("%d  \n",sizeof(arr)/sizeof(int));
    int arr_cnt = 7;

    printf("right shift :");
    for(int i = 0; i<arr_cnt; i++)
    {
        printf("%d" , arr[i]);
        printf("\n");
    }
}
    