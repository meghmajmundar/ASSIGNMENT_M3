#include<stdio.h>
main()
{
	int years,months,days;
	
	printf("enter years: ");
	scanf("%d",&years);
	months= years*12;
	days= years*365;
	printf("%d year = %d month/%d days",years,months,days);
	
}
