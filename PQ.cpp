#include<bits/stdc++.h>
using namespace std;

void logicval(int p, int q)
{
	cout << p << " ";
	cout << q << "    ";
	cout << 
// Input

(!(p && q) != !(!p || !q))	

	<< endl;
}
int main()
{
	cout << "p " << "q " << " main" << endl;
	logicval (0, 0);
	logicval (0, 1);
	logicval (1, 0);
	logicval (1, 1);
	return 0;
}
