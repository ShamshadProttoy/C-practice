#include<stdio.h>
int main()
{
    int x,y;
    double divi;
    int *a,*b;
    scanf("%d%d",&x,&y);
    a=&x;
    b=&y;
    divi=*a/ *b;
    printf("division=%.2lf",divi);
    return 0;


}
