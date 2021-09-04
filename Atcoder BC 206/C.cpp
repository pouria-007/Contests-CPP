//  MAP 

#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long N;
	cin >> N;
	map <long long int, long long int> MP;

	for (long long unsigned int i = 0; i < N; i++)
	{
		long long int T;
		cin >> T;
		MP.insert({T, MP[T]++});
	}
	
	long long int ans = 0;

	ans =  N * (N-1) / 2;
	
	for (auto im = MP.begin(); im != MP.end(); im++)
	{
		ans -= (*im).second * ((*im).second -1) / 2;
	}
	cout << ans << endl;
}

