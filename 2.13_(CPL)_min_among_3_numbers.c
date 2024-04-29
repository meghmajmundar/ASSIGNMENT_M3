/*
minimum number among 3 no using ternary operator
*/
#include<stdio.h> 
main()
{
	int a,b,c,min;
	
	printf("\n\n\t Enter three numbers : ");
	scanf("%d%d%d",&a,&b,&c);
	min=(a<b)?(a<c?a:c):(b<c?b:c);
	printf("\n\n\t Minimum number is %d",min);
}
