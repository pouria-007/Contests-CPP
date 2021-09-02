#include <bits/stdc++.h>

using namespace std;

int main() {
	
	long long A, B, C;
	cin >> A >> B >> C;
	
	if (A == 0 && B == 0) cout << "=";
	else if (abs(A) > abs(B)) {
		if (C%2 != 0 && B >= 0 && A <= 0) cout << "<";
		else cout << ">";
	}
	else if (abs(A) < abs(B)) {
		if (C%2 != 0 && B <= 0 && A >= 0) cout << ">";
		else cout << "<";
	}
	else if (abs(A) == abs(B)) {
		if (C%2 != 0) {
			if (A<=0 && B>=0) cout << "<";
			else if (A>=0 && B<=0) cout << ">";
			else cout << "=";
		}
		else cout << "=";
	}
	
}
