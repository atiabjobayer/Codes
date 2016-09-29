#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int m,n,a;

	cin >> m >> n >> a;

	int t1 = (m*n) / (a*a);
	int t2 = (m*n) % (a*a);

	int t3 = t2/a;

	cout << t1+t3 << endl;

	return 0;
}
