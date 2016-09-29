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
double sq(double a)
{
	double x = a*a;
	return x;
}
int main()
{
	double a,b,c;

	cin >> a >> b >> c;

	if(a >= b+c)
		printf("NAO FORMA TRIANGULO\n");
	if(sq(a) == sq(b) + sq(c))
		printf("TRIANGULO RECTANGULO\n");
	if(sq(a) > sq(b) + sq(c))
		printf("TRIANGULO OBSTANGULO\n");
	if(sq(a) < sq(b) + sq(c))
		printf("TRIANGULO ACUTANGULO\n");
	if(a==b && b==c)
		printf("TRIANGULO EQUILATERO\n");
	if((a==b && b!=c) || (b==c && c!=a) || (a==c && b!=a))
		printf("TRIANGULO ISOSCELES\n");

    return 0;
}




