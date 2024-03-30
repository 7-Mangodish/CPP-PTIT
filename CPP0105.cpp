#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

bool chk(string s){
	for(int i=0; i<s.length(); i++)
		if(s[i] !='8' &&s[i] !='6' && s[i] !='0')
			return false;
	return true;
}
int main(){
	int t;
	cin >>t;
	while(t--)
		{
			string s;
			cin >>s;
			if(chk(s))
				cout <<"YES\n";
			else
				cout <<"NO\n";
				
		}
}
