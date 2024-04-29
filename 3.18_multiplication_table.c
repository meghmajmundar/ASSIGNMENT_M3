/*18.Write a C Program to Print the Multiplication Table of N
i. E.g. 5 * 1 = 5
ii. 5 * 2 = 10
1. .
2. .
iii. 5 * 10 = 50
*/
#include<stdio.h>
main()
{
	int i,num;
	printf("\n\n\t Enter Number : ");
	scanf("%d",&num);
	
	for(i=1;i<=10;i++)
	{
		printf("\n\t %d x %d = %d",num,i,num*i);
	}
}
