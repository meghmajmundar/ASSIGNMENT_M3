/*
character is vowel or not
*/
#include<stdio.h>
main()
{
	char ch;
	
	printf("\n\n\t Enter character: ");
	scanf("%c",&ch);
	
	if (ch == 'a' || ch =='e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
	{
		printf("This character is a vowel");
	}
	else
	{
		printf("This character is not a vowel");
	}	
}
