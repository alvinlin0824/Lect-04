// Users can input characters, strings and output tests

#include<stdio.h>
#include <string.h>  
int main() {
    // character
    char ch;
    ch = getchar();
    putchar(ch);
    putchar('\n');
    
    // string length < 128
    char a[128];
    scanf("%s ",&a);
    printf("%s\n",a);
    
    // string length < 256
    char b[256];
    // scanf("%s",&b);
    gets(b);
    puts(b);
    return 0;
}

