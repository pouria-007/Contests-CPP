//Dude pay attention more
//Fucking think 
//
#include <bits/stdc++.h>

using namespace std;
typedef long long unsigned int llui;

int main() {
	
	int N;
	cin >> N;
	
	vector<int> A(N), B(N), V(100001);
	
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
		
		V[B[temp - 1]] += 1;
	}
	
	long long ans = 0;
	for (llui i = 0; i < A.size(); i++) {
		ans += V[A[i]];
	}
	
	cout << ans;
}
