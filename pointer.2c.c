#include<stdio.h>
int main()
{
    int a,b,sum;
    scanf("%d%d",&a,&b);
    int *c,*d;
    c=&a;
    d=&b;
    sum=*c+*d;
    printf("total=%d",sum);
    return 0;











}
