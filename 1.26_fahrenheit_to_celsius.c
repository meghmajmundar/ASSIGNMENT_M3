#include<stdio.h>
main()
{
	float c,f;
	
	printf("Enter fahrenheit: ");
	scanf("%f",&f);
	c=(f-32)*5/9;
	printf("Celcius: %f",c);
	
}
