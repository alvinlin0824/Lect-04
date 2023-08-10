// Please write a program
// Allow users to input any string n, and judge whether the content of n is a positive integer
// When the input n is not a positive integer, prompt the user to input a wrong type, and ask the user to re-enter until it is a positive integer
// If the input value is a positive integer, print it to the screen and end the program
#include<iostream>
#include<string>
using namespace std;
int main(){
    
    string str;
    int is_number = 1;

    do {
    cin >> str;
    
     if (("a" <= str && str <= "z") || ("A" <= str && str <= "Z")){
         cout << "is not a number"; 
         is_number = 0;  
     }
     else {
        cout << "n=" << str;
        is_number = 1;
     } 
         
    } while (is_number = 0);

    
     
        //  else cout << "n=" << str;
    return 0;
}