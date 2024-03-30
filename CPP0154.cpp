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
			ll n,k;
			cin >>n >>k;
			ll sum=0;
			for(int i=1; i<=n; i++)
				{
					sum+=i%k	;
				}
			cout <<sum <<endl;
		}
}
