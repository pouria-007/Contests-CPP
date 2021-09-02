#include <bits/stdc++.h>

using namespace std;

int main() {
	
	long long N, ans=0;
	cin >> N;
	
	if (N > 999) ans += N - 999;
	if (N > 999999) ans += N - 999999;
	if (N > 999999999) ans += N - 999999999;
	if (N > 999999999999) ans += N - 999999999999;
	if (N > 999999999999999) ans += N - 999999999999999;
	
	cout << ans;
}

