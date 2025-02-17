#include<stdio.h>
int main()
{ int pos,data,i,size=6;
int a[50]={5,6,7,8,9,10};
printf("in which position do you insert the data:");
scanf("%d",&pos);
printf("Enter tha that data:");
scanf("%d",&data);

for(i=5;i>pos-1;i--)
{
    a[i+1]=a[i];
}
a[pos-1]=data;
size++;

for(i=0;i<6;i++)
{
printf("%d ",a[i]);

}


}