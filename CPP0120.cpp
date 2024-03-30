#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

ll gcd(ll a, ll b){
	while(b!=0)
		{
			ll tmp=a;
			a=b;
			b=tmp%b;
		}
	return a;
}
ll lcm(ll a, ll b){
	ll tmp=a*b;
	return tmp/gcd(a,b);
}

int count(ll m, ll n,ll x){
	int cnt=0;
	for(ll i=m; i<=n; i++)
		{
			if(i%x==0)
				cnt++;
		}
	return cnt;
}
int main(){
	int t;
	cin >>t;
	while(t--)
		{
			ll m,n,a,b;
			cin >>m >>n >>a >>b;
			int cnt=0;
			cout <<count(m,n,a)+count(m,n,b)-count(m,n,lcm(a,b)) <<endl;
//			for(int i=m; i<=n; i++)
//				{
//					if(i%(a*b)==0)
//						++cnt;
//				}
//			cout <<cnt <<endl;
		}
}
