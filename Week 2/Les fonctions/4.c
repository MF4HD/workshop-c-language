#include<stdio.h>
#include<stdbool.h>
float divededby(int n,int a)
{
    return n/a;
}
bool isPremier(int nbr)
{
    int i ,f=0 ;
    for(i=2;i < nbr;i++)
    {

        if(nbr%i==0){
         f = 1;

            break;
        }
    }
    if(f==0) return true;
    else return false;
}
int main() {
	
	int a,b;
	bool bo;
		
	printf("Donner le nombre a : ");
	scanf("%d",&a);
	printf("Donner le nombre b : ");
	scanf("%d",&b);
	
	bo = isPremier((int)divededby(a,b));
	
	(bo) ? printf("PREMIER") : printf("NON PREMIER");
			
    return 0;
}
