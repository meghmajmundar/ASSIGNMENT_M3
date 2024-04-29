#include<stdio.h>
main()
{
	int a,years,days;
	
	printf("\n\n\t Enter years : ");
	scanf("%d",&a);
	
	days=a*365;
	printf("\n\n\t %d year=%d days",a,days);
	printf("\n\n\t Enter days : ");
	scanf("%d",&a);
	
	years=a/365;
	printf("\n\n\t %d years to days %d",years,a);
		
}
