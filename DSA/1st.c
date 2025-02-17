#include<stdio.h>
#include<string.h>

int main()
{ int choice,val,pos;
  #define maxsize 50
  int arr[maxsize];
  int size=0;

void display(){
if(size==0)
printf("list is empty");
for(i=0;i<size;i++)
printf("%d",arr[i]);
}

void insertatpos(int pos,int val)
{
int i;
for(i=size-1;i>=pos;i--)
{
  arr[i+1]=arr[i];
}
arr[pos]=val;
size++;
printf("inserted %d at pos %d ",val,pos);


}
  

    
     while(1)
 {  
printf("\n ----- list menu ------");
printf("1.Insert at end");
printf("2.Insert at specified pos \n");
printf("3.delete at specified pos \n");
printf("4.Display \n");
printf("5.Exit\n");

printf("\n---------");
printf("Enter your choice:\t");
scanf("%d",&choice);

 }

 switch(choice){
 case 1:
  printf("Enter the data");
  scanf("%d",&val);
  arr[size++] = val;

  case 2:
  if(size==maxsize)
  {
  print("Array is full");
  break;
  }

  printf("Enter the position:");
  scanf("%d",&pos);
  if(pos<0 || pos>maxsize)
  {
    printf("invalid position");
    break;
  }
  printf("Enter the data:");
  scanf("%d",&val);
  insertatpos(pos,val);
  break;

  case 3:
  if(size==0){
    printf("List is empty");
    break;
  }
  printf("Enter the position\(position strt in 0 index\)");
  scanf("%d",&pos);
  if(pos<0 || pos>=size)
{
  printf("Invalid position");
  break;
}
deletefrompos(pos);
break;

case 4:display();
break;

case 5:exit(0);

default:printf("Wrong choice");

 }



}