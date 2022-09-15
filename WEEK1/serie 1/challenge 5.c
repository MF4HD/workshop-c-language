#include<stdio.h>



int main(){
	
	float c , f ;
	printf("donne la temperature en f :");
	scanf("%f",&f);
	c=(f-32)/1.8;
	printf("la temperature en c :%f",c);
	
	if (c<=0)
	{
			printf("tres froid");
	}

	else if(c>=0 && c<=20)
	{
	printf("froid");
	}
	else if(c>20 && c<=30)
	{
		printf("chaud");
	}
	else if(c>30)
	{
		printf("tres chaud");
	}
	
	
	
	return 0;
}
