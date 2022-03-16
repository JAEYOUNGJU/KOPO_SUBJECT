#include <stdio.h>

int main()
{
	//선언 
	 
	int ticketSelect = 0;
    long long int inputNumber = 0;
    printf("권종을 선택하세요. \n");
	printf("1. 주간권\n");
	printf("2. 야간권\n");
	while(1)
	{
		scanf("%d", &ticketSelect);
		if(ticketSelect ==1 || ticketSelect ==2) 
	{
		break;
	}
	else
	{
		printf("\n");
	}
	
	return ticketSelect;

    } 
    	return 0;
 } 
