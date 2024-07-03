#include<iostream>
#include<conio.h>
using namespace std;

int* findMax(int arr[], int size) {
    if (size == 0) 
        return nullptr;

    int *maxPtr = &arr[0];

    for (int i = 1; i < size; ++i) {
        if (arr[i] > *maxPtr) { 
            maxPtr = &arr[i];  
        }
    }
    return maxPtr; 
}
int main() {
    cout<<"Name: Aun Zaidi (SE-23095)"<<endl;
    cout<<"Start of Lab 04: Q3\n"<<endl;

    int size;
   cout << "Enter the size of the array: ";
   cin >> size;

    if (size <= 0) {
       cout << "Invalid array size!" <<endl;
        return 1;
    }

    int arr[size];
   cout << "Enter " << size << " elements of the array: ";
    for (int i = 0; i < size; ++i) {
       cin >> arr[i];
    }

    int* maxPtr = findMax(arr, size);

    if (maxPtr != nullptr) {
        cout << "Maximum element in the array: " << *maxPtr << endl;
    } else {
        cout << "Array is empty!" << endl;
    }

    return 0;
}