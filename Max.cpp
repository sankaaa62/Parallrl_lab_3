#include <stdio.h>
#include <time.h>
#define MAX 1000

int a[MAX];
int max =0;

int main()
{
    int j;
    int i;
    for(j = 0; j < MAX; j++)
        a[j]=j; 

    clock_t time;
    time = clock();

    for (int i = 0; i < MAX; ++i)
    {
        if (a[i] > max)
            max = a[i];

    }
    printf("Max is %d ", max);
  
    time = clock() - time;
    printf("%f", (double)time/CLOCKS_PER_SEC);
  
    return 0;
}
