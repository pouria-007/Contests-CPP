// DFS

#include <bits/stdc++.h>

using namespace std;

int N, M, ans = 0;
vector <vector<int>> V;
bool temp[2000];

void DFS(int C)
{
	if (temp[C]) return;
	temp[C] = true;
	for (int u=0; u<V[C].size(); u++) DFS(V[C][u]);
}

int main()
{
	cin >> N >> M;
	V.resize(N);	

	for (int i = 0; i < M; i++)
	{
		int A, B;
		cin >> A >> B;
		V[A-1].push_back(B-1);
	}

	for (int i = 0; i < N; i++)
	{
		for (int j=0;j<N;j++) temp[j]=false;
		DFS(i);
		for (int j=0;j<N;j++) if (temp[j]) ans++;
	}

	cout << ans << endl;
}
