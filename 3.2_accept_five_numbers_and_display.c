/*
 accept 5 numbers from user and display all numbers
*/
#include<stdio.h>
main()
{
	int i=0,num[5];
	printf("\n\n\t Enter five number [%d]: ");
	for(i=0;i<5;i++)
	{
	scanf("%d",&num[i]);
    }
    for(i=0;i<5;i++)
	{
		printf("Number[%d]:%d\n",i,num[i]);
	}	
}
