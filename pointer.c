#include<stdio.h>
int main()
{
    int a,*ptr;
    scanf("%d",&a);
    ptr=&a;
    printf("%d\n",&a);
    printf("%d\n",ptr);
    printf("%d\n",*ptr);
    return 0;



}
