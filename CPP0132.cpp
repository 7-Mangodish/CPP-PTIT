#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

ll find(ll n){
	ll res=1;
	for(int i=2; i<=sqrt(n); i++)
		{
			while(n%i==0)
				{
					res=i;
					n/=i;
				}
		}
	if(n>1)
		return n;
	else
		{
			return res;
		}
}


int main(){
	int t;
	cin >>t;
	while(t--)
		{
			ll n; cin >>n;
			cout <<find(n) <<endl;
		}
}
