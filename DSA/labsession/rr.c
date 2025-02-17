
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};
struct node* newnode, *head;
void printlinkedli(){
struct node* temp=head;
while(temp!=0)
{
    printf("%d ",temp->data);
    temp=temp->next;
}

}
void insertatpos(){
    struct node* temp;
    int pos,i=0;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the position u want to insert\n");
    scanf("%d",&pos);
    if(pos==1)
    {
        printf("insertatbeg");
    }
    else{

        temp=head;
        while(i<pos-1)
        {
            temp=temp->next;
            i++;
        }

        printf("Enter data u want to insert");
        scanf("%d ",&newnode->data);
        printlinkedli();
    }

}

int main()
{
    insertatpos();
}
