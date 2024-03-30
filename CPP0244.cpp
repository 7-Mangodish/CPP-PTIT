#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

int main(){
	int n;
	cin >>n;
	set <int> s;
	for(int i=0; i<n; i++)
		{
			int tmp;
			cin >>tmp;
			s.insert(tmp);
			
		}
	for(set <int> ::iterator it=s.begin(); it!=s.end(); it++)
		cout <<*it <<" ";
}
