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
			cin.ignore();
			map <char,int> mp;
			string s;
			cin >>s;
			for(int i=0; i<s.length(); i++)
				{
					mp[s[i]]++;
				}
			for(auto x:s)
				{
					if(mp[x]==1)
						cout <<x;
				}
			cout <<endl;
		}
}
