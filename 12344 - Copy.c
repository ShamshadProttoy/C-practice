#include<stdio.h>
int main()
{
    int i,n,j;
    int arr[n],brr[n];
    printf("the array size: \n");
    scanf("%d",&n);
    printf("array elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
    for(i=n-1,j=0;j<n;i--,j++)
    {
        brr[j]=arr[i];


    }
    printf("%d",brr[j]);
}
