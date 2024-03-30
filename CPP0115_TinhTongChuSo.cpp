#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

void Simp(ll a){
	ll tmp=0;
	while(a>0)
		{
			tmp+=a%10;
			a/=10;
		}
	if(tmp >=10)
		Simp(tmp);
	else
		cout <<tmp<<endl;
}

int main(){
	int t;
	cin >>t;
	while(t--)
		{
			ll m;
			cin >>m;
			Simp(m);
			
		}
}
