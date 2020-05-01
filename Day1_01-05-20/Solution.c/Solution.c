#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int d=0;
// Complete the beautifulDays function below.
int beautifulDays(int i, int j, int k) {
int a=0,b=0,c=0;
for(a=i;a<=j;a++)
{
    i=a;
    c=0;
    while(i)
    {
        b=i%10;
        c=c*10+b;
        i=i/10;
    }
    if(c>=a)
    {
        if((c-a)%k==0)
        d++;
    }
    else
    {
        if((a-c)%k==0)
        d++;
    }
}
return d;
}

int main()
{
    int i,j,k;
    scanf("%d %d %d",&i,&j,&k);
    d=beautifulDays( i, j, k);
    printf("%d",d);
    return 0;
}

