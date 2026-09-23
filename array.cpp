// 1. Print all elements of an array

// Question:
// Given an array, print all its elements.

#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

