#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int A, B, C;
	cin >> A >> B;
	
	if (A == B) {C = A;}
	else {
		if (A + B == 1) {C = 2;}
		if (A + B == 2) {C = 1;}
		if (A + B == 3) {C = 0;}
	}
	
	cout << C;
}

