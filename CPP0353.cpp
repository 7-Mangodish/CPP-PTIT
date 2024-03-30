#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

map<char,int> m;
bool chk(int a[], int n){
	int l=0,
	r=n-1;
	while(l<r)
		{
			if(a[l]!=a[r])
				return false;
			++l;
			--r;
		}
	return true;
}

int main(){
	int t;
	cin >>t;
	m['a']=m['b']=m['c']=2;
	m['d']=m['e']=m['f']=3;
	m['g']=m['h']=m['i']=4;
	m['j']=m['k']=m['l']=5;
	m['m']=m['n']=m['o']=6;
	m['p']=m['q']=m['r']=m['s']=7;
	m['t']=m['u']=m['v']=8;
	m['w']=m['x']=m['y']=m['z']=9;
	cin.ignore();
	while(t--)
		{
			string s;
			getline(cin,s);
			for(int i=0; i<s.length(); i++)
				s[i]=tolower(s[i]);
			int num[s.length()];
			for(int i=0; i<s.length(); i++)
				{
					num[i]=m[s[i]];
				}
			if(chk(num,s.length() ))
				cout <<"YES\n";
			else
				cout <<"NO\n";
		}
}
