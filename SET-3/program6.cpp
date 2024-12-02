#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string& s) {
    int left = 0, right = s.size() - 1;
    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int minCyclicShiftsToPalindrome(const string& s) {
    int n = s.size();
    string double_s = s + s; 
    
    for (int i = 0; i < n; ++i) {
        string shifted = double_s.substr(i, n); 
        if (isPalindrome(shifted)) {
            return i; 
        }
    }
    
    return -1; 
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        string s;
        cin >> s;
        cout << minCyclicShiftsToPalindrome(s) << endl;
    }
    
    return 0;
}
