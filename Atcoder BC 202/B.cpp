#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
	
	string S;
	getline(cin, S);
	
	for (long long unsigned int i = 0; i < S.length(); i++) {
		
		if (S[S.length() - i - 1] == '9'){
			S[S.length() - i - 1] = '6';
		}
		else if (S[S.length() - i - 1] == '6'){
			S[S.length() - i - 1] = '9';
		}
		cout << S[S.length() - i - 1];

	}
	
}
		

