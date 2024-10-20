#include <iostream>
using namespace std;

bool printDiamond(int n) {
    if (n % 2 == 0) {
        cout << "Error: Number of rows must be odd." << endl;
        return false;
    }

    int mid = n / 2;

    for (int i = 0; i <= mid; i++) {
        for (int j = 0; j < mid - i; j++) {
            cout << " ";
        }
        for (int k = 0; k < 2 * i + 1; k++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = mid - 1; i >= 0; i--) {
        for (int j = 0; j < mid - i; j++) {
            cout << " ";
        }
        for (int k = 0; k < 2 * i + 1; k++) {
            cout << "*";
        }
        cout << endl;
    }

    return true;
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    printDiamond(n);

    return 0;
}
