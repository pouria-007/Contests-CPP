#include <bits/stdc++.h>
#include <queue>
#include <string>

using namespace std;

int main() {
	
	deque<char> D;
	bool R = false;
	string S;
	cin >> S;
	
	for (long long unsigned int i = 0; i < 10; i++) {
		if (S.length() == 1) {R = true;}
		for (int j = 0; j < round(S.length() / 2); j++){
			if (S[j] != S[S.length() - 1 - j]) {
				break;
			}
			if (j == round(S.length() / 2) - 1) {R = true;}
		}
		
		S.insert(0, 1, '0');
		if (R) {cout << "Yes"; break;}
	}
	
	if (!R) {cout << "No";}
	
}
