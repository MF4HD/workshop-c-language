#include<stdio.h>

int main()
{
	int    n , inv ,  rest ;
	printf("donnez un nombre de 3 chiffres :");
	scanf("%d",&n);
	 rest= n%10;
	 n/=10;
	 inv=rest;
	 
	 rest=n%10;
	 n/=10;
	 inv*=10;
	 inv+= rest;
	 
	 rest=n%10;
	 n/=10;
	 inv*=10;
	 inv+=rest;
	 
	 printf("%d",inv);
	 return 0;
	
	
	
	
}
