#include <bits/stdc++.h>
#include <string>
#include <queue>

using namespace std;

int main() {
	
	int N, Q;
	string S;
	deque<char> D;
	cin >> N >> S >> Q;
	
	for (int i = 0; i < 2 * N; i++) {
		D.push_back(S[i]);
	}
	
	bool R = false;
	for (int i = 0; i < Q; i++) {
		int T, A, B;
		char C;
		cin >> T >> A >> B;
		
		if (T == 2) {
			if (R) {R = false;}
			else if (!R) {R = true;}
		}
		if (T == 1) {
			if (R) {
				if (A <= N) {A += N;}
				else if (A > N) {A -= N;}
				
				if (B <= N) {B += N;}
				else if (B > N) {B -= N;}
				
				C = D[B - 1];
				D[B - 1] = D[A - 1];
				D[A - 1] = C;
			}
			else if (!R) {
				C = D[B - 1];
				D[B - 1] = D[A - 1];
				D[A - 1] = C;
			}
		} 
	}
	
	if (R) {
		for (int i = 0; i < N; i++) {
			D.push_back(D[0]);
			D.pop_front();
		}
	}
	
	string ans;
	for (int i = 0; i < 2 * N; i++) {
		ans += D[i];
	}
	
	cout << ans;
}
