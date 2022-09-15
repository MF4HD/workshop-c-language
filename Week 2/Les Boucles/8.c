//Écrire un programme C qui utilise le principe de dichotomie pour trouver la solution de 
//l'équation x3+12x2+1=0 dans l'intervalle [-15,-10] avec une précision de 0,00001.

#include<stdio.h>
#include<math.h>
float f(float x) {
return pow(x,3)+12* pow(x, 2)+1;
}
int main()
{
float m,a,b,fa,fb,fm;
a=-15;
b=-10;
while( b-a> 0.00001){
	m = (a+b)/2;
	if(f(a)*f(m)<0) b=m;
	else a=m;
}

printf("a solution de l'équation x3+12x2+1=0 est : [ %f , %f ]", a, b);
    return 0;
}
