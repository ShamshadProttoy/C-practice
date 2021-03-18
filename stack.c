#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

#define capacity 1000

struct node
{
    int data;
    struct node *next;
}*top;
int size=0;

void push(int element)
{

    if(size>capacity)
    {
        printf("stack over follow\n");
    }
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=element;
    newnode->next=top;
    top=newnode;
    size++;
    printf("data pushed to stack\n");
    }

int pop()
{
    int data=0;
    struct node *topnode;
    if(size<=0||!top)
    {
        printf("stack is empty\n");

        return INT_MIN;
    }
    topnode=top;
    data=top->data;
    top=top->next;
    free(topnode);
    size--;
    return data;

}

int main()
{
    int choice,data;

    while(1)
    {
   printf("-----------------------------------\n");
   printf("stack implentation\n");
   printf("----------------------------------------\n");
   printf("1.push\n");
   printf("2.pop\n");
   printf("3.size\n");
   printf("4.exit\n");
   printf("-----------------------------------------\n");
   printf("enter your choice\n");
   scanf("%d",&choice);
   switch(choice)
   {
   case  1:
    printf("enter data to push in stack\n");
    scanf("%d",&data);
    push(data);
    break;
   case 2:
    data=pop();
    if(data!=INT_MIN)
    {
        printf("DATA=%d",data);
    }
    break;
   case 3:
    printf("stack is empty\n");
   case 4:
    printf("exiting from app\n");
    exit(0);
    break;
   default:
    printf("invalid choice\n");

   }
   printf("\n\n");
    }
    return 0;
}
