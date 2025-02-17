#include<stdio.h>
#include<stdlib.h>

struct lnode{
int data;
struct lnode* next;


};
typedef struct lnode node;

node* head=NULL;
void insertatbeginning(int val){
node* newNode=(node*)malloc(sizeof(node));
if(newNode==NULL){
printf("Out of memory");
return;

}

newNode -> data=val;
if(head==NULL){
    newNode->next=NULL;
    head = newNode;
}
else{
newNode -> next=head;
head=newNode;

}
printf("Inserted %d at the beginning ",val);


}

void display()
{
if(head==NULL){
printf("List is empty");
return;

}
node* temp=head;
while(temp!=NULL){


printf("%d ",temp->data);
temp=temp->next;
}



}

void insertstpos(int pos,int val)
{
node*newNode   =   (node*)malloc(sizeof(node));
if(newNode==NULL){
    printf("out of memory");
}
newNode->data=val;
node* temp=head;
int i=1;
while(i<=pos-1)
{
    temp=temp->next;
    i++;
}
newNode -> next= temp->next;
 temp->next=newNode -> next;
}


int main()
{
int choice,val,pos;
while(1)
{
printf("\n-------Linked list Menu-------");
printf("1.Insert at begining");
printf("2.Display the list\n");
printf("3.Insert at specified position");
printf("4.Delete from specified pos");
printf("5.Exit\n");
printf("\n-----");
printf("Enter your choice:\t");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("Enter the data:");
scanf("%d",&val);
insertatbegining(val);
break;

case 2:
display();
break;

case 3:
printf("Enter the data:");
scanf("%d",&val);
printf("Enter the position:");
printf("position starts in 0 index");

scanf("%d",&pos);
if(pos<0){
    printf("Invalid position");
    break;
}
else
{insertatpos(pos,val);}
break;

case 4:
printf("Enter the position");
scanf("%d",&pos);
deletefromposition(pos);
break;

case 5:
exit(0);

default:printf("wrong choice");


}



}




}