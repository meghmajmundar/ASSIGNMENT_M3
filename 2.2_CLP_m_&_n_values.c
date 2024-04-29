/*
the value of an interger m and diaplay the value of n
*/
#include<stdio.h>
main()
{
	int m,n;
	
	printf("Enter the value of m:  ");
	scanf("%d",&m);
	
	if(m>0)
	{
		n=1;
		
	}
	else if (m==0)
	{
		n=0;
	}
	else
	{
		n=-1;
	}
	printf("value of n is %d",n);
}
