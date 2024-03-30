#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;
//luy thua nhi phan
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
	ll mod=bipow(10,9)+7;
	while(t--)
		{
			int n,x;
			cin >>n >>x;
			int a[n];
			for(int i=n-1; i>=0; i--)
				cin >>a[i];
			ll sum=0;
			for(int i=0; i<n; i++)
				{
					sum+=a[i]*bipow(x,i);
				}
			cout <<ans <<endl;
		}
}
