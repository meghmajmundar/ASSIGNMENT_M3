/*
Simple Calculator code
*/
#include<stdio.h>
main()
{
	int a,b,c;
	
	a=10;
	b=20;
	
	c=a-b;
	
	printf("\n\n\t 1) c=a-b");  //subtraction
	
	printf("\n\n\t a = %d",a);
	printf("\n\n\t b = %d",b);
	printf("\n\n\t c = %d",c);
	
	printf("\n\n\t %d = %d - %d",c,a,b);
	


	c=a*b;
	
	printf("\n\n\t 2) c=a*b");  //multiplication
	
	printf("\n\n\t a= %d",a);
	printf("\n\n\t b= %d",b);
	printf("\n\n\t c= %d",c);
	
	printf("\n\n\t %d = %d * %d",c,a,b);
	
	
	c=a+b;
	
	printf("\n\n\t 3) c=a+b ");  //addition
	
	printf("\n\n\t a= %d",a);
	printf("\n\n\t b= %d",b);
	printf("\n\n\t c= %d",c);
	
	printf("\n\n\t %d = %d + %d",c,a,b);
	
	c=a/b;
	
	printf("\n\n\t 4) c=a/b ");  //division
	
	printf("\n\n\t a= %d",a);
	printf("\n\n\t b= %d",b);
	printf("\n\n\t c= %d",c);
	
	printf("\n\n\t %d = %d / %d",c,a,b);
	
	c=a%b;
	
	printf("\n\n\t 5) c=a%b");  //modulo
	
	printf("\n\n\t a= %d",a);
	printf("\n\n\t b= %d",b);
	printf("\n\n\t c= %d",c);
	
	printf("\n\n\t %d = %d % %d",c,a,b);	
}
	
	

