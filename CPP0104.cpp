#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;
ll GT(ll a){
	if(a==1) return a;
	return a*GT(a-1);
}

int main(){
	int n;
	cin >>n;
	ll S=0;
	for(int i=n; i>=1; i--)
		{
			S+=GT(i);
		}
	cout <<S;
}
