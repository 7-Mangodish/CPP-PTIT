#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)
//Tinh chat phep chia modulo
//(a+b) mod m=(a mod m + b mod m) mod m
//(a-b) mod m=(a mod m - b mod m) mod m
//(a.b) mod m=( (a mod m).(b mod m))
//(a^b) mod m=(a mod m)^b mod m;

using namespace std;
ll modl(string s, ll m){
	ll tmp=0;
	for(int i=0; i<s.length(); i++)
		{
			tmp=( tmp*10+(s[i]-'0') )%m;
			
		}
	return tmp;
}
// luy thua nhi phan

ll bipow(ll a, ll b){
	if(b==0)
		return 1;
	ll x=bipow(a,b/2);
	if(b%2==1)
		return x*x*a;
	else
		return x*x;
}

int main(){
	int t;
	cin >>t;
	while(t--)
		{
			string s;
			cin >>s;
			ll b,m;
			cin >>b >>m;
			ll tmp=modl(s,m);
//			tmp =bipow(tmp,b);
			cout <<tmp <<endl;
			
		}
}
