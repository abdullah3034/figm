#include<stdio.h>
#define N 5
int queue[N];
int front = -1;
int rear=-1;
void enque(int x)
{
    if(rear==N-1)
    {
        printf("Over flow");
    }
    else if(front==-1 && rear==-1)
    {
        front=rear=0;
        queue[rear]=x;
    }
    else{
        rear++;
        queue[rear]=x;
    }

}

void dequeue()
{
    if(front==-1 && rear==-1)
    {
        printf("No element in queue");
    }
    else if(front==rear)
    {
        front=rear=-1;
    }
    else{
        printf("dequed data is %d",queue[front]);
        front++;
    }
}

void display()
{
    if(front==-1 && rear==-1)
    {
        printf("List is empyt");
    }
    else{
        int i=front;
        while(i<= rear)
        {
            printf("%d ",queue[i]);
            i++;
        }
    }
}
void peek()
{
    if(front==-1 && rear==-1)
    {
        printf("List is empty");
    }

    else{
        printf("%d ",queue[front]);
    }
}
int main()
{
enque(5);
enque(6);
enque(8);
 display();
dequeue();
 display();
 peek();
 

}