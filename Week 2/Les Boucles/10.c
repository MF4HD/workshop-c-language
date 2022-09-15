#include<stdio.h>


int main()
{
	int i , n , somme;
	somme=0 ;
	printf("entrer les nombres : ");
	for (i=1; i<=10 ;i++)
	{
		
		scanf("%d",&n);
		if(n<0) continue ;
		somme += n;
	}
	
	
		printf("%d ", somme);
	
}
