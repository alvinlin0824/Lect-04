// Please write a program
// Allow users to input any string n, and judge whether the content of n is a positive integer
// When the input n is not a positive integer, prompt the user to input a wrong type
// If the input value is a positive integer, print it to the screen
#include<iostream>
#include<string>
using namespace std;
int main(){
    
    string str;

    cin >> str;
    
     if (("a" <= str && str <= "z") || ("A" <= str && str <= "Z")){
         cout << "is not a number";   
     } 
     else cout << "n=" << str;
         

    return 0;
}