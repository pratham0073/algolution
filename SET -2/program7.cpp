#include <iostream>
#include <vector>
using namespace std;

int maxSumOfKConsecutiveElements(vector<int> arr, int k) {
    int n = arr.size();
    
    if (n < k) {
        std::cout << "Invalid\n";
        return -1;
    }

    int max_sum = 0;
    int window_sum = 0;

    for (int i = 0; i < k; i++) {
        window_sum += arr[i];
    }

    max_sum = window_sum;

    for (int i = k; i < n; i++) {
        window_sum += arr[i] - arr[i - k];
        max_sum = max(max_sum, window_sum);
    }

    return max_sum;
}

int main() {
    vector<int> arr1 = {100, 200, 300, 400};
    int k1 = 2;
    cout << "Maximum sum: " << maxSumOfKConsecutiveElements(arr1, k1) << endl;

    vector<int> arr2 = {1, 4, 2, 10, 23, 3, 1, 0, 20};
    int k2 = 4;
    cout << "Maximum sum: " << maxSumOfKConsecutiveElements(arr2, k2) << endl;

    vector<int> arr3 = {2, 3};
    int k3 = 3;
    cout << "Maximum sum: " << maxSumOfKConsecutiveElements(arr3, k3) << endl;

    return 0;
}
