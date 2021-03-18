#include<stdio.h>
struct student{
  char name[50];
  char univer[30];
  int num;
  int num1;
  int add;


} var;
int main()
{
    gets(var.name);
    gets(var.univer);
    puts(var.name);
    puts(var.univer);
    scanf("%d%d",&var.num,&var.num1);
    var.add=var.num+var.num1;
    printf("addition=%d\n",var.add);
    return 0;
}
