#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node* next;

};*temp,*head;
int main()
{   int choice=1;
    while(choice)
    {
       
struct node* newnode;
newnode=(struct node*)malloc(sizeof(struct node));
printf("Enter data\n");
scanf("%d",&newnode->data);
    
newnode->next=0;
if(head==0)
{
head=temp=newnode;

}

else{
    temp->next=newnode;
    temp=newnode;
}
printf("Do you want to continue press1");
scanf("%d",&choice);
    }
temp=head;
while(temp!=NULL)
{
    printf("%d ",temp->data);
    temp=temp->next;
}
    


}