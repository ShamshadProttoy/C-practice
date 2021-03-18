#include<stdio.h>
int main()
{
    char str[100];
    gets(str);
    int i,n=0;
    for(i=0;str[i]!='\0';i++)
    {
        if

       (str[i]!=' ')
       {
           n++;
        }
    }
    printf("the length is %d\n",n);
    return 0;
}
