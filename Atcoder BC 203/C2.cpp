#include <bits/stdc++.h>

using namespace std;
#define llui long long unsigned int

int main() {
	
	int N;
	long long K, A, B;
	vector<pair<long long, long long>> V;
	
	cin >> N >> K;
	
	for (int i = 0; i < N; i++) {
		cin >> A >> B;
		V.push_back({A, B});
	}
	
	sort(V.begin(), V.end());
	
	for (llui i = 0; i < V.size(); i++) {
		if (V[i].first <= K) K += V[i].second;
	}
	
	cout << K;
}
