#include <stdio.h>
void swap(int *c, int *d)
///if you want to store

///you have to use pointer
{
int temp = *c;
*c = *d;
*d = temp;
}
int main()
{
int a, b;
printf("Enter number: ");
scanf("%d %d", &a, &b);
printf("Before swap a = %d\n", a);

printf("Before swap b =%d\n", b);
printf("\n\n");
swap(&a, &b);
///call by reference means

printf("After swap a =%d\n", a);
printf("After swap b =%d\n", b);
return 0;
}
