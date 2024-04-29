/*
accept marks from user check pass or fail
*/
#include<stdio.h>
main()
{
	int marks;
	printf("\n\n\t Enter the marks ");
	scanf("%d",&marks);
	if (marks < 35)
	{
		printf("\n\n\t Student is failed...");
	}
	else
	{
		printf("\n\n\t Student is passed...");
	}
}
