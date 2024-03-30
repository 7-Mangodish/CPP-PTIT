#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

ll GCD(ll a, ll b ){
	while(b!=0)
		{
			ll tmp=b;
			b=a%b;
			a=tmp;
		}
	return a;
}

ll LCM(ll a, ll b){
	ll tmp=a*b;
	return tmp/GCD(a,b);
}

int main(){
	int t;
	cin >>t;
	while(t--)
		{
			int n;
			cin >>n;
			ll tmp=1;
			for(int i=2; i<=n; i++)
				{
					tmp=LCM(tmp,i);
				}
			cout <<tmp <<endl;
		}
}
