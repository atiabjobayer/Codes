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
	long long int a,remain=0;

	cin >> a;
	remain = a;

	long long int notes[7]={0};

	// 100
	notes[0] = remain/100;
	remain = remain - 100*notes[0];

	//50
	notes[1] = remain/50;
	remain = remain - 50*notes[1];

	//20
	notes[2] = remain/20;
	remain = remain - 20*notes[2];

	//10
	notes[3] = remain/10;
	remain = remain - 10*notes[3];

	//5
	notes[4] = remain/5;
	remain = remain - 5*notes[4];


	//2
	notes[5] = remain/2;
	remain = remain - 2*notes[5];


	//1
	notes[6] = remain;//floor(remain/1);
	//remain = remain - 1*notes[6];


	cout << notes[0] << " nota(s) de R$ 100,00" << endl;
	cout << notes[1] << " nota(s) de R$ 50,00" << endl;
	cout << notes[2] << " nota(s) de R$ 20,00" << endl;
	cout << notes[3] << " nota(s) de R$ 10,00" << endl;
	cout << notes[4] << " nota(s) de R$ 5,00" << endl;
	cout << notes[5] << " nota(s) de R$ 2,00" << endl;
	cout << notes[6] << " nota(s) de R$ 1,00" << endl;


    return 0;
}




