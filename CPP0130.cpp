#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

//bool chk(ll n){
//	if(n==0 || n==1) return false;
//	for(int i=2; i<=sqrt(n); i++)
//		{
//			if(n%i==0)
//				return false;
//		}
//	return true;
//}

void solve(ll n){
	while(n%2==0)
		{
			cout <<2 <<" ";
			n/=2;
		}
	for(int i=3; i<=sqrt(n); i+=2)
		{
//			if(chk(i))
//				{
					while(n%i==0)
						{
							cout <<i <<" ";
							n/=i;
						}
//				}
			if(n==1) cout <<endl;
		}
	if(n!=1) cout <<n <<endl;
}
int main(){
	int t;
	cin >>t;
	while(t--)
		{
			ll n; cin >>n;
			solve(n);
		}
}
