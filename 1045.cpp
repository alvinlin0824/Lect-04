// The user can input a character and let the program judge whether the character is uppercase or lowercase English letters, 
// numbers or other punctuation marks. If the user enters a lowercase English letter, 
// convert it to uppercase and output it as swap to capital letter X.

#include<stdio.h> 
int main() {

    // character
    char C;
    C = getchar();
   
    if (48 <= C && C <= 57){
        printf("%c is a number.",C);
    }
    else if (65 <= C && C <= 90)
    {
        printf("%c is a capital letter.",C);
    }
    else if (97 <= C && C <= 122)
    {
        char c;
        c = C-32;
        printf("%c is a lowercase letter.\nswap to capital letter %c.",C,c);
    }
    else printf("%c is a punctuation.",C);
    
    return 0;
}