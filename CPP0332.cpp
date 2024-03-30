#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

int main(){
	string s;
	getline(cin,s);
	for(int i=0; i<s.length(); i++)
		{
			s[i]=tolower(s[i]);
		}
	stringstream ss(s);
	string tmp;
	string a[10];
	int cnt=0;
	while(ss >>tmp)
		{
			a[cnt++]=tmp;
		}
	cout <<a[cnt-1];
	for(int i=0; i<cnt-1; i++)
		{
			string tam=a[i];
			cout <<tam[0];
		}
	cout <<"@ptit.edu.vn";
}
