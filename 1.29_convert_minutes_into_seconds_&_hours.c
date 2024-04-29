#include<stdio.h>
main()
{
	int minutes,seconds,hours;
	
	printf("\n\n\t Enter minutes : ");
	scanf("%d",&minutes);
	
	seconds=minutes*60;
	hours=minutes/60;
	
	printf("\n\n\t %d seconds,\t %2d hours",seconds,hours);
	
}
