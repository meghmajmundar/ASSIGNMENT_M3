/*
accept the height in cms & categorize
*/
#include<stdio.h>
main()
{
	int height;
	char *result;
	printf("\n\n\t enter the height in cms: ");
	scanf("%d",&height);
	if(height<=150)
	{
		printf("\n\n\t Your height is short");
	}
	else if(height>=195)
	{
		result="very long height";
	}
	else if(height>=170)
	{
		result="Average height";	      
	}
	else if(height>=150 && height <=160)
	{
		result="Short height";
	}
	else
	{
		result="Very short height";
	}
	printf("\n\n\t %s",result);
}
