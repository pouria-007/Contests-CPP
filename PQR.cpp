#include<bits/stdc++.h>
using namespace std;

void logicval(int p, int q, int r)
{
	cout << p << " ";
	cout << q << " ";
	cout << r << "    ";
	cout << (!((p || q) && (!(r || q) || q)) || p) << endl;
}
int main()
{
	cout << "p " << "q " << "r " << " main" << endl;
	logicval (0, 0, 0);
	logicval (0, 0, 1);
	logicval (0, 1, 0);
	logicval (0, 1, 1);
	logicval (1, 0, 0);
	logicval (1, 0, 1);
	logicval (1, 1, 0);
	logicval (1, 1, 1);
	return 0;
}
