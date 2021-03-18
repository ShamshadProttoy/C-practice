#include<stdio.h>
int main()
{
    int x,y,c,d;
    scanf("%d%d",&x,&y);
    if(x==y)
    {
        printf("O JOGO DUROU 24 HORA(S)");
    }
    else if(x>y)

    {
        c=24+y-x;
        printf("O JOGO DUROU %d HORA(S)",c);
    }
    else
    {
        d=y-x;
        printf("O JOGO DUROU %d HORA(S)",d);

    }
}
