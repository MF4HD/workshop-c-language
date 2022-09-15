#include<stdio.h>
#include<math.h>

int main()
{
	int x,y;
	int i=1,m = 1;
	printf("entrez le nombre de la base x : ");
	scanf("%d",&x);
	
	printf("entrez le nombre de la base y : ");
	scanf("%d",&y);
	
	if (x==0) printf("le resultat est 0");
	else if (y == 0) printf("le resultat est 1");
	else 
	{
		while(i<=y) //y = 4
		{
			m = m * x; // x = 2
			i++;
		}
	printf("le resultat est %d",m);
	}
	
	
	
	
}
