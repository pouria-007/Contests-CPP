#include <bits/stdc++.h>

using namespace std;

int main() 
{
	float N;
	cin >> N;

	N = floor(N * 1.08);

	if (N < 206) cout << "Yay!" << endl;
	else if (N == 206) cout << "so-so" << endl;
	else cout << ":(" << endl;
}
