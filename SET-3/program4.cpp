#include <iostream>
#include <string>
using namespace std;

bool checkValidString(string s) {
    int balance1 = 0, balance2 = 0;
    
    for (char ch : s) {
        if (ch == '(' || ch == '*') {
            balance1++;  
        } else {
            balance1--;
        }
        if (balance1 < 0) {
            return false; 
        }
    }
    
 
    for (int i = s.size() - 1; i >= 0; i--) {
        if (s[i] == ')' || s[i] == '*') {
            balance2++; 
        } else {
            balance2--;  
        }
        if (balance2 < 0) {
            return false; 
        }
    }
    
    return true;
}

int main() {
    string s;
    cin >> s;
    cout << (checkValidString(s) ? "true" : "false") << endl;
    return 0;
}
