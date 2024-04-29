/*
find number is positive,negative or zero
*/
#include<stdio.h>
main()
{
	int num;
	printf("\n\n\t Enter number : ");
	scanf("%d",&num);
	if(num>0)
	{
		printf("\n\n\t Number is Positive");		
	}
	else if (num==0)
	{
		printf("\n\n\t Number is Zero");
	}
	else
	{
		printf("\n\n\t Number is Negative");
	}
}
