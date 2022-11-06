#include <stdio.h>

void step_mod()
{
    char cc1 = 'C';
    // scanf("%c" , &cc1);
    
    printf("%c \n", cc1);
    printf("%d \n", cc1);
    printf("%x \n", cc1);
    printf("%o \n", cc1);

    char arr[100];
    arr[8] = '\0';
    for(int i=7; i>=0; i--){
        if(cc1%2 == 0)
        {
            arr[i] = '0';
        }
        else
        {
            arr[i] = '1';
        }
        cc1 = (int)(cc1/2);
    }
    printf("%s \n" , arr);
}
void main()
{
    step_mod();
}