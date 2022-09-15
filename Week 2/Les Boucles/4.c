#include<stdio.h>


int main()
{
	int max , somme , a ;
	max=0;
	somme=0;
	a=1;
	printf("Entrez une serie d'entier, pour finir entrez 0.\n" );
	
	while(a!=0)
	{
		do{
			scanf("%d",&a);
			if(a>100) 
			printf("Entrez SVP un entier inferieur ou egal a 100\n");
		}
		while(a>100);
		somme+=a;
		if(a>max)
		max=a;	
	}
    printf("la somme: %d\n",somme);
    printf("le max: %d\n",max);
    
    return 0;
}
