#include <stdio.h>

int main()
{
	//선언 
	const int baby_day_price = 15000, child_day_price = 46000, teen_day_price = 50000, adult_day_price = 56000;
	const int baby_night_price = 15000, child_night_price = 35000, teen_night_price = 40000, adult_night_price = 45000;
	
    const long long int FULL_DIGIT = 10000000000000, FULL_DIGIT_MIN = 10000000000, SEVEN_DIGIT = 1000000;
   
    const int TWO_DIGIT = 100, ONE_DIGIT = 10, OLD_GENERATION = 1900, NEW_GENERATION = 2000;
    const int MALE_OLD = 1, FEMALE_OLD = 2, MALE_NEW = 3, FEMALE_NEW = 4, BEFORE_BIRTH = 2, AFTER_BIRTH = 1;
	int ticketSelect = 0;
    long long int inputNumber = 0;
	
	int orderCount = 0;
	const int MAX_COUNT = 10, MIN_COUNT = 10;
	
	int discountSelect = 0; 
	
	
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
	//주민번호 입력
	 
	printf("주민번호를 입력하세요. \n");
	
	while(1)
    {
    	scanf("%lld", &inputNumber);
    	if((inputNumber >=FULL_DIGIT_MIN) && (inputNumber<FULL_DIGIT))
	{
		break;
	}
	else
	{
		printf("\n");
	}
	return inputNumber;
	}
	//주문 갯수 입력
	printf("몇개를 주문하시겠습니까? \n");
    while(1)
    {
	scanf("%d", &orderCount);
	if((orderCount <= MAX_COUNT) && (orderCount <= MIN_COUNT))
	{
		break;
	}
	else
    {
    	printf("\n");
    }
    return orderCount;
	}
	//우대사항 입력 
	
	printf("우대사항을 선택하세요.\n");
	printf("1. 없음 (나이 우대는 자동처리)\n");
	printf("2. 장애인\n");
	printf("3. 국가유공자\n");
	printf("4. 다자녀\n");
	printf("5. 임산부\n");
	
	while(1)
	{
		scanf("%d", &discountSelect);
		if(discountSelect >= 1 && discountSelect <=5)
		{
			break;
		}
		else
		{
			printf("\n");
		}
		return discountSelect;
	 } 
	
	

	return 0;
 } 
