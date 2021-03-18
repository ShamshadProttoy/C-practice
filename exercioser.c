#include<stdio.h>
int main()
{
    double a,b,divi;

    double *c,*d;
    scanf("%d%d",&a,&b);
    c=&a;
    d=&b;
    divi=*c/ *d;
    printf("%.2lf",divi);
    return 0;




}
