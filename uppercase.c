#include<stdio.h>
int main()
{
    char str[40];
    int i;
        printf("enter the lowercase\n");
        gets(str);
        for(i=0;str[i]!='\0';i++)
        {
            if(str[i]!='\0')
            {
                if(str[i]>=97&&str[i]<=122)
            {
                str[i]=str[i]-32;
            }
        }
        }
        printf("%s",str);



}
