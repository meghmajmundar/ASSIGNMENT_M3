/*
Country abbreviate form
*/
#include<stdio.h>
#include<string.h>
main()
{
	char str[100];
	
	printf("\n\n\t enter country name : ");
	gets(str);
	
	printf("\n\n\t %s",str);
	puts(str);
	
	printf("\n\n\t %c%c%c",str[0],str[7],str[17]);
	
	
	
	
}
