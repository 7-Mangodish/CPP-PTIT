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
			int k;
			cin >>k;

			int cnt=0;
			for(int i=0; i<=s.length()-k; i++)
				{
					set <char> st;
					for(int j=i; j<s.length(); j++)
						{
							st.insert(s[j]);
							if(st.size()==k)
								{
									++cnt;
								}
							if(st.size() >k)
								break;
						}
				}
			cout <<cnt <<endl;
		}
}
