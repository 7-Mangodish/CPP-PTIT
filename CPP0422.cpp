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
			ll n;
			cin >>n;
			vector <ll> s1,
			s2;
			forl(i,0,n)
				{
					ll tmp;
					cin >>tmp;
					if(tmp==0)
						s2.push_back(tmp);
					else
						s1.push_back(tmp);
				}
			for(ll x:s1)
				cout <<x <<" ";
			for(ll x:s2)
				cout <<x <<" ";
			cout <<endl;
		}
}
