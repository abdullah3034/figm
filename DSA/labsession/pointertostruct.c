#include<stdio.h>

struct student{
int rollnum;
char name[20];
float marks;

};
void main()
{
struct student s;
struct student *ptr;
ptr=&s;
printf("Enter the data");
scanf("%d\n %s\n %f\n",&s.rollnum,&s.name,&s.marks);
printf("%d %s %f",ptr->rollnum,ptr->name,ptr->marks);
printf("r");


}




