#include <stdio.h> //printf , scanf 
#include <stdlib.h> // rand() //랜덤함수
#include <time.h> //time() // 시간함수

// 5이상 10미만
void main() // entry point
{
  srand(time(NULL));
  int arr0[10];
  for(int i=0; i<10; i++)
  {
    arr0[i] = rand()%5 + 5;
    //printf("%d ",rand()%5 +5);
  }

  printf("rand arr[5-9] : ");
  for(int i = 0; i<10; i++)
  {
    printf("%d ",arr0[i]);
  }
  printf("\n");

  for(int i=0; i<10; i++)
  {
    if(arr0[i]%2 == 0)
    {
      printf("%d" ,arr0[i]);
    }
    else
    {
      printf("%d" ,arr0[i]);
    }
  }
}