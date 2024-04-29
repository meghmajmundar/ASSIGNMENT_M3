/* 
Area of triangle A=0.5*b*h
*/
#include<stdio.h>
main()
{
	int b=32,h=15;
	float A;
	
	A=0.5*b*h;
	
	printf("\n\n\t A = %f ",A);
	printf("\n\n\t 0.5 = %f",0.5);
	printf("\n\n\t b = %d ",b);
	printf("\n\n\t h = %d ",h);
	
	printf("\n\n\t %f=0.5*%d*%d",A,0.5,b,h);
	
}
