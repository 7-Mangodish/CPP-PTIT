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
			ll a,b ,c;
			cin >>a >>b >>c;
			ll tmp1=a%c,
			tmp2=b%c;
			ll tmp=tmp1*tmp2,
			kq=tmp%c;
			cout <<kq <<endl;
		}
}
