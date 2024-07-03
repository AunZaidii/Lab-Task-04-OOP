#include<iostream>
#include<conio.h>
using namespace std;

int removeDuplicates(int arr[], int size) {
    if (size <= 1) 
        return size;

    int uniqueIndex = 1;
    for (int i = 1; i < size; ++i) {
        bool isDuplicate = false;

        for (int j = 0; j < uniqueIndex; ++j) {
            if (arr[i] == arr[j]) {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) {
            arr[uniqueIndex] = arr[i];
            ++uniqueIndex;
        }
    }

    return uniqueIndex; 
}

int main() {
    cout<<"Name: Aun Zaidi (SE-23095)"<<endl;
    cout<<"Start of Lab 04: Q4\n"<<endl;

    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    if (size <= 0) {
        cout << "Invalid array size!" << endl;
        return 1;
    }

    int arr[size];
    cout << "Enter " << size << " elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    int newSize = removeDuplicates(arr, size);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newSize; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}


