#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
	
	int A, B, C;
	cin >> A >> B >> C;
	
	vector<int> V(3);
	
	V[0] = A;
	V[1] = B;
	V[2] = C;
	
	sort(V.begin(), V.end());
	
	if (V[2] - V[1] == V[1] - V[0]) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
	
}
