#include<stdio.h>

int main()
{
	int x , y , z ;
	
	int *p = &x ;
	int *q = &y ;
	int *r = &z ;
	
	x=1 ; y=2 ; z=3 ;
	
	printf("x = %d\n" , x) ;
	printf("y = %d\n" , y) ;
	printf("z = %d\n" , z) ;
	printf("p = %p\n" , p) ;
	printf("q = %p\n" , q) ;
	printf("r = %p\n" , r) ;
	printf("*p = %d\n" , *p) ;
	printf("*q = %d\n" , *q) ;
	printf("*r = %d\n" , *r) ;
	
	r=p ; p=q ; q=r;
	
	
	printf("x = %d\n" , x) ;
	printf("y = %d\n" , y) ;
	printf("z = %d\n" , z) ;
	printf("p = %p\n" , p) ;
	printf("q = %p\n" , q) ;
	printf("r = %p\n" , r) ;
	printf("*p = %d\n" , *p) ;
	printf("*q = %d\n" , *q) ;
	printf("*r = %d\n" , *r) ;
	
	return 0 ;
}