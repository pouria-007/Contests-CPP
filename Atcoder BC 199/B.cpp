#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
	
	int N;
	cin >> N;
	
	vector<int> V(1001), A(N), B(N);
	
	for (int i = 0; i < N; i++) {
		int T;
		cin >> T;
		A[i] = T;
	}
	for (int i = 0; i < N; i++) {
		int T;
		cin >> T;
		B[i] = T;
	}
	
	for (int i = 0; i < N; i++) {
		
		for (int j = 0; j < A[i]; j++) {
			V[j] = 1;
		} 
		for (int j = 1000; j > B[i]; j--) {
			V[j] = 1;
		}
	}
	
	int ans = 0;
	for (int i = 0; i < 1001; i++) {
		if (V[i] == 0) {ans++;}
	}
	
	cout << ans;
}
