#include<stdio.h>

int main()
{
	int n,i,j,k;
	printf("entez un nombre :");
	scanf("%d",&n);
	
	for (i=2;i<=n;i++)
	{
		k=0;
		for( j=2 ; j<i ; j++)
		{
			if(i%j==0){
				k = 1;	
			}
			
		}
			if(k==0)
			printf("%d \n",i);
		
	}
	
	
	
	
	return 0;
}
