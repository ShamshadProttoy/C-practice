#include<stdio.h>
int main()
{
    int x,y,a,b,e,f;
    scanf("%d%d%d%d",&a,&b,&x,&y);
    if(x>a&&y>b)
    {
        e=x-a;
        f=y-b;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",e,f);
}
    if(x==a&&y==b)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)");
    }
    if(x<a&&y>b)
    {
        e=24-a+x;
        f=y-b;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",e,f);
    }
    if(x>a&&y<b)
    {
        f=60-b+y;
        e=x-(a+1);
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",e,f);

    }
    if(x<a&&y<b)
    {
        f=60-b+y;
        e=24+x-(a+1);
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",e,f);
    }
    return 0;





}
