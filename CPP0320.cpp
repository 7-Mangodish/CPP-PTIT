#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

int chk(string s){
	set <char> st;
	if(s[0]=='0')
		return -1;
	for(int i=0; i<s.length(); i++)
		{
			if(isalpha(s[i]))
				return -1;
			if(isdigit(s[i]))
				{
					st.insert(s[i]);
				}
		}
	if(st.size()==10)
		return 1;
	return 0;
}
int main(){
	int t;
	cin >>t;
	while(t--)
		{
			string s;
			cin >>s;
			if(chk(s)==1)
				cout <<"YES" <<endl;
			else if(chk(s)==0)
				cout <<"NO" <<endl;
			else
				cout <<"INVALID" <<endl;
		}
}
