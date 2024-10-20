#include <iostream>
#include <vector>
using namespace std;

int countInversions(const vector<int>& arr) {
    int count = 0;
    int n = arr.size();
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                count++;
            }
        }
    }
    
    return count;
}

int main() {
    vector<int> arr = {7, 2, 6, 3};
    int result = countInversions(arr);
    cout << "Number of inversions: " << result << endl;
    return 0;
}
