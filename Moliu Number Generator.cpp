//https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2614
//11567 - Moliu Number Generator

#include<bits/stdc++.h>
using namespace std;

int main()
{	
	long long int num , solution = 0;
	while(cin >> num)
	{
		solution = 0;
		while(num != 0)
		{
			solution ++;
			if(num % 2 != 0){
				if (((num + 1) / 2) % 2 == 0 && num != 3)
					num ++;
				else 
					num --;
			}else
				num /= 2;
		}
		cout << solution <<endl;
	}
}
