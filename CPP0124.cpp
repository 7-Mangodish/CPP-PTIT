#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

void PT (ll a){
	int cnt=0;
	for(int i=2; i<=sqrt(a); i++)
		{
			while(a%i==0)
				{
					++cnt;
					a/=i;
				}
			if(cnt !=0)
				{
					cout <<i <<" " <<cnt <<endl;
					cnt =0;
				}
		}
	if(a!=1)
		cout <<a <<" " <<1;
}

int main(){
	ll n;
	cin >>n;
	PT(n);
}
