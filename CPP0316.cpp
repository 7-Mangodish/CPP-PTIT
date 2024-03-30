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
			int a[s.length()];
			for(int i=0; i<s.length(); i++)
				{
					a[i]=s[i]-'0';
				}
			int sum=0;
			for(int x:a)
				{
					sum+=x;
				}
			if(sum%9!=0 || sum==0)
				cout <<0 <<endl;
			else
				cout <<1 <<endl;
		}
}
