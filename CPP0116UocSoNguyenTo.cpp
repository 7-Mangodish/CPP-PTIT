#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

ll gcd(ll a,ll b){
	while(b!=0)
		{
			ll tmp=b;
			b=a%b;
			a=tmp;
		}
	return a;
}

ll lcm(ll a, ll b){
	ll tmp=a*b;
	return tmp/gcd(a,b);
}
int main(){
	int t;
	cin >>t;
	while(t--)
		{
			ll a,b;cin >>a >>b;
			cout <<lcm(a,b) <<" "<<gcd(a,b) <<endl;
		}
}
