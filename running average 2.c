#include<stdio.h>

int main()
{
    int i,n;
    scanf("%d",&n);
    int arr[n];
    int sum=0;
    double avg,count=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    if(n <= 100000)
    {


    for(i=0;i<n;i++)
    {


        sum=sum+arr[i];
        count=count+1;
        avg=sum/count;
        printf("%.5lf\n",avg);
    }
    }
    return 0;
}
