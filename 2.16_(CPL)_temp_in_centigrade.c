/*
Read temp in centigrade and display a suitable message
*/
#include<stdio.h>
main()
{
	int temp;
	char *result;
	printf("\n\n\t Enter Temperature here : ");
	scanf("%d",&temp);
	
	if(temp<=0)
	{
		result="Freezing Weather";
	}
	else if (temp>0 && temp<10)
	{
		result="Very Cold Weather";
	}
	else if (temp>10 && temp<20)
	{
		result="Cold Weather";
	}
	else if (temp>20 && temp<30)
	{
		result="Normal Weather";
	}
	else if (temp>30 && temp<40)
	{
		result="Hot Weather";
	}
	else
	{
		result="Very Hot Weather";
	}
	printf("\n\n\t %s",result);
}
