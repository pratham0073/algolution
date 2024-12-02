#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    set<int> orResults;
    
    for (int i = 0; i < N; i++) {
        int currentOr = 0;
        for (int j = i; j < N; j++) {
            currentOr |= A[j];
            orResults.insert(currentOr);
        }
    }
    
    int result = 0;
    for (int value : orResults) {
        result |= value;
    }
    
    cout << result << endl;
    return 0;
}
