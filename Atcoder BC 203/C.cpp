#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
	
	long long int K, x, y;
	int N;
	cin >> N >> K;
	
	vector<pair<long long int, long long int>> Vyen;
	
	for (int i = 0; i < N; i++) {
				
		cin >> x >> y;		
		Vyen.push_back({x, y});
		
		} 
		
	sort(Vyen.begin(), Vyen.end());
	
	for (int i = 0; i < N; i++) {
		
		if(Vyen[i].first > K) {
			break;
			}
		else {
			K += Vyen[i].second;
			}
		}
		
	cout << K;
	}
