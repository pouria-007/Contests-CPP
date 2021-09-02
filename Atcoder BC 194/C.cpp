#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> V(N);

    for (int i=0; i < N; i++) {
        int A;
        cin >> A;

        V[i] = A;
    }
}