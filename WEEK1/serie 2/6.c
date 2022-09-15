#include<stdio.h>

int main()
{
	float n;
	
	printf("entrer un nombre :");
	scanf("%f",&n);
	
	if (n<0)
		printf("le nombre est negatif");
	
	else if	(n>0)
	printf("le nombre est positif");
	
	
	else
		printf("le nombre est null");
	

	
	return 0;
	
	
}
