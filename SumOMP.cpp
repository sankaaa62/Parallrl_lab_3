#include <omp.h>
#include <stdio.h>
#include <time.h>
#define MAX 1000

int a[MAX];

int main()
{    
    int i;
    int j;
    for(i = 0; i < MAX; i++)
        a[i]=i;

    clock_t time;
    time = clock();

    long Summa = 0;
    #pragma omp parallel num_threads(2) reduction(+:Summa)
    {
        #pragma omp for
        for(i = 0; i < MAX; i++)
        {
            Summa += a[i];
            for(j = 0; j < MAX; j++)
            Summa = Summa;
        }
    

    } 

    printf("Summ is %d ", Summa);

    time = clock() - time;
    printf("%f", (double)time/CLOCKS_PER_SEC);
    
    return 0;
}
