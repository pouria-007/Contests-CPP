#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
	
	int N;
	cin >> N;
	
	int A[N];
	int B[N];
	int C[N];
	vector<int> BCj(N);
	
	for (int i = 0; i < N; i++) {
		
		int tmp;
		cin >> tmp;
		A[i] = tmp;
		
	}
	for (int i = 0; i < N; i++) {
		
		int tmp;
		cin >> tmp;
		B[i] = tmp;
		
	}
	for (int i = 0; i < N; i++) {
		
		int tmp;
		cin >> tmp;
		C[i] = tmp;
		
	}
	for (int i = 0; i < N; i++) {

		BCj[B[C[i] - 1]] += 1;
		
	} 
	long long ans = 0;
	for (int i = 0; i < N; i++) {
		ans += BCj[A[i]];
	}
	
	cout << ans;
}
