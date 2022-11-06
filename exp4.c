#include <stdio.h>

void step_shift()
{
    char cc1 = 'A';
    scanf("%c" , &cc1);

    printf("%c \n",cc1);
    printf("%d \n",cc1);
    printf("%x \n",cc1);
    printf("%o \n",cc1);

    char arr[100];
    arr[8] = '\0';
    for(int i=7,j=0; i>=0; i--,j++)
    {
        if(cc1>>j & 1 == 1)
        {
            arr[i] = '1';
        }
        else
        {
            arr[i] = '0';
        }
    }
    printf("%s \n" , arr);
}
void main()
{
    step_shift();
}