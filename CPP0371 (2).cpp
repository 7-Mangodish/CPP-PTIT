#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

int main(){
	set <char> v={'a','o','e','i','u','y'};
	string s;
	getline(cin,s);
	for(int i=0; i<s.length(); i++)
		{
			s[i]=tolower(s[i]);
		}
	for(auto x:s)
		{
			if(v.find(x)==v.end())
				cout <<"." <<x;
		}
}
