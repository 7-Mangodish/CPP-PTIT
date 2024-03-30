#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

ll max(string s1, string s2){
	for(int i=0; i<s1.length(); i++)
		{
			if(s1[i]=='5')
				{
					s1[i]='6';
				}
		}
	for(int i=0; i<s2.length(); i++)
		{
			if(s2[i]=='5')
				{
					s2[i]='6';
				}
		}
	ll a=stoll(s1),
	b=stoll(s2);
	return a+b;
}


ll min(string s1, string s2){
	for(int i=0; i<s1.length(); i++)
		{
			if(s1[i]=='6')
				{
					s1[i]='5';
				}
		}
	for(int i=0; i<s2.length(); i++)
		{
			if(s2[i]=='6')
				{
					s2[i]='5';
				}
		}
	ll a=stoll(s1),
	b=stoll(s2);
	return a+b;
}


int main(){
	int t;
	cin >>t;
	cin.ignore();
	while(t--)
		{

			string s;
			getline(cin,s);
			
			stringstream ss(s);
			string tmp;
			string s1[2];
			int cnt=0;
			while(ss >>tmp)
				{
					s1[cnt++]=tmp;
				}
			ll sum_max=max(s1[0],s1[1]),
			sum_min=min(s1[0],s1[1]);
			cout <<sum_min <<" " <<sum_max <<endl;
		}
}
