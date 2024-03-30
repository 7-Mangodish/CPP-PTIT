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
			int ts[26]={0};
			for(int i=0; i<s.length(); i++)
				{
					int tmp=s[i]-65;
					ts[tmp]++;
				}
			for(int i=0; i<s.length(); i++)
				{
					if(s[i] !=s[i+1])
						{
							int tmp=s[i]-65;
							cout <<s[i] <<ts[tmp];
						}
				}
			cout <<endl;
		}
}