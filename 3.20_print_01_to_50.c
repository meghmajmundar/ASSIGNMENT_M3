//20. WAP program to print below output using for loop
// 01 TO 50
#include <stdio.h>
main()
{
	int i,j,count=1;
	
	for (i=1;i<=5;i++)
	{
		for (j=1;j<=10;j++)
		{
			printf("%02d  ",count);
			count++;
		}
		printf("\n");
	}
}
