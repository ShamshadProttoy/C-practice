#include<stdio.h>
int rev(int arr,int n)
{
    int i,j,a[100];
    for(i=0,j=n-1;i<n;i++,j--)
    {
        arr[i]=a[j];
    }
    return arr;

}
int main()
{
    int i,n,array[100];
    printf("enter the array size: \n");
    scanf("%d",&n);
    printf("array elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }



}
