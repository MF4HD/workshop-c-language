#include<stdio.h>
#include<stdlib.h>
int main()
{
    int h1,h2;
    int m1,m2;
    int s1,s2;
    int k=1;
    printf("Entrez le premier instant:\n");
    scanf("%d:%d:%d",&h1,&m1,&s1);
    printf("Entrez le deuxieme instant:\n");
    scanf("%d:%d:%d",&h2,&m2,&s2);
    if(h1>h2) k=2;
    if(h1==h2 && m1>m2) k=2;
    if(h1==h2 && m1==m2 && s1>s2) k=2;
    if(h1==h2 && m1==m2 && s1==s2) k=0;
    switch(k)
    {
       case 0: printf("Il s'agit du meme instant.\n");
            break;
       case 1: printf("Le premier instant vient avant le deuxieme.\n");
            break;
       case 2: printf("Le deuxieme instant vient avant le premier.\n");
    }
    system("pause");
    return 0;
}
