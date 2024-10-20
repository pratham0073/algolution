#include <iostream>
#include <cctype> 
using namespace std;

bool isPalindrome(string s) {
    string filtered;
    
    for (char c : s) {
        if (isalnum(c)) { 
            filtered += tolower(c); 
        }
    }
    
    int left = 0, right = filtered.length() - 1;
    
    while (left < right) {
        if (filtered[left] != filtered[right]) {
            return false; 
        }
        left++;
        right--;
    }
    return true; 
}

int main() {
    string s1 = "A man, a plan, a canal: Panama";
    string s2 = "race a car";
    
    cout << (isPalindrome(s1) ? "true" : "false") << endl; 
    cout << (isPalindrome(s2) ? "true" : "false") << endl; 
    
    return 0;
}
