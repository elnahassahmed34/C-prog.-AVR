#include <stdio.h>
#include <stdlib.h>

int main()
{

	int x , y ,z;
	printf("plz enter the sides of tri :");
	scanf("%d%d%d" , &x,&y,&z) ;
	if((x==y) && (x==z))
		printf("equilateral");
	else if((x!=y) && (x!=z) && (y!=z))
		printf("scalene");
	else
		printf("isoscoles");
	
	return 0 ;
}