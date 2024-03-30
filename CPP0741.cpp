#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

int main(){
	ll t;
	cin >>t;
	while(t--)
		{
			ll x,y,p;
			cin >>x >>y >>p;
			ll res=1;
			for(int i=1; i<=y; i++)
				{
					res*=x;
					res%=p;
				}
			cout <<res <<endl;
		}
}
