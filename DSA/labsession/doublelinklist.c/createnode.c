#include<stdio.h>
#include<stdlib.h>
struct node {
int data;
struct node* next;
struct node* prev;

};
struct node* newnode,*head,*temp;
int choice =1;

void createnode(){
    head=NULL;
while(choice=1)
{
    newnode=(struct node*)malloc(sizeof(struct node));
printf("Enter data:");
scanf("%d ",&newnode->data);

newnode->prev=NULL;
newnode->next=NULL;

if(head==NULL)
{
    head= temp=newnode;
    
}
else{
    
temp->next=newnode;
newnode->prev=temp;
temp=newnode;


}
printf("Do you want to continue press 1");
scanf("%d",&choice);

}

}

void display()
{
struct node* temp;
temp=head;
while(temp!=0)
{
    printf("%d ",temp->data);
    temp=temp->next;
}

}
void main()
{ createnode();
display();

}