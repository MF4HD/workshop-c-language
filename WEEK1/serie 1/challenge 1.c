#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	char nom, prenom, sexe  , num;
	int age;
	
	printf("taper votre nom :");
	scanf("%s",&nom);
	
	printf("taper votre prenom :");
	scanf("%s",&prenom);
	
	printf("taper votre sexe :");
	scanf("%s",&sexe);

	printf("taper votre numero de telephone :");
	scanf("%s",&num);
	
	printf("taper votre age :");
	scanf("%d",&age);
	
	printf("le nom : %s \n le prenom : %s \n le sexe : %s \n le numero : %s \n age %d",&nom, &prenom, &sexe, &num, &age);
//	puts(nom);
//	puts(prenom);
//	puts(Sexe);
	return 0;
}
