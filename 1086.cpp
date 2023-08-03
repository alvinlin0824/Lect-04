// Users can input integers, floating-point numbers, characters, strings and output tests according to the following instructions

#include<stdio.h> 
int main() {
    // integer
    int N;
    scanf("%d\n",&N);
 
    // character
    char C1;
    C1 = getchar();
    scanf("\n");
    
    // float
    float F;
    scanf("%f ",&F);

    // string with whitespace
    char S1[256];
    gets(S1);
    
    // character
    char C2;
    C2 = getchar();
    scanf("\n");

    // // string with whitespace
    char S2[128];
    scanf("%s",S2);
    
    //N + F
    float sum = N + F;
    printf("%.2f\n", sum);

    //C1 + N
    printf("%c %d\n", C1 + N, C1 + N);
    
    // C2 + F
    int f = int (F);
    printf("%c %d\n", C2 + f, C2 + f);
   
    // S1 to lower case
    for (int i = 0; S1[i]!='\0'; i++)
     {
        if (S1[i] >= 'A' && S1[i] <= 'Z')
        {
            S1[i] += 32;
        }
     }
     printf("%s\n",S1);
    
     // S2 to upper case
    for (int i = 0; S2[i]!='\0'; i++)
     {
        if (S2[i] >= 'a' && S2[i] <= 'z')
        {
            S2[i] -= 32;
        }
     }
     printf("%s",S2);
    
    return 0;
}