/*
remaining salary
*/ 
#include<stdio.h>
main()
{
	int bs,li,ip,rs;
	
	printf("\n\n\t Enter basic salary : ");
	scanf("%d",&bs);
	
	ip=bs*10/100;
	li=bs*10/100;
	rs=bs-ip-li;
	
	printf("\n\n\t ");
	printf("\n\n\t basic salary insurance premium loan installment remaining salary");
	printf("\n\n\t ");
	printf("\n\n\t %d \t\t\t %d \t\t\t %d \t\t\t %d",bs,ip,li,rs); 
	
}
