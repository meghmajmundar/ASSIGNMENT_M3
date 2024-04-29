/*
eligibilty for admission to professional course
*/
#include<stdio.h>
main()
{
	int maths,phy,chem,total;
	printf("\n\n\t Enter marks in mathematics: ");
	scanf("%d",&maths);
	
	printf("\n\n\t Enter marks in physics: ");
	scanf("%d",&phy);
	
	printf("\n\n\t Enter maeks in chemistry: ");
	scanf("%d",&chem);
	
	total=maths+phy+chem;
	
	if((maths>= 65 && phy>= 140 && chem>= 50 && total >= 190) || (maths + phy >= 140))
	{
		printf("congratulations! You are eligible for admission to the professional course.\n");
	
	}
	else
	{
		printf("Sorry, you are not eligible for admission to the professional course.\n");
	}
	return 0;
}
