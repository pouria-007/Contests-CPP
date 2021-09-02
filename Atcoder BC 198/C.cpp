//Good job
//almost got the answer 
//just little mistake
//
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	
	long long R, X, Y, ans;
	cin >> R >> X >> Y;
	
	double temp = sqrt(pow(X, 2) + pow(Y, 2));
	
	ans = temp / R;
	if ((temp/R) == ans) ans--;
	//Think man Think
	else if (temp <= R+R) ans = 1;
	cout << ans + 1;
}
