#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node *front=0;
struct node *rear=0;
void enqueue (int x)
{
    struct node* newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=0;
    if(front==0 && rear==0 )
    {
         front=rear=newnode;
    }
    else{
        rear->next=newnode;
        rear=newnode;
    }
}
void display()
{
    if(front==0 && rear==0)
    {
        printf("Queue is empty");
    }
    else{
        struct node* temp;
        temp=front;
        while(temp!=0)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }

    }
}

void dequeue()
{
    if(front==0 && rear==0)
    {
        printf("queue is empty");
    }
    else{
    struct node* temp;
    temp=front;
printf("dequed data is %d ",front->data);
front=front->next;
free(temp);
    }

}

int main()
{
enqueue(5);
enqueue(6);
enqueue(8);
display();
dequeue();



}
