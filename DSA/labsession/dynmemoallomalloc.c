#include<stdio.h>
int main()
{
int n,i,*ptr;
printf("Enter the num of terms:");
scanf("%d",&n);
ptr=(int*)malloc(n*sizeof(int));
printf("Enter values");
for(i=0;i<n;i++)
{
scanf("%d\n",(ptr+i));

}
printf("\n the entered values are:");
for(i=0;i<n;i++)
{
    printf("%d ",*(ptr+i));
}


}