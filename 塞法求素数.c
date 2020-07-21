#include <stdio.h>

#define N 100      //定义塞法求素数的范围

int main(void)
{
    int i, j, a[N+1];
    
    for (i = 2; i <= N; i++)
    {
        a[i] = 1;
    }
    
    for (i = 2; i*i <= N; i++)
    {
        if (a[i] == 1)
            for (j = 2*i; j <= N; j++)
                if (j % i == 0)
                    a[i] = 0;
    }
    
    for(i = 2; i <= N; i++)
    {
        if (a[i] == 1)
            printf("%4d\n", i);
    }
    
    return 0;
}
