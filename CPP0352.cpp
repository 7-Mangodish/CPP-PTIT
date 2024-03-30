#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

map <string,int> mp;
int main(){
	int t;
	cin >>t;
	cin.ignore();
	while(t--)
		{
			string s;
			getline(cin,s);
			for(int i=0; i<s.length(); i++)
				{
					if(isalpha(s[i]))
						{
							s[i]=tolower(s[i]);
						}
				}
			stringstream ss(s);
			string tmp;
			vector <string> v;
			while(ss >>tmp)
				{
					v.push_back(tmp);
				}
			string e=v[v.size()-1];
			for(int i=0; i<v.size()-1; i++)
				{
					string tmp=v[i];
					e+=tmp[0];
				}
			if(mp.find(e)==mp.end())
				{
					mp[e]++;
					cout <<e <<"@ptit.edu.vn"<<endl;
				}
			else
				{	
					mp[e]++;
					cout <<e <<mp[e] <<"@ptit.edu.vn"<<endl;
				}
		}
}
