#include <bits/stdc++.h>

using namespace std;

int main() {
	
	double A, B, C;
	cin >> A >> B >> C;
	
	if ((pow(A, 2) + pow(B, 2.0)) < pow(C, 2)) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
	
}
