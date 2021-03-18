#include<stdio.h>

int main()
{
    int n,m,a,b;
    scanf("%d%d",&n,&m);
    if(1 < n < 100)
    {
        if(1 < m < n)
        {
            a=n/m;
            b=n%m;
            printf("%d %d %d",a,b,m);
        }
    }
    return 0;
}
