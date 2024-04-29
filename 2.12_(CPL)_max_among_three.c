/*
maximum number amoung three numbers using ternary operator
*/
#include<stdio.h>
main()
{
	int a,b,c,max;
	
	printf("\n\n\t Enter three numbers : ");
	scanf("%d%d%d",&a,&b,&c);
	max=(a>b)?(a>c?a:c):(b>c?b:c);
	printf("\n\n\t Maximum number is %d",max);
}
