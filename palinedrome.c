#include<stdio.h>
#include<string.h>
int main()
{
    int len,i,j;
    char str[100];
    char str1[100];
    scanf("%s",str);
    len=strlen(str);
    for(i=len-1,j=0;i>=0;i--,j++)
    {
        str1[j]=str[i];
    }
   
    if(strcmp(str,str1)==0)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }


    return 0;
}
