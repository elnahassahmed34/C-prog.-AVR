#include <stdio.h>
#include <stdlib.h>

int main()
{

	int cost , sell;
	printf("plz enter the cost and the sell price :");
	scanf("%d%d" , &cost,&sell) ;
	if(cost>sell)
		printf("total loss = %d" , cost-sell);
	else
		printf("total profit = %d" , sell-cost);
	
	return 0 ;
}