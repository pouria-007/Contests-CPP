//Mission Failed
//We will get them next time
//Going back to the camp
//
#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int N;
	cin >> N;
	
	vector<int> T(100001);
	vector<int> A(N), B(N), C(N);
	
	for (int i = 0; i < N; i++) {
	
		int temp;
		cin >> temp;

		A[i] = temp;
		
	}
	for (int i = 0; i < N; i++) {
	
		int temp;
		cin >> temp;
		
		B[i] = temp;
		
	}
	for (int i = 0; i < N; i++) {
	
		int temp;
		cin >> temp;
		T[B[temp - 1]] += 1;
		
	}
	
	long long ans = 0;
	
	for (int i = 0; i < N; i++) {
		ans += T[A[i]];
	}
	
	cout << ans;
}
