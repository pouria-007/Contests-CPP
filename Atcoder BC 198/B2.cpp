//This is easy
//You wrere tired back then
//
#include <bits/stdc++.h> 

using namespace std;
typedef long long unsigned int llui;

int main() {
	
	string S;
	bool ans = false;
	
	cin >> S;
	
	for (int i = 0; i < 10; i++) {
		bool R = true;
		for (llui j = 0; j < S.size(); j++) {
			if (S[j] != S[S.size()-j-1]){ 
				R = false; break;
			}
		}
		if (R) {ans = true; break;}
		S.insert (0, 1, '0');
	}
	
	if (ans) cout << "Yes";
	else cout << "No";
}
