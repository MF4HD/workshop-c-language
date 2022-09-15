#include<stdio.h>



int main(){
	float  a , b , addition, soustraction, multiplication , division ;
	
	printf("entrez deux entier a et b :");
	scanf("%f%f",&a,&b);
	addition = a + b;
	soustraction = a - b;
	multiplication = a * b;
	division = a/b;
	printf("addition = %f\n", addition);
	printf("soustraction = %f\n", soustraction);
	printf("multiplication = %f\n", multiplication);
	printf("division = %.2f\n", division);
	printf("modulo=%.2f",int(a)%int(b));
	
	return 0;
}
