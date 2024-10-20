#include <iostream>
using namespace std;

int findEquilibriumIndex(int arr[], int n) {
    int totalSum = 0;
    int leftSum = 0;
    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
    }

    
    for (int i = 0; i < n; i++) {
        totalSum -= arr[i]; 

        if (leftSum == totalSum) {
            return i + 1; 
        }

        leftSum += arr[i]; 
    }

    return -1; 
}

int main() {
    int arr1[] = {-7, 1, 5, 2, -4, 3, 0};

    cout << findEquilibriumIndex(arr1, sizeof(arr1) / sizeof(arr1[0])) << endl;

    return 0;
}
