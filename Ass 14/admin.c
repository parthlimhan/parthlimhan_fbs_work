#include<stdio.h>
typedef struct Admin
{
	int id;
	char name[20];
	int salary;
	int allowance;
}Admin;

void main()
{
	Admin a1,a2,a3;
	
	printf("Enter id, name, salary, allowance of Admin 1 : ");
	scanf("%d %s %d %d",&a1.id,&a1.name,&a1.salary,&a1.allowance);
	printf("Enter id, name, salary, allowance of Admin 2 : ");
	scanf("%d %s %d %d",&a2.id,&a2.name,&a2.salary,&a2.allowance);
	printf("Enter id, name, salary, allowance of Admin 3 : ");
	scanf("%d %s %d %d",&a3.id,&a3.name,&a3.salary,&a3.allowance);
	
	printf("ID : %d %d %d \n",a1.id,a2.id,a3.id);	
	printf("Name : %s %s %s \n",a1.name,a2.name,a3.name);
	printf("Salary : %d %d %d \n",a1.salary,a2.salary,a3.salary);
	printf("Allowance : %d %d %d \n",a1.allowance,a2.allowance,a3.allowance);
}