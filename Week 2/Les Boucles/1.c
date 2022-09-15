#include<stdio.h>

int main()
{
	int N , i ;
	
	printf(" donner un nombre :");
	scanf("%d",&N);
	
	for (i=0 ; i<=10 ;i++)
	{
		printf("%d * %d = %d \n ", i , N , i * N);
		
	}
	
	
	return 0;
}
