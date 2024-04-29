/*
given tear is a leap year or not
*/
#include<stdio.h>
main()
{
	int year;
	printf("\n\n\t Enter the year : ");
	scanf("%d",&year);
	if(year %4==0)
	{
		printf("\n\n\t %d is a leap year",year);
		
	}
	else
	{
		printf("\n\n\t %d is not a leap year",year);
		
	}
}
