#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

void up (string &s){
	for(int i=0; i<s.length(); i++)
		{
			s[i]=toupper(s[i]);
		}
}

void sol(string &s){
	s[0]=toupper(s[0]);
	for(int i=1; i<s.length(); i++)
		{
			s[i]=tolower(s[i]);
		}
}
int main(){
	string s;
	getline(cin,s);
	stringstream ss(s);
	string tmp;
	
	string a[100];
	int cnt=0;
	while(ss >>tmp)
		{
			a[cnt++]=tmp;
		}
	up(a[cnt-1]);
	for(int i=0; i<cnt-1; i++)
		sol(a[i]);
	for(int i=0; i<cnt-1; i++)
		{
			if(i==0)
				cout <<a[i];
			else
			cout <<" " <<a[i];
			
		}
	cout <<", " <<a[cnt-1];
}
