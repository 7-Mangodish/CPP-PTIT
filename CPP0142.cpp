#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

bool snt(int n){
	if(n==0 || n==1)
		return false;
	for(int i=2; i<=sqrt(n); i++)
		{
			if(n%i==0)
				return false;
		}
	return true;
}

int gcd(int a,  int b){
	while(b!=0)
		{
			int tmp=a;
			a=b;
			b=tmp%b;
		}
	return a;
}
int main(){
	int t;
	cin >>t;
	while(t--)
		{
			int n;
			cin >>n;
			int cnt=0;
			for(int i=1; i<n; i++)
				{
					if(gcd(i,n)==1)
						++cnt;
				}
			if(snt(cnt))
				cout <<1 <<endl;
			else
				cout <<0 <<endl;
		}
}
