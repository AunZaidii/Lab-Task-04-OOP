#include<iostream>
#include<conio.h>
using namespace std;

void swapno(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;

}





int main(){
    cout<<"Name: Aun Zaidi (SE-23095)"<<endl;
    cout<<"Start of Lab 04: Q1\n"<<endl;
    int a; 
    int b;
    cout<<"Enter first integer: ";
    cin>>a;
    cout<<"Enter second integer: ";
    cin>>b;
    int* ptrA = &a;
    int* ptrB = &b;

    cout<<"The first value is: "<<a<<"\nThe second value is "<<b<<endl;
    cout<<"\nSWAPPED VALUES:\n";
    swapnum(&ptrA, &ptrB);
    cout<<"\nThe first value is: "<<*ptrA<<"\nThe second value is "<<*ptrB<<endl;
    return 0;
}


