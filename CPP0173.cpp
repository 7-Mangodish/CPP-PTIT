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

ll lcm(ll a, ll b){
	ll tmp=a*b;
	return tmp/gcd(a,b);
}

int main(){
	int t;
	cin >>t;
	while(t--)
		{
			ll x,y,z,n;
			cin >>x >>y >>z >>n;
			ll tmp=lcm(lcm(x,y), z);
			if(tmp > (pow(10,n)-1) )
				cout <<-1 <<endl;
			else
				{
					ll min_m=pow(10,n-1)/tmp;
					while(min_m*tmp <pow(10,n-1))
						{
							++min_m;
						} 
					cout <<min_m*tmp <<endl;
				}
			
		}
}
