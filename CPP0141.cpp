#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;
ll fb[100];

void sol(ll a[]){
	a[0]=0;
	a[1]=1;
	for(int i=2; i<=92; i++)
		{
			a[i]=a[i-1]+a[i-2];
		}
}

int main(){
	int t;
	cin >>t;
	sol(fb);
	while(t--)
		{
			ll n;
			cin >>n;
			int chk=0;
			for(int i=0; i<=92; i++)
				{
					if(n==fb[i])
						{
							chk=1;
							break;
						}
				}
			if(chk==1)
				cout <<"YES\n";
			else
				cout <<"NO\n";
		}
}
