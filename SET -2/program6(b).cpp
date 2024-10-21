#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void findPairsWithSum(vector<int> arr, int target) {
    sort(arr.begin(), arr.end());
    
    int left = 0;
    int right = arr.size() - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];
        
        if (sum == target) {
            cout << "Pair found: (" << arr[left] << ", " << arr[right] << ")\n";
            left++;
            right--;
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }
}

int main() {
    vector<int> arr = {1, 5, 7, -1, 5};
    int target = 6;
    
    findPairsWithSum(arr, target);
    
    return 0;
}
