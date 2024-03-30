#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

int chia(int a, int m){
	for(int i=1; i<m; i++)
				{
					if((a*i)%m==1)
						{
							return i;
						}
				}
	return -1;
}

int main(){
	int t;
	cin >>t;
	while(t--)
		{
			int a,m;
			cin >>a >>m;
			cout <<chia(a,m) <<endl;
		}
}
