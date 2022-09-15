#include<stdio.h>


int main()
{
	char c;
	printf("entrer un alphabet :");
	scanf("%c",&c);
	
	if(c>=65 && c<=90)
	printf("il s'agit d'un alphabet majuscule");
	else
	printf("il s'agit d'un alphabet minuscule");
	 
	
}
