/*
check uppercase or lowercase or digit or special character
*/
#include<stdio.h>
main()
{
	char n,*result;
	int ascii;
	
	printf("\n\n\t Enter character : ");
	scanf("%c",&n);
	ascii = n;
	
	if(ascii>=65 && ascii<=90)
	{
		result="Uppercase";
	}
	else if (ascii>=97 && ascii <=122)
	{
		result="Lowercase";
	}
	else if (ascii>=48 && ascii<=57)
	{
		result="Digit";
	}
	else
	{
		result="Special Character";
	}
	printf("\n\n\t The Character is %s",result);
}
