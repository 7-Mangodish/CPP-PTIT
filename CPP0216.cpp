#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

ll fb[93];

void sol(ll fb[]){
	fb[0]=0;
	fb[1]=1;
	for(int i=2; i<93; i++)
		{
			fb[i]=fb[i-1]+fb[i-2];
		}
}

bool chk(ll a[],ll x){
	for(int i=0; i<93; i++)
		{
			if(a[i]==x)
				return true;
		}
	return false;
}
int main(){
	int t;
	cin >>t;
	sol(fb);
	while(t--)
		{
			int n;
			cin >>n;
			ll a[n];
			for(ll &x:a)
				cin >>x;
			vector <ll> v;
			for(int i=0; i<n; i++)
				{
					if(chk(fb,a[i]))
						{
							v.push_back(a[i]);
						}
				}
			for(ll x:v)
				cout <<x <<" ";
			cout <<endl;
		}
}
