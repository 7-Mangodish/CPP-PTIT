#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

bool chk(ll a){
	if(a==0 || a==1) return false;
	if(a==2) return true;
	for(int i=3; i<=sqrt(a); i+=2)
		{
			if(a%i==0) return false;
		}
	return true;
}
int main(){
	int n;
	cin >>n;
	if(chk(n))
		cout <<"YES";
	else
		cout <<"NO";
}
