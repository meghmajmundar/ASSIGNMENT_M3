/*
find the largest of three numbers
*/
#include<stdio.h>
main()
{
	int n1,n2,n3;
	printf("\n\n\t Enter three numbers : ");
	scanf("%d %d %d",&n1,&n2,&n3);
	
	if(n1>n2 && n1>n3)
	{
		printf("%d is largest",n1);
	}
	else if (n2>n3)
	{
		printf("%d is largest",n2);
	}
	else
	{
		printf("%d is largest",n3);
	}
}
