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
	long long int a,b;

	while(scanf("%lld%lld",&a,&b)==2){
		long long int diff = a-b;
		if(diff < 0)
			diff = b-a;

		printf("%lld\n",diff);
	}

    return 0;
}




