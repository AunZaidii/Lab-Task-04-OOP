#include<iostream>
#include <cstring>
#include<conio.h>
using namespace std;

bool isPalindrome(const char* str) {
    if (str == nullptr)
        return false;
    int len = strlen(str);
    const char* start = str;                
    const char* end = str + len - 1;       

    while (start < end) {                   
        if (*start != *end)                
            return false;                   
        start++;                            
        end--; }
    return true;        }
int main() {
    cout<<"Name: Aun Zaidi (SE-23095)"<<endl;
    cout<<"Start of Lab 04: Q5\n"<<endl;

    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100); 
    if (isPalindrome(str)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;}
    return 0;
}


