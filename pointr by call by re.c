#include<stdio.h>
void callbyRef(int *array[], int n)

int i;
for(i=0;i<n;i++)
{
printf("%d ", *array[i]);


}
printf("\n");
}

int main()
{
int i, n;
printf("Enter array size: ");
scanf("%d", &n);
int arr[n];
for(i=0;i<n;i++)
{
scanf("%d", & arr[i]);
}
callbyRef(&arr, n);
return 0;
}
