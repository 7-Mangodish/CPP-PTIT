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
			for(int i=0; i<s.length(); i++)
				{
					if(isalpha(s[i]))
						{
							s[i]=' ';
						}
				}
			stringstream ss(s);
			string tmp;
			set <int> st;
			while(ss >>tmp)
				{
					int a=stoi(tmp);
					st.insert(a);
				}
			cout <<*st.rbegin() <<endl;
		}
}
