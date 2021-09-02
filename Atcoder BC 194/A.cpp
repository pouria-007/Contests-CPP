#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    if (A+B >= 15 && B >= 8) {
        cout << 1;
    }
    else if (A+B >= 10 && B >= 3)
    {
        cout << 2;
    }
    else if (A+B >= 3)
    {
        cout << 3;
    }
    else {
        cout << 4;
    }
}