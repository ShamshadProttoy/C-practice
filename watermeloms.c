#include<stdio.h>

int main()
{
    int m,k,r;
    scanf("%d%d",&m,&k);
    if(k < m < 1000000&&k< 100)
    {
       r=m%k;
       printf("%d",r);
    }
    return 0;
}
