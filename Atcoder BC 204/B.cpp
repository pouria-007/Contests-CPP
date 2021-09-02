#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int N;
	int ans = 0;
	cin >> N;
	
	for (int i = 0; i < N; i++) {
		
		int T;
		cin >> T;
		
		if (T > 10) {
			ans += T - 10;
		}
		
	}
	
	cout << ans;
}


