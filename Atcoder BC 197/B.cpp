#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int H, W, X, Y;
	cin >> H >> W >> X >> Y;
	
	vector<vector<bool>> V(H);
	
	for (int i = 0; i<H; i++) {
		string S;
		cin >> S;
		
		for (int j = 0; j<W; j++) {
			bool temp = false;
			if(S[j] == '#') temp = true;
			V[i].push_back(temp);
		}
	}
	
	Y--;
	X--;
	int ans = 0;
	
	if (!V[X][Y]) ans++;
	
	for (int i = Y-1; i >= 0; i--) {
		if(V[X][i]) break;
		else ans++;
	}
	for (int i = Y+1; i < W; i++) {
		if(V[X][i]) break;
		else ans++;
	}
	
	for (int i = X+1; i < H; i++) {
		if(V[i][Y]) break;
		else ans++;
	}
	for (int i = X-1; i >= 0; i--) {
		if(V[i][Y]) break;
		else ans++;
	}

	cout << ans;
}

