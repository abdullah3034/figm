#include<stdio.h>
#define N 5
int x;
int stack[5];
int top=-1;

void push()
{
printf("Enter u want to push data:\n");
scanf("%d",&x);

if(top==N-1)
{
    printf("overflow condition");
}
else{
    top++;
    stack[top]=x;
    
}
}