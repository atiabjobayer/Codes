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
	string a;
	int t;
	int val = 0;

	cin >> t;

	while(t--){
		cin >> a;
		if((a[0]=='+' && a[1] == '+')||(a[a.size()-1]=='+' && a[a.size()-2] == '+')){
			val++;
		}
		if((a[0]=='-' && a[1] == '-')||(a[a.size()-1]=='-' && a[a.size()-2] == '-')){
			val--;
		}
	}

	cout << val << endl;

    return 0;
}




