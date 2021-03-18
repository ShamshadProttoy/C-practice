#include<stdio.h>
int main()
{
    int i,arr[3];
    for(i=0;i<3;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int temp;
    for(i=0;i<3;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            printf("%d",max);
        }
    }


}
