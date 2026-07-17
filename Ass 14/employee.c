#include<stdio.h>
typedef struct Employee
{
	int id;
	char name[20];
	int salary;
}Employee;

void main()
{
	Employee e1,e2,e3;
	
	printf("Enter id, name, salary of Employee 1 : ");
	scanf("%d %s %d",&e1.id,&e1.name,&e1.salary);
	printf("Enter id, name, salary of Employee 2 : ");
	scanf("%d %s %d",&e2.id,&e2.name,&e2.salary);
	printf("Enter id, name, salary of Employee 3 : ");
	scanf("%d %s %d",&e3.id,&e3.name,&e3.salary);
	
	printf("ID : %d %d %d \n",e1.id,e2.id,e3.id);	
	printf("Name : %s %s %s \n",e1.name,e2.name,e3.name);
	printf("Salary : %d %d %d \n",e1.salary,e2.salary,e3.salary);
}