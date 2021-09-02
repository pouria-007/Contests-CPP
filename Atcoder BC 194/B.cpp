//Nani the fuck ?!
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<pair<int, int>> Va(N), Vb(N);

    for (int i = 0; i < N; i++)
    {
        int A, B;
        cin >> A >> B;

        Va[i] = {A, i+1};
        Vb[i] = {B, i+1};
    }
    
    sort(Va.begin(), Va.end());
    sort(Vb.begin(), Vb.end());

    int tempB = 0;

    if (Va[0].second == Vb[0].second)
    {
        if (Vb[0].first + Va[0].first > Vb[1].first)
        {
            tempB++;
        }
        else {
            Va[0].first += Vb[0].first;
        }
    }
    
    cout << max(Va[0].first, Vb[tempB].first);
}