#include <bits/stdc++.h>
#include <vector>

using namespace std;

int N, M;
int ans;
vector<pair<int, int>> V;

void Pushback() {
	
	for (int i = 0; i < M; i++) {
		//for (int j = 0; j < M; j++) {
			if (V[i].second == V[i+1].first && V[i].first != V[i + 1].second){
				V.push_back({V[i].first, V[i + 1].second});
				//cout << V[i].first << V[i].second << "\n";
				//Pushback();
			}
		//}
	}	
}

int main() {
	
	cin >> N >> M;
	
	for (int i = 0; i < M; i++) {		
		int A, B;
		cin >> A >> B;
		V.push_back({A, B});		
	}
	sort(V.begin(), V.end());
	
	Pushback();
	ans = N + V.size();
	cout << ans;
}



