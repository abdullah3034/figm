#include<stdio.h>
#define N 5
int stack[N];
int top=-1;
void push()
{
    int x;
    printf("Enter data:");
    scanf("%d",&x);
    if(top==N-1)
    {
        printf("Over flow condition");
    }
    else{
        top++;
        stack[top]=x;
    }
}
void pop()
{
    int item;
    if(top==-1)
    {
        printf("Under flow condition");
    }
    else{
        item=stack[top];
        top--;
        printf("poped value is %d\n",item);
    }

}
void peek()
{
if(top==-1)
{
    printf("Under flow condition");

}
else{
   
    printf("peek value is %d\n", stack[top]);
}



}
void display()
{
    int i;
    for(i=top;i>=0;i--)
    {
        printf("%d ",stack[i]);
    }
}

int main()
{
    while(1)
    {
printf("1.Push\n");
printf("2.pop\n");
printf("3.peek\n");
printf("4.display\n");
printf("0.Exit\n");
int choice;
printf("Enter your choice:");
scanf("%d",&choice);

switch (choice)
{
case 1:
    push();
    
    break;
case 2:
pop();
break;

case 3:
peek();
break;

case 4:
display();
break;


default:

printf("Invalid choice");
    
}
    }

}
