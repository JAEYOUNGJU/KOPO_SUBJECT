#include <stdio.h>

int main()
{
	//���� 
	 
	int ticketSelect = 0;
    long long int inputNumber = 0;
    printf("������ �����ϼ���. \n");
	printf("1. �ְ���\n");
	printf("2. �߰���\n");
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
