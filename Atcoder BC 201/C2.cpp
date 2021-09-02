//Good U made time complexity less
//Idea was Ok
//But Ugly 
// 50 min!!!
#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int o = 0;
	int ans = 0;
	
	string S;
	cin >> S;

	vector<int> Sn(10);
	vector<int> Tov = {80, 80, 80, 80};

	for (int i = 0; i < 10; i++) {
		if (S[i] == 'o') {Sn[i] = 2; o++;}
		if (S[i] == '?') Sn[i] = 1;
		if (S[i] == 'x') Sn[i] = 0;
	}
	
	for (int i = 0; i < 10000; i++) {
		bool isX = false;
		int x = i;
		int tempO = 0;

		for (int j = 0; j < 4; j++) {
			if (Sn[x%10] == 2) {
				tempO++; Sn[x%10]++; Tov[j] = x%10;
			}
			if (Sn[x%10] == 0) {
				isX = true;
				break; 
			}
			x /= 10;
		}
		
		for (int j = 0; j < 4; j++) {
			if (Tov[j] < 20) {Sn[Tov[j]] = 2; Tov[j] = 80;}
		}
		
		if (tempO >= o && !isX) ans++;
	}
	
	cout << ans;
}
