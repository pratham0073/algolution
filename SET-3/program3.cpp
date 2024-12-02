#include <iostream>
#include <deque>
#include <vector>

using namespace std;

void printMaxForEachSubarray(vector<int>& arr, int N, int K) {
    deque<int> dq;
    
    for (int i = 0; i < N; i++) {
        if (!dq.empty() && dq.front() < i - K + 1) {
            dq.pop_front();
        }

        while (!dq.empty() && arr[dq.back()] <= arr[i]) {
            dq.pop_back();
        }

        dq.push_back(i);

        if (i >= K - 1) {
            cout << arr[dq.front()] << " ";
        }
    }
    cout << endl;
}

int main() {
    vector<int> arr = {1, 2, 3, 1, 4, 5};
    int K = 3;
    int N = arr.size();
    printMaxForEachSubarray(arr, N, K);
    
    vector<int> arr2 = {8, 5, 10, 7, 9, 4, 15, 12, 90, 13};
    K = 4;
    N = arr2.size();
    printMaxForEachSubarray(arr2, N, K);
    
    vector<int> arr3 = {20, 10, 30};
    K = 1;
    N = arr3.size();
    printMaxForEachSubarray(arr3, N, K);

    return 0;
}
