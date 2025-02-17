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
void deletionatbeg(){
if(head==NULL)
{
    printf("linked list is empty");
}
else{
struct node* temp;
temp=head;
head=temp->next;
free(temp);
printlinkedli();

}
}

void deletionatend()
{
    struct node* prevnode,*temp;
    temp=head;
    while(temp->next!=0)
    {
        prevnode=temp;
        temp=temp->next;
    }
    if(temp==head)
    {
        head=0;
        free(temp);
    }
    else{
        prevnode->next=0;
        free(temp);
    }

printlinkedli();
}

void deletioninpos()
{int pos,i=1;
    printf("Enter the position u want to delete\n");
    scanf("%d",&pos);
    struct node* nextnode,*temp;
    temp=head;
    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    nextnode=temp->next;
    temp->next=nextnode->next;
    free(nextnode);
    printlinkedli();

    

}

int main()
{
insert(4);
insert(3);
insert(2);
insert(1);
insert(0);

printlinkedli();
printf("\n after delete the beginning of the data:\n");
  deletionatbeg();
  printf("\n after delete the ending of the data:\n");
  deletionatend();

  printf("\n");
   deletioninpos();


}