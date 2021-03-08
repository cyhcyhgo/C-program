#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int main()
{
    int a[N];
    int *i,*j=a+N,f,t;
    srand(time(NULL));
    printf("input\n");
    for(i=a;i<a+N;i++)
    {
        L:
        *i=rand();
        if (*i>99) goto L;
        printf("%6d",*i);
        if(!((i-a)%5)) printf("\n");
    }
    printf("\noutput:\n");
    for(j=a+N;j!=a;j--)
    {
        f=1;
        for(i=a;i<j;i++)
        {
            if(*i>*(i+1))
            {
                t=*i;*i=*(i+1);*(i+1)=t;
                f=0;
            }
        }
        if(f) break;
    }
    for(i=a;i<a+N;i++)
    {
        printf("%4d",*i);
    }
    return 0;
}
