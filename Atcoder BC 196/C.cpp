#include <bits/stdc++.h>

using namespace std;

int main() {
	
	long long N, ans=0, D=0, temp;
	cin >> N;
	
	temp = N;
	while (temp != 0) {
		temp /= 10;
		D++;
	}
	
	for (long long i=1; i < pow(10, D/2); i++) {
		long long o = i*pow(10, to_string(i).size()) + i;
		if (o <= N) ans++;
		else break;
	}
	
	cout << ans;
}


