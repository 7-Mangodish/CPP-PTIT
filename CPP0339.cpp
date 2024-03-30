#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

int main(){
	int t;
	cin >>t;
				cin.ignore();
	while(t--)
		{

			string s;
			getline(cin,s);
			int cnt=s.length();
			
			map <char,int> mp;
			for(int i=0; i<s.length(); i++)
				{
					mp[s[i]]++;
				}
			for(auto x:mp){
				if(x.second >1)
					{
						cnt+=(x.second*(x.second-1))/2;
					}
			}
			cout <<cnt <<endl;
			
		}
}
