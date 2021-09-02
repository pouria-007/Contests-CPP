#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int N;
	cin >> N;
	bool R = false;
	
	vector<bool> V(1001);
	
	for (int i=0;i<1001;i++) V[i] = false;
	
	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		
		if (V[temp]) {cout << "No"; R = true; break;}
		else V[temp] = true;
	}
	if (!R) cout << "Yes";
}
