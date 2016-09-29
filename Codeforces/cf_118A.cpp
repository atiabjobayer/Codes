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
	vector <char> v;
	int c=0;
	cin >> a;

	for(int i=0;i<a.size();i++){
		if(a[i] !='A' && a[i] !='E' && a[i] !='I' && a[i] !='O' && a[i] !='U' && a[i] !='Y'){
			if(a[i] !='a' && a[i] !='e' && a[i] !='i' && a[i] !='o' && a[i] !='u' && a[i] !='y'){
				c++;
				if(a[i]>='A' && a[i] <= 'Z'){
					a[i] = a[i] +32;
				}
				v.push_back(a[i]);
			}
		}
	}

	for(int i=0;i<v.size();i++){
		cout << "." << v[i];
	}
	cout << endl;



    return 0;
}




