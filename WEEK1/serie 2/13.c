#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    double x1,y1,x2,y2,a,b;
    double dist1,dist2,dist;
    printf("Entrez le x1 et y1\n");
    scanf("%lf%lf",&x1,&y1);
    printf("Entrez le x2 et y2\n");
    scanf("%lf%lf",&x2,&y2);
    printf("Entrez le a et b\n");
    scanf("%lf%lf",&a,&b);
    dist1 = sqrt( (x1-a)*(x1-a)+(y1-b)*(y1-b) ); 
    dist2 = sqrt( (x2-a)*(x2-a)+(y2-b)*(y2-b) );
    dist = sqrt( (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2) );
    if( dist == dist1 + dist2 ) printf("Le point est sur le segment.\n");
    else printf("Le point n'est pas sur le segment.\n");
    system("pause");
    return 0;
