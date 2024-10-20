#include <iostream>
#include <limits> 
using namespace std;

int findKthLargest(int arr[], int n, int k) {
    for (int i = 0; i < k; i++) {
        int maxIndex = 0;
        for (int j = 1; j < n; j++) {
            if (arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }
        if (i == k - 1) {
            return arr[maxIndex]; 
        }
        arr[maxIndex] = numeric_limits<int>::min(); 
    }
    return -1; 
}

int main() {
    int nums[] = {3, 2, 1, 5, 6, 4};
    int k = 2;
    int n = sizeof(nums) / sizeof(nums[0]);
    int result = findKthLargest(nums, n, k);
    cout << result << endl;  
    return 0;
}
