#include <stdio.h>
#include <time.h>
#define MAX 1000

int a[MAX];

int main()
{
    int j;
    int i;
    for(j = 0; j < MAX; j++)
        a[j]=j; 

    clock_t time;
    time = clock();

    long Summa = 0;
    for(i = 0; i < MAX; i++)
    {
        Summa = Summa + a[i];
        for(j = 0; j < MAX; j++)
            Summa = Summa;
    }

    printf("Summ is %d ", Summa);
    
    time = clock() - time;
    printf("%f", (double)time/CLOCKS_PER_SEC);

    return 0;
}
