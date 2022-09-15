#include<stdio.h>

int main()
{
	int year,day=365;
	
	printf("type a year :");
	scanf("%d",&year);
	
	if (year %4 ==0)
		day=366;
	printf("year : %d | month : 12 | day : %d | hours : %d | minutes : %d | secounds : %d",year,day,day*24,day*24*60,day*24*60*60);
	
	
	
	
}
