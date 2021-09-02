#include <bits/stdc++.h>
#include <vector>
#include <string>

using namespace std;

int main() {
	
	int N;
	cin >> N;
	
	vector<pair<int, string>> V(N);
	
	for (int i = 0; i < N; i++) {
		
		string S;
		int T;
		cin >> S >> T;
		
		V[i] = {T, S};
		
	}
	
	sort(V.begin(), V.end());
	
	cout << V[N - 2].second;
	
}
