#include <iostream>
#include <vector>
using namespace std;

int maxSubArray(const vector<int>& arr) {
    int maxSum = arr[0];
    int currentSum = arr[0];

    for (auto i = 1; i < arr.size(); i++) {
        currentSum = max(arr[i], currentSum + arr[i]);
        maxSum = max(maxSum, currentSum);
    }

    return maxSum;
}

int main() {
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int result = maxSubArray(arr);
    cout << "The maximum sum of the contiguous subarray is: " << result << endl;
    return 0;
}
