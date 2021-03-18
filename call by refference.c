#include<stdio.h>
void callfunction(int arr[],int n)
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("index =%d and value=%d\n",i,(*arr+i));
    }
}
int main()
{
    int arr={1,2,3,4,5};
    callfunction(&arr,5);
    return 0;





}
