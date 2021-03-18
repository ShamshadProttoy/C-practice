#include<stdio.h>
#include<string.h>
int main()
{
    char str[30]="i am a student";
    int len,i;

    len=strlen(str);
    printf("the length=%d\n",len);
    char str1[30];
    strcpy(str1,str);
    printf("the copied string is=%s\n",str1);
    char str2[]="hiya";
    if(strcmp(str2,str1)==0)
    {
        printf("the sentence is same\n");

    }
    else

    {
        printf("the sentence isnot same");
    }













}
