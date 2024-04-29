/*
check the number is positive or negative
*/
#include<stdio.h>
main()
{
	int num;
	printf("\n\n\t Enter number: ");
	scanf("%d",&num);
	
	if(num > 0)
	{
		printf("\n\n\t Number is positive");
	}
	else
	{
		printf("\n\n\t Number is negative");
	}
}
