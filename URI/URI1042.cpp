/***************************************************************************
** Atiab Jobayer							  							  **
** CodeMarshal >> Toph >> CodeForces >> Hust >> URI >> UVa = atiabjobayer **
** Amtali AK Model Pilot High School									  **
** Amtali, Barguna.			  					  						  **
** Founder & COO							  							  **
** CoderzWar Online Judge (http://coderzwar.com)			  			  **
****************************************************************************
***************************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector <int> v,v2;

	for(int i=0;i<3;i++){
		int n;
		cin >> n;
		v.push_back(n);
	}
	v2 = v;
	sort(v.begin(),v.end());

	for(int i=0;i<3;i++){
		cout << v[i] << endl;
	}
	cout << "\n";
	for(int i=0;i<3;i++){
		cout << v2[i] << endl;
	}

    return 0;
}




