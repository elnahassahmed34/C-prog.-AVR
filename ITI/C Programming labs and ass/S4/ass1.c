#include <stdio.h>
#include <stdlib.h>

int getmax (int a , int b , int c , int d) ;
int getmin (int a , int b , int c , int d) ;
int main()
{

	int x , y , z , m;
	
	printf("plz enter four numbers : ") ;
	scanf("%d%d%d%d" , &x , &y, &z, &m) ;
	
	int max = getmax(x,y,z,m);
	int min = getmin(x,y,z,m);
	
	printf("the greatest number is %d\n" , max);
	printf("the smallest number is %d" , min);
	
	return 0 ;
	
}

int getmax (int a , int b , int c , int d) 
{
	if((a>b) && (a>c) && (a>d))
	return a ;
	else if((b>a) && (b>c) && (b>d))
	return b ;
	else if((c>b) && (c>a) && (c>d))
	return c ;
	else
	return d ;
}


int getmin (int a , int b , int c , int d) 
{
	if((a<b) && (a<c) && (a<d))
	return a ;
	else if((b<a) && (b<c) && (b<d))
	return b ;
	else if((c<b) && (c<a) && (c<d))
	return c ;
	else
	return d ;
}
	