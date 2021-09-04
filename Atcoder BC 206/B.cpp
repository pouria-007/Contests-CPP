#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int N, T = 0, I = 0;
	cin >> N;
	
	while (T < N)
	{
		I++;
		T += I;
	}

	cout << I << endl;
}
