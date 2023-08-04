// The user can input a character c, 
// and let the program judge whether the character is uppercase or lowercase English letters, 
// numbers or other punctuation marks.

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
        printf("%c is a lowercase letter.",C);
    }
    else printf("%c is a punctuation.",C);
    
    return 0;
}