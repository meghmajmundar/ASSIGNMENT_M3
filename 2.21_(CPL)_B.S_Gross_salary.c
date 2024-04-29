/*
input basic salary of an employee and calculateits
Gross salary
*/
#include<stdio.h>
main()
{
	int b_salary,hra,da;
	
	printf("\n\n\t Enter your basic salary: ");
	scanf("%d",&b_salary);
	
	if (b_salary<=10000)
	{
		hra=b_salary*20/100;
		da=b_salary*80/100;
		printf("\n\n\t Gross salary is %d",b_salary+hra+da);
	}
	else if (b_salary<=2000)
	{
		hra=b_salary*25/100;
		da=b_salary*90/100;
		printf("\n\n\t Gross salary is %d",b_salary+hra+da);
	}
	else (b_salary>20000);
	{
		hra=b_salary*30/100;
		da=b_salary*95/100;
		printf("\n\n\t Gross salary is %d",b_salary+hra+da);
	}
		
}
