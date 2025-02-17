#include <stdio.h>
#include <stdlib.h>
struct node{
int data;
struct node* next;

};
struct node* head=NULL;


void insert(int data)
{ 
struct node* newnode= (struct node*) malloc(sizeof(struct node));
newnode->data=data;
newnode->next=head;
newnode=head;


}
void printlinklist()
{
struct node* temp=head;
while(temp!= NULL)
{
printf("%d ",temp->data);
temp=temp->next;

}

}
void insertatbeg (){
struct node* newnode=(struct node*)malloc(sizeof(struct node));
printf("Enter the data:");
scanf("%d ",&newnode->data);
newnode->next=NULL;
if(head==NULL)
{
head=newnode;
return;
}
else{
newnode->next=head;
head=newnode;


}


}
int main()
{
insert(4);
insert(3);
insert(2);
insert(1);
insert(0);

printlinklist();
insertatbeg();
return 0;
}