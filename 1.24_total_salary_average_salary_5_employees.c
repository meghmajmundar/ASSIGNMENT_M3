#include<stdio.h>
main()
{
    float s1,s2,s3,s4,s5,total_salary,avrg_salary;
	
	
	printf("Salary of 1st Employee: ");
	scanf("%f",&s1);
	
	printf("Salary of 2nd Employee: ");
	scanf("%f",&s2);
	
	printf("Salary of 3rd Employee: ");
	scanf("%f",&s3);
	
	printf("Salary of 4th Employee: ");
	scanf("%f",&s4);
	
	printf("Salary of 5th Employee: ");
	scanf("%f",&s5);
	
	total_salary=s1+s2+s3+s4+s5;
	avrg_salary=total_salary/5;
	
	printf("\n\n\t total salary of employees:$%.2f\n",total_salary);
	printf("\n\n\t average salary of employees:$%.2f\n",avrg_salary);
}
