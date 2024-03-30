#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

bool chk_inc(string s){
	char min=s[0];
	for(int i=1; i<s.length(); i++)
		{
			if(s[i]=='.')
				continue;
			if(s[i]<=min)
				return false;			
			min=s[i];
		}
	return true;
}

bool chk_same(string s){
	for(int i=0; i<2; i++)
		{
			if(s[i]!=s[i+1])
				return false;
		}
	if(s[4] !=s[5])
		return false;
	return true;
}

bool chk_r(string s){
	for(int i=0; i<s.length(); i++)
		{
			if(s[i]=='.')
				continue;
			if(s[i]!='6' && s[i]!='8')
				return false;
		}
	return true;
}
int main(){
	int t;
	cin >>t;
	cin.ignore();
	while(t--)
		{
			string s;
			getline(cin,s);
			string s1=s.substr(5,s.length()-1);
			if(chk_inc(s1) || chk_same(s1) || chk_r(s1))
				cout <<"YES" <<endl;
			else
				cout <<"NO" <<endl;
}
}
