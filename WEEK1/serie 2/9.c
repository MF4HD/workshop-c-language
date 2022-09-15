#include <stdio.h>

int main() {
    char c;
    printf("give a character :");
    scanf("%c", &c);
    if(c >= 'a' && c <= 'z')
        printf("%c is an alphabet and small ", &c);
    else if(c >= 'A' && c <= 'Z')    
        printf("%c is an alphabet and capital", &c);
    else printf("%c is not an alphabet", &c);
    
    return 0;
}
