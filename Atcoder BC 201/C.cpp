#include <bits/stdc++.h>
#include <string>
#include <vector>

using namespace std;

int main() {
	
	string S;
	
	cin >> S;
	int ans = 0;
	for (int i = 0; i <= 9999; i++) {
		
		// Which numbers im using :::
		vector<bool> V(10);
		int T = i;
		for (int j = 0; j < 4; j++) {
			V[T%10] = true;
			T /= 10;
		}
		
		// Control numbers with S
		int flag = 1;
		for (int p = 0; p < 10; p++) {
			if (S[p] == 'o' && !V[p]) {flag = 0;}
			if (S[p] == 'x' && V[p]) {flag = 0;}
		}
		
		ans += flag;
	}
	
	cout << ans;	
}
