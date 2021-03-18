#include<stdio.h>
int main()
{
    int value;
    int *ptr;
    scanf("%d",&value);
    *ptr=&value;
    printf("%d\n",*ptr);
    printf("%d",ptr);

}
