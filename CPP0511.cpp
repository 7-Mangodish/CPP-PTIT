#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

int sol(string s){
	ll sum1=0,
		sum2=0;
	for(int i=0; i<s.length(); i+=2)
		sum1+=s[i]-'0';
	for(int i=1; i<s.length(); i+=2)
	sum2+=s[i]-'0';
	if((sum1-sum2) %11==0)
		return 1;
	return 0;
}
int main(){
	int t;
	cin >>t;
	cin.ignore();
	while(t--)
		{
			string s;
			cin >>s;
			//sol(s);
			cout <<sol(s) <<endl;
		}
}
