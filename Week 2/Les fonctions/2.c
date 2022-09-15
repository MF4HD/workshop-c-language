#include <stdio.h>
#include <stdlib.h>

void echange(int a, int b){
	int c;
	c=b; // original value
	b=a;
	a=c;
		 printf("\nApres lechange : a=%d   b=%d  ",a,b);
	
}

int main(){
	int a,b;
	printf("entrez la valeur de a et b :");
	scanf("%d %d",&a,&b);
	printf("l'etat initial :a=%d   b=%d ",a,b);
	echange(a,b);

	return 0;
}


