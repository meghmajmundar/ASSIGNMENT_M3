/*
calculate profit & loss on a transaction.
*/
#include<stdio.h>
main()
{
	int exp,profit,ans;
	
	printf("\n\n\t Enter Expense of transactioin: ");
	scanf("%d",&profit);
	
	ans=profit-exp;
	
	if(ans>0)
	{
		printf("\n\n\t Your portfolio is in Profit %d",ans);
	}
	else
	{
		printf("\n\n\t Your portfolio is in Loss %d",ans);
	}	
}
