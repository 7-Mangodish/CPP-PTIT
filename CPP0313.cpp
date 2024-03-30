#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

int main(){
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	stringstream sen(s1);
	string tmp;
	string a[2005];
	int cnt=0;
	while(sen >>tmp){
		a[cnt++]=tmp;		
	}
	for(auto x:a)
		{
			if(x!=s2) 
				cout <<x <<" ";
		}
}
