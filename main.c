#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,k;
    float sumV;
    sumV=0.0;
    printf("entre la valeur n\n");
    scanf("%d",&n);
    for(k=1;k<=n;k++)
    {
        sumV=(sumV+(n+k*k))/((k*k*k)+(n*n*n));
    }
    printf("sumV= %f",sumV);

    return sumV;
}
