#include<stdio.h>


int main()
{
	int n,i,k=0;
	printf("entrer un nombre :");
	scanf("%d",&n);
	
	for( i=2 ; i<n ; i++)
	{
		if(n%i==0){
		k=1;
		}
		
	}
	
	if (k==0)
	printf("le nombre est premier");
	else 
	printf("le nombre non premier");
	
	
	
	return 0;
}
