// Please write a program so that the user can input a string and let the program judge the type of the string, 
// which has the following types:

// 1.All caps (can have punctuation and numbers)
// 2.All lowercase (can have punctuation and numbers)
// 3.Only uppercase and lowercase English letters, but not all uppercase or all lowercase (no punctuation marks)
// 4.Only uppercase and lowercase English letters + numbers (no punctuation marks)
// 5.Numbers only (no punctuation allowed)
// 6.only white-space
// 7.none of the above

#include<iostream>
#include<string>
using namespace std;

int main() {
    // string with whitespace
    string str;
    string S2;
    cin >> str;
    
    // uppercase
    for (int i = 0; str[i]!='\0'; i++)
     {  
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            S2[i] = str[i] + 32;
        }
     }
     cout << str << " is a uppercase string." << endl << "swap to lowercase string" << S2;
    
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