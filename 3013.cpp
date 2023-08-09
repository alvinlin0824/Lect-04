// Please write a program that can input a character string S2 that can search for the location in the character string S1 
// after the user inputs a character string S1.
// Finally, print out all the positions that match the search string S2 and appear in the string S1.
// #include<stdio.h> 
// int main() {
//     // string with whitespace
//     char S1[129];
//     char S2[129];
//     gets(S1);
//     gets(S2);


// }

#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    int i, j, len1, len2;

    printf("Enter string S1: ");
    fgets(s1, 100, stdin);
    printf("Enter string S2: ");
    fgets(s2, 100, stdin);

    len1 = strlen(s1);
    len2 = strlen(s2);

    if (s1[len1 - 1] == '\n') {
        s1[len1 - 1] = '\0';
        len1--;
    }

    if (s2[len2 - 1] == '\n') {
        s2[len2 - 1] = '\0';
        len2--;
    }

    for (i = 0; i <= len1 - len2; i++) {
        for (j = 0; j < len2; j++) {
            if (s1[i + j] != s2[j]) {
                break;
            }
        }
        if (j == len2) {
            printf("Match found at position %d\n", i);
        }
    }

    return 0;
}