#include<stdio.h>
#define N 5
int top=-1;
int stack[N];
void pop()
{
int item;
if(top==-1)
{
    printf("underflow condition");
}
else{
item=stack[top];
top--;
printf("%d",item);

}

}
int main()
{

pop();

}