/*
input the week number and print week day.
*/
#include<stdio.h>
main()
{
	int w_num;
	
	printf("\n\n\t Enter the week number : ");
	scanf("%d",&w_num);
	
	if(w_num==1)
	{
		printf("Monday");
	}
	else if(w_num==2)
	{
		printf("Tuesday");
	}
	else if(w_num==3)
	{
		printf("Wednesday");
	}
	else if(w_num==4)
	{
		printf("Thursday");
	}
	else if(w_num==5)
	{
		printf("Friday");
	}
	else if(w_num==6)
	{
		printf("Saturday");
	}
	else if(w_num==7)
	{
		printf("Sunday");
	}
	else
	{
		printf("Invalid Input!!!");
	}
	return 0;
}
