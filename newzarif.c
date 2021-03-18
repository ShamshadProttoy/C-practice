#include<stdio.h>
int main()
{
    int v;
    char ch;
    printf("Enter School: ");
    scanf("%d",&v);
    printf("Enter Department\n");
    scanf("%c",&ch);
    if(v==1)
    {
        printf("School of computer Science");
        if(ch=='I')
        {
            printf("and department of informatics\n");
        }
        else if(ch=='L')
        {
            printf("and department of machine learning");

        }
        else
        {
            printf("choose correct code\n");
        }
    }

    else if(v==2)
    {
        printf("school of business\n");
        if(ch=='C')
        {
            printf("and department of commerce\n");
        }
        else if(ch=='P')
        {
            printf("and department of purchasing");

        }
        else
        {
            printf("choose correct code\n");
        }
    }
    else if(v==3)
    {
        printf("school of mechanical and production enjineering\n");

        if(ch=='A')
        {
            printf("and department of MECHANICAL engineering\n");
        }
        else if(ch=='B')
        {
            printf("and department of MECHTonics enjineering\n");

        }
        else if(ch=='D')
        {
            printf("department of industrial production\n");
        }
        else
        {
            printf("choose correct code\n");
        }
    }
    else
    {

printf("invalid input!enter 1 to 3\n");
}
return 0;
}
