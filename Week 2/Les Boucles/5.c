#include<stdio.h>


int main()
{
	int a,b,rest;
	printf("donner un nombre :\n");
	scanf("%d",&a);
	b=0;
	
	while(a>0){
		rest=a%10;
		b=10*b+rest;
		a=a/10;
	}
	
	printf("l''inverse est :%d",b);
	
	
	return 0;
}
