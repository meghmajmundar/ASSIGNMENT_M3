#include<stdio.h>
main()
{
float e1,e2,e3,e4,e5,total_expense,avrg_expense;
	
	
	printf("Expense of medicines: ");
	scanf("%f",&e1);
	
	printf("Expense of clothing: ");
	scanf("%f",&e2);
	
	printf("Expense of gloceries: ");
	scanf("%f",&e3);
	
	printf("Expense of food: ");
	scanf("%f",&e4);
	
	printf("Expense of petrol: ");
	scanf("%f",&e5);
	
	total_expense=e1+e2+e3+e4+e5;
	avrg_expense=total_expense/5;
	
	printf("\n\n\t total expenses of person:$%.2f\n",total_expense);
	printf("\n\n\t average expense of person:$%.2f\n",avrg_expense);
}	
	

