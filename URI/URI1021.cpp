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
	double money;

	int notes[6]={100,50,20,10,5,2};
	double remain;

	cin >> money;

	remain = money;

	int note_need[6];

	for(int i=0;i<6;i++){
		note_need[i] = remain/notes[i];
		remain = remain - note_need[i]*notes[i];
	}

	printf("NOTAS:\n");
	for(int i=0;i<6;i++){
		//5 nota(s) de R$ 100.00
		printf("%d nota(s) de R$ %d.00\n",note_need[i],notes[i]);
	}

	double coins[6] = {1.00,0.50,0.25,0.10,0.05,0.01};
	int  coin_need[5];

	for(int i=0;i<6;i++){
		coin_need[i] = remain/coins[i];
		remain = remain - coin_need[i]*coins[i];
	}
	printf("MOEDAS:\n");
	for(int i=0;i<6;i++){
		//1 moeda(s) de R$ 1.00
		printf("%d moeda(s) de R$ %0.2lf\n",coin_need[i],coins[i]);
	}

    return 0;
}




