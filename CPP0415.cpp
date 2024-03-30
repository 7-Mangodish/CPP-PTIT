#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--)
		{
			int n, m;
			cin >>n >>m;
			set <ll > b;
			set <ll, greater<ll> > a;
			for(int i=0; i<n; i++)
				{
					int tmp; cin >>tmp;
					a.insert(tmp);
				}
			for(int i=0; i<m; i++)
				{
					int tmp; cin >>tmp;
					b.insert(tmp);
					
				}
			set <ll> ::iterator it1,it2;
			it1=a.begin();
			it2=b.begin();
			ll sum=(*it1)*(*it2) ;
			cout <<sum <<endl;
		}
}
