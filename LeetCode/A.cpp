#include <bits/stdc++.h>

using namespace std;

int main() {
	
	double X, Y, Z;
	cin >> X >> Y >> Z;
	
	double G = Y * Z / X;
	
	if ((int)G == G) cout << G - 1;
	else cout << (int)G; 
}
