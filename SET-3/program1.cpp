#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

bool is_square_free(int d) {
    vector<int> squares = {4, 9, 16, 25, 36, 49, 64, 81, 100, 121, 144, 169, 196};
    for (int sq : squares) {
        if (d % sq == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int N;
    cin >> N;
    int count = 0;
    for (int i = 1; i <= sqrt(N); i++) {
        if (N % i == 0) {
            if (i != 1 && is_square_free(i)) count++;
            if (i != N / i && N / i != 1 && is_square_free(N / i)) count++;
        }
    }
    cout << count << endl;
    return 0;
}



