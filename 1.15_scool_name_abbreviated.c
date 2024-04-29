/* 
school name in abbreviated form
*/
#include<stdio.h>
main()
{
	char str[100];
	
	printf("\n\n\t Type full name : ");
	
	gets(str);
	
	printf("\n\n\t %s ",str);
	
	puts(str);
	
	printf("\n\n\t %c%c",str[0],str[9]);
}
