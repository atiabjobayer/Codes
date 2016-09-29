/***************************************************************************
** Bismillahir Rahmanir Rahim                                             **
** Atiab Jobayer                                                          **
** CodeMarshal >> Toph >> CodeForces >> Hust >> URI >> UVa = atiabjobayer **
** Amtali AK Model Pilot High School                                      **
** Amtali, Barguna.                                                       **
** Founder & COO                                                          **
** CoderzWar Online Judge (http://coderzwar.com)                          **
****************************************************************************
***************************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,x=0;

	cin >> t;

	while(t--){
		int a,b,c;
		cin >> a >> b >> c;
		if(a+b+c >= 2)
			x++;
	}

	cout << x << endl;

    return 0;
}




