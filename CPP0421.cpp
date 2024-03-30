#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

void sol(ll a[],int n,set<ll> s){
	for(int i=0; i<n; i++)
		{
			if(s.find(i)!=s.end())
				a[i]=i;
			else
				a[i]=-1;
		}
}
int main(){
	int t;
	cin >>t;
	while(t--)
		{
			int n; cin >>n;
			set <ll> s;
			for(int i=0; i<n; i++)
				{
					ll tmp;
					cin >>tmp;
					s.insert(tmp);
				}
			ll a[n];
			sol(a,n,s);
			for(ll x:a)
				cout <<x <<" ";
			cout <<endl;
		}
}
