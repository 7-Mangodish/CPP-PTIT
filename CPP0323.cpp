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
			string s;
			cin >>s;
			ll k;
			cin >>k;
			ll tmp=0;
			for(int i=0; i<s.length(); i++)
				{
					tmp=( tmp*10+(s[i]-'0') )%k;
				}
			cout <<tmp <<endl;
		}
}
