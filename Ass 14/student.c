#include<stdio.h>
typedef struct Student
{
	int rollno;
	char name[20];
	int marks;
}Student;

void main()
{
	Student s1,s2,s3;
	
	printf("Enter rollno, name, marks of Student 1 : ");
	scanf("%d %s %d",&s1.rollno,&s1.name,&s1.marks);
	printf("Enter rollno, name, marks of Student 2 : ");
	scanf("%d %s %d",&s2.rollno,&s2.name,&s2.marks);
	printf("Enter rollno, name, marks of Student 3 : ");
	scanf("%d %s %d",&s3.rollno,&s3.name,&s3.marks);
	
	printf("RollNo : %d %d %d \n",s1.rollno,s2.rollno,s3.rollno);	
	printf("Name : %s %s %s \n",s1.name,s2.name,s3.name);
	printf("Marks : %d %d %d \n",s1.marks,s2.marks,s3.marks);
}