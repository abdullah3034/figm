#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};

struct node* head,*tail,*temp,*newnode;

void insertatbeg()
{struct node* newnode=(struct node*)malloc(sizeof(struct node));

    printf("Enter data u want to insert?\n");
scanf("%d",&newnode->data);
newnode->next=0;
if(head==0)
{
    printf("list is Empty");

}
else{
    tail->next=newnode;
    newnode->next=head;
    head=newnode;

}
}

void display()
{
    temp=head;
while(temp->next!=tail->next)
{
    printf("%d ",temp->data);
    temp=temp->next;
}
printf("%d ",tail->data);
}


void inseratend()
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node));

    printf("Enter data u want to insert?\n");
scanf("%d",&newnode->data);
newnode->next=0;
if(head==0)
{
    printf("list is Empty");

}
else{
    tail->next=newnode;
    newnode->next=head;
    tail=newnode;
}



}

void insertatpos()
{   int pos,a=1;
    printf("Enter u want to insert position\n");
    scanf("%d",&pos);
    if(pos==1)
    {
        insertatbeg();
        display();
    }
    else{
struct node* newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data u want to insert: ");
        scanf("%d",&newnode->data);
        temp=head;
while(a<pos-1)
{
temp=temp->next;
a++;

}
newnode->next=temp->next;
temp->next=newnode;
    }
 



}





int main()
{ int choice=1,i=0,n,num,pos,a=0;
 printf("how many nodes do you want?");
 scanf("%d",&n);
 head=NULL;
for(i=0;i<n;i++)
{

struct node* newnode=(struct node*)malloc(sizeof(struct node));

printf("Enter data:\n");
scanf("%d",&newnode->data);
newnode->next=NULL;

if(head==0)
{
head=tail=newnode;
tail->next=head;
}
else{
tail->next=newnode;
tail=newnode;
tail->next=head;

}

}
display();
printf("\n");
while(1)
{
 printf("Do you want to insert data in ths Circular LL ?\n");
 printf("1.inser at beginning\n");
 printf("2.insert at end\n");
 printf("3.insert at given position\n");
 printf("0. Exit");
 printf("Enter your choice: ");
 scanf("%d",&num);
 
 switch (num)
 { 
    case 0:
    exit(0);
 case 1:
    insertatbeg();
    printf("\n");
    display();
    break;

    case 2:
    inseratend();
    printf("\n");
    display();
    break;

case 3:
insertatpos();
display();
break;
    
 } 
    
  

}

}
