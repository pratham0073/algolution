#include <iostream>
#include <vector>

using namespace std;

bool isPalindrome(const vector<int>& arr) {
    int left = 0, right = arr.size() - 1;
    while (left < right) {
        if (arr[left] != arr[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (isPalindrome(arr)) {
        cout<<"yes"<<endl;
    } else {
        cout << "no"<<endl;
    }

    return 0;
}
