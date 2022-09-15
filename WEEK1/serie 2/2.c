#include<stdio.h>

int main (){
	
	char c;
	printf("ecrivez un caractere :");
	scanf("%c",&c);
	
	switch(c){
	case 'a':
		printf("cest une voyelle.");
		break;
	
	case 'e' :
		printf("cest une voyelle.");
		break;
	
	case 'i':
		printf("cest une voyelle.");
		break;
	
	case 'o':
		printf("cest une voyelle.");
		break;
	
	case 'u':
		printf("cest une voyelle.");
		break;
	
	case 'y':
		printf("cest une voyelle.");
		
	default:
		printf("cest une consonne.");
	}
	
	
	return 0;
}
