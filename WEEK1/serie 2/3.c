#include<stdio.h>

int main()
{
	int n1 , n2 , somme , triple ;
	
	printf("entrer nombre 1 :");
	scanf("%d",&n1);
	
	printf("entrer nombre 2 :");
	scanf("%d",&n2);
	
	triple= 3*(n1+n2);
	somme=n1+n2;
	
	if(n1==n2)
	printf("le triple :%d",triple);
	
	else 
	printf("la somme :%d",somme);
	
	
	return 0;
	
}
