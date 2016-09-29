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
	int temp = 1;
	cin >> a;

	for(int i=0;i<a.size()-1;i++){
		if(a[i] == a[i+1]){
			temp++;
		}
		else{
			if(temp >=7){

			}
			else{
				temp = 1;
			}
			continue;
		}
	}

	// 00111111100

	if(temp >=7){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}

    return 0;
}
