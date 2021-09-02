#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int N;
	cin >> N;
	
	if (N % 10 == 0) {N -= 100;}
	N /= 100;
	cout << N + 1;
	
}
