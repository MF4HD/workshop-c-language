#include<stdio.h>


int main()
{
	int n, i, j, n_etoile, n_espace;
	
	printf("entrer le nombre des ligne :");
	scanf("%d",&n);
	
	n_espace = n -1;
	n_etoile = 1;
	for( i = 1; i <= n; i++ ){	
		for( j = 0; j < n_espace; j++) {
			printf(" ");
	
		}
		for( j = 0; j < n_etoile; j++) {
			printf("*");
		}
		printf("\n");
		n_espace--;
		n_etoile+=2;
	}
	
	
	
	
	return 0;
}
