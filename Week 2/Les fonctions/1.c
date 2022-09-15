#include<stdio.h>
 
 //fonction
 int add(int a,int b){
 	int somme=a+b;
 	return somme;
 }
 int main()
 {
 	int a,b,somme;
 	printf("entrez la valeur de a : ");
 	scanf("%d",&a);
 	
 	printf("entrez la valeur de b : ");
 	scanf("%d",&b);
 	
 	somme=add(a,b);
 	printf("la somme : %d",somme);
 	return 0;
 	
 	
 	
 }
 	
 	
 	
 
 
