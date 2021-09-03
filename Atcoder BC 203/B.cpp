#include <bits/stdc++.h>

using namespace std;

int main()
{
	int ans = 0;
	int N, K;
	cin >> N >> K;

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= K; j++)
		{
			ans += i * 100;
			ans += j;	
		}
	}	

	cout << ans << endl;
}
