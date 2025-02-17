#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node *head,* newnode;
int main()
{
    int choice;
    struct node* head=NULL;
    struct node* newnode, *temp;
    
    
while(choice)
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data:\n");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(head==NULL)
    {
        head=temp=newnode;
    }
    else{
    temp->next=newnode;
    temp=newnode;
    }
printf("Do u want to continue?");
scanf("%d",&choice);

}
temp=head;
while(temp!=0)
{
    printf("%d ",temp->data);
    temp=temp->next;
}
}






