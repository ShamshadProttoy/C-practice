#include<stdio.h>
int main()

{
    char str[30];
    int i;
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' ')
        {
            if(str[i]>=97&&str[i]<=122)
                str[i]=str[i]-32;
            printf("%c",str[i]);
        }
    }






}
