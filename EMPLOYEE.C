#include<stdio.h>
#include<conio.h>
struct Employee
{
  int Empid;
  char Empname[20];
  int DeptId;
  float Salary;
  };
main()
{
 struct Employee e1,e2,e3;
 printf("Enter the values for three employees");
 scanf("%d %c %d %f ",&e1.Empid,&e1.Empname,&e1.DeptId,&e1.Salary);
 scanf("%d %c %d %f ",&e2.Empid,&e2.Empname,&e2.DeptId,&e2.Salary);
 scanf("%d %c %d %f ",&e3.Empid,&e3.Empname,&e3.DeptId,&e3.Salary);
 if(e1.salary >e2.salary && e1.salary>e3.salary)
  {
	printf("%f",e1.salary);
	}
 else if(e2.salary>e1.salary && e2.salary>e3.salary)
  {
	printf("%f",e2.salary);
	}
 else
  {
	printf("%f",e3.salary);
	}
 getch();
 return 0;
}