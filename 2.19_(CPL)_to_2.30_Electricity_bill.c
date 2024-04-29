/*
Que19)Calculate electricity bill of given customer
Que30) f bill exceeds Rs. 800 then a surcharge of 18% will be charged andthe
minimum bill should be of Rs. 256/-

*/
#include<stdio.h>
main()
{
	int coust_id,units;
	float charge,surchg=0,gramt,netamt;
	char coustnm[25];
	printf("\n\n\t Enter customer I'd: ");
	scanf("%d",&coust_id);
	printf("\n\n\t Enter name of customer : ");
	scanf("%s",coustnm);
	printf("\n\n\t Enter units consumed by customer : ");
	scanf("%d",&units);
	
	if(units<350)
	   charge=1.20;
	else if(units>=350 && units<600)
	   charge=1.50;
	else if(units>=600 && units<800)
	   charge=1.80;
	else
	   charge=2.0;      
	gramt= units* charge;
	if (gramt>800)
	surchg=gramt*18/100;
	netamt=gramt+surchg;
	if(netamt<256)
	netamt=256;
	   
	   
	printf("\n\n\t Electricity bill\n");
	printf("\n\n\t Customer I'd:%d\n",coust_id);
	printf("\n\n\t Customer name:%s\n",coustnm);
	printf("\n\n\t Units Consumed:%d\n",units);
	printf("\n\n\t Amount charges @rs. %4.2f per unit:%8.2f\n",charge,gramt);
	printf("\n\n\t Surcharge amount :%8.2f\n",surchg);
	printf("\n\n\t Total amount paid:%8.2f\n",netamt);
}
