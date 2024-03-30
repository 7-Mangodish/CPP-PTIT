#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;
//bool chk(ll n){
//	if(sqrt(n)==(ll)sqrt(n))
//	return true;
//	return false;
//}
//
bool chk_nt(ll n){
	for(ll i=2; i<=sqrt(n); i++)
		{
			if(n%i==0)
				return false;
		}
	return true;
}
int main(){
	int t;
	cin >>t;
	while(t--)
		{
			ll n;
			cin >>n;
			int cnt=0;
			for(int i=2; i<=(sqrt(n)); i++)
				{
					if(chk_nt(i))
						++cnt;
						
				}
			cout <<cnt <<endl;
		}
}
