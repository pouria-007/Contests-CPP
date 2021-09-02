#include <bits/stdc++.h>

using namespace std;

int main() {
	
	double A, B, W;
	cin >> A >> B >> W;
	
	W *= 1000;
	
	double min, max;
	
	max = floor(W/A);
	min = ceil(W/B);
	
	if (min > max) {
		cout << "UNSATISFIABLE";
	} 
	else cout << (int)min << " " << (int)max;
	
}

