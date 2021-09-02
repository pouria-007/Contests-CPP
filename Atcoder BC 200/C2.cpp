//Still remembered
//
#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int n;
	cin >> n;
	
	vector<long long> v(201);
	
	for (int i = 0; i < n; i++) {
		
		long long a;
		cin >> a;
		
		v[a%200] += 1;
		
	}
	
	long long ans = 0;
	
	for (int i = 0; i < 201; i++) {
		long long temp = v[i] * (v[i] - 1) / 2;
		ans += temp; 
	} 
	
	cout << ans;
}
