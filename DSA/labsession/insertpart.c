#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};
struct node* newnode, *head;

void insert(int data){
newnode=    (struct node*)malloc(sizeof(struct node));
newnode->data=data;
newnode->next=head;
head=newnode;

}

void printlinkedli(){
struct node* temp=head;
while(temp!=0)
{
    printf("%d ",temp->data);
    temp=temp->next;
}

}

void insertatbeg()
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("\nEnter data u want to insert:");
scanf("%d",&newnode->data);
newnode->next=head;
head=newnode;
printlinkedli();

}
void insertatend()
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("\nEnter data u want to insert:");
scanf("%d",&newnode->data);
newnode->next=NULL;
struct node*temp=head;
while(temp->next!=0)
{
    temp=temp->next;
    
}
temp->next=newnode;

printlinkedli();

}
    
void insertatpos(){
    struct node* temp;
    int pos,i=0;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the position u want to insert\n");
    scanf("%d",&pos);
    if(pos==1)
    {
        insertatbeg();
    }
    else{

        temp=head;
        while(i<pos-1)
        {
            temp=temp->next;
            i++;
        }

        printf("Enter data u want to insert");
        scanf("%d",&newnode->data);
        printlinkedli();
    }

}




int main()
{
insert(4);
insert(3);
insert(2);
insert(1);
insert(0);

printlinkedli();
insertatbeg();
insertatend();
insertatpos();
}