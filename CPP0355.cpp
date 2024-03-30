#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

int main(){
	string s;
	getline(cin, s);
	vector <string> v;
	int cnt=0;
	for(int i=0; i<s.length(); i++)
		{
			if(s[i]!='.' && s[i]!='!' && s[i]!='?')
				{
					v[cnt]+=s[i];
				}
			else
				{
					++cnt;
					break;
				}
		}
	for(int i=0; i<v.size(); i++)
		cout <<v[i] <<" ";
}
