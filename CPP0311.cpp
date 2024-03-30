#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

int chk(map <char,int> &mp, int n){
	int max=0;
	for(auto x:mp)
		{
			if(x.second>max)
				max=x.second;
		}
//		cout <<max;
	if(n-max>=max-1)
		return 1;
	return 0;
}
int main(){
	int t;
	cin >>t;
	cin.ignore();
	while(t--)
		{
			map <char, int> mp;
			string s;
			getline(cin,s);
			for(int i=0; i<s.length(); i++)
				{
					mp[s[i]]++;
				}
//			chk(mp,s.length());
			cout <<chk(mp,s.length()) <<endl;
		}
}
