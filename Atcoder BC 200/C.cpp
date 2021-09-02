#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
	
	//
	// PAY ATTENTION TO TYPES //
	//
	long long int ans = 0;
	int N;
	cin >> N;
	vector<long long int> B(200);
	// Reminders should be the same
	// Ai % 200 == Aj % 200
	for (int i = 0; i < N; i++) {
		long long int t;
		cin >> t;
		B[t % 200] += 1;
	}
	
	// How many pair you can choose ?
	for (int i = 0; i < 200; i++) {
		ans += (B[i] * (B[i] - 1)) / 2;
	}
	
	cout << ans;
}
