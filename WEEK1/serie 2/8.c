#include<stdio.h>


int main(){
	float m;
printf("entrez la moyenne :");
scanf("%f",&m);

if       (m<10)
printf("recale");

else if  (m>=10 && m<12)
printf("mention passable");

else if  (m>=12 && m<14)
printf ("mention assez bien");

else if  (m>=14 && m<16)
printf("mention bien");

else if (m>=16)
printf("mention tres bien");


return 0;
 }
