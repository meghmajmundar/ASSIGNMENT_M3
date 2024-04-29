/*
persons annual income
*/
#include<stdio.h>
main()
{
	int m_salary,allowances,bonus,annual_salary;
	
	printf("\n\n\t Enter basic salary");
	scanf("%d",&m_salary);
	
	printf("\n\n\t %d",m_salary); 
	
	allowances=m_salary+1000;
	printf("\n\n\t %d",allowances);
	
	bonus=m_salary+1200;
	printf("\n\n\t %d",bonus);
	
    annual_salary=m_salary+allowances+bonus*12;
    printf("\n\n\t %d",annual_salary);
	
	printf("\n\n\t %d=%d+%d+%d*%d",annual_salary=m_salary+allowances+bonus*12);	
		
}
