#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*head;

void createlist(int n)
{
    struct node *newnode,*temp;
    int data,i;
    head=(struct node*)malloc(sizeof(struct node));
    if(head==NULL)
    {
        printf("unable to allocate memory");
    }
    else{
        printf("enter data for node 1: ");
        scanf("%d",&data);
        head->data=data;
        head->next=NULL;
        temp=head;
        for(i=2;i<=n;i++)
        {
            newnode=(struct node*)malloc(sizeof(struct node));
            if(newnode==NULL)
            {
                printf("unable to allocate memory: ");
                break;
            }
            else{
                printf("enter data for node %d: ",i);
                scanf("%d",&data);
                newnode->data=data;
                newnode->next=NULL;
                temp->next=newnode;
                temp=temp->next;
            }
        }
        printf("singly linkdlist succesfully create\n");
    }
}
void insertnode(int data)
{
    struct node *Newnode;
    Newnode=(struct node*)malloc(sizeof(struct node));
    if(Newnode==NULL)
    {
        printf("\nunable ");
}
    else{
        printf("enter new data ");
        scanf("%d",&data);

    Newnode->data=data;
    Newnode->next=head;
    head=Newnode;
    printf("data insert succesfully");
}
}
void display()
{
    struct node *temp;
    if(head==NULL)
    {
        printf("list is empty");
    }
    else{
    temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
        printf("data=%d",temp->data);
    }
    }

}
int main()
{
    int A,Data;
    printf("Enter the total number of nodes: ");
    scanf("%d", &A);
    createlist(A);

    printf("\nData in the list \n");
    display();

    /*
     * Insert data at the beginning of the singly linked list
     */
    printf("\nEnter data to insert at beginning of the list: ");
    scanf("%d", &Data);
    insertnode(Data);

    printf("\nData in the list \n");
    display();

    return 0;
}

