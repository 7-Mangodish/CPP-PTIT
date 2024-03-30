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
int main(){
	int t;
	cin >>t;
	while(t--)
		{
			ll a,x,y;
			cin >>a >>x >>y;
			ll tmp=gcd(x,y);
			for(int i=0; i<tmp; i++)
				cout <<a;
			cout <<endl;
		}
}
