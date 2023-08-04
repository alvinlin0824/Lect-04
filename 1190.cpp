// Please write a program so that the user can input a string and let the program judge the type of the string, 
// which has the following types:

// 1.All caps (can have punctuation and numbers)
// 2.All lowercase (can have punctuation and numbers)
// 3.Only uppercase and lowercase English letters, but not all uppercase or all lowercase (no punctuation marks)
// 4.Only uppercase and lowercase English letters + numbers (no punctuation marks)
// 5.Numbers only (no punctuation allowed)
// 6.only white-space
// 7.none of the above

#include<stdio.h> 
int main() {
    // string with whitespace
    char S1[129];
    char S2[129];
    gets(S1);
    
    // uppercase
    for (int i = 0; S1[i]!='\0'; i++)
     {  
        if (S1[i] >= 'A' && S1[i] <= 'Z')
        {
            S2[i] = S1[i] + 32;
        }
     }
     printf("%s is a uppercase string.\nswap to lowercase string %s.",S1,S2);
    
    // lowercase
    // for (int i = 0; S1[i]!='\0'; i++)
    //  {  
    //     if (S1[i] >= 'a' && S1[i] <= 'z')
    //     {
    //         S2[i] = S1[i] - 32;
    //     }
    //  }
    //  printf("%s is a lowercase string.\nswap to uppercase string %s.",S1,S2);

    //  // S2 to upper case
    // for (int i = 0; S2[i]!='\0'; i++)
    //  {
    //     if (S2[i] >= 'a' && S2[i] <= 'z')
    //     {
    //         S2[i] -= 32;
    //     }
    //  }
    //  printf("%s",S2);
    
    return 0;
}