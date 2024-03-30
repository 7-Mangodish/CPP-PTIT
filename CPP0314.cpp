#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

int main(){
	int t;
	cin >>t;
	cin.ignore();
	set<string> st;
	for(int i=0; i<t; i++)
		{
			string tmp;
			getline(cin,tmp);
			st.insert(tmp);
		}
	cout <<st.size();
}
