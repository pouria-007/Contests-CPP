//Pay more attention to Indexes dude
//WTF ! what a waste ...
//
#include <bits/stdc++.h>

using namespace std;
typedef long long unsigned int llui;

int main() {
	
	int N, Q;
	string S;
	bool isT = false;
	cin >> N >> S >> Q;
	
	deque<char> D;
	
	for (llui i = 0; i < S.size(); i++) {
		D.push_back(S[i]);
	}
	
	for (int i = 0; i < Q; i++) {
		int T, A, B;
		cin >> T >> A >> B;
		
		if (T == 2 && !isT) isT = true;
		else if (T == 2 && isT) isT = false;
		
		if (T==1 && !isT) {
			char temp = D[A-1];
			D[A-1] = D[B-1];
			D[B-1] = temp;
		}
		else if (T==1 && isT) {
			if(A <= N) A = A + N;
			else A = A - N;
			
			if(B <= N) B = B + N;
			else B = B - N;
			
			char temp = D[A-1];
			D[A-1] = D[B-1];
			D[B-1] = temp;
		}
	}
	
	if (isT) {
		for (int i = 0; i < N; i++) {
			D.push_front(D.back());
			D.pop_back();
		}
	}
	
	for (llui i = 0; i < D.size(); i++) {
		cout << D[i];
	}
}
