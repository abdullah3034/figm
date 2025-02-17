#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node* top=0;
void push(int data)
{
    
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=data;
newnode->next=top;
top=newnode;
}

void display()
{
struct node* temp;
temp=top;
if(top==0)
{
    printf("LL is empty");
}
else{
    while(temp!=0)
    {
printf("%d ",temp->data);
temp=temp->next;


}
}
}

void peek()
{
if(top==0)
{
    printf("LL is empty");
}
else{

    printf("peek value is %d\n",top->data);
}

}
void pop()
{
struct node* temp;
temp=top;
if(top==0)
{
    printf("List is Empty");
}
else{
    printf("poped data is %d \n",top->data);
    top=top->next;
    free(temp);
    display();
}

}
void main()
{
push(7);
push(5);
push(45);
display();
peek();
pop();
peek();
display();
}