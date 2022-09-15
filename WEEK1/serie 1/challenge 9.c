#include <stdio.h>
#include <math.h>

int main(){
	float x1 , y1 , x2 , y2 , MN;
	
	printf("donnez la valeur de x1 :");
	scanf("%f",&x1);
	
	printf("donnez la valeur de y1 :");
	scanf("%f",&y1);
	
	printf("donnez la valeur de x2 :");
	scanf("%f",&x2);
	
	printf("donnez la valeur de y2 :");
	scanf("%f",&y2);
	
	MN=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	
	printf("la distance =%f",MN);
	return 0;
}
