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
			cin >>s;
			multiset <char> st;
			int sum=0;
			for(int i=0; i<s.length(); i++)
				{
					if(isalpha(s[i]))
						st.insert(s[i]);
					if(isdigit(s[i]))
						sum+=s[i]-'0';
				}
			for(char x:st)
				cout <<x;
			cout <<sum <<endl;
		}
}
