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
			cin .ignore();
			string s;
			getline(cin,s);
			int k;
			cin >>k;
			set<char>st;
			for(int i=0; i<s.length(); i++)
				{
					st.insert(s[i]);
				}
			if(26-st.size()>k)
				cout <<0 <<endl;
			else
				cout <<1 <<endl;
			
		}
}
