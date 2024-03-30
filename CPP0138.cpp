#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;
bool check(int n){
	for(int i=2; i<=sqrt(n); i++)
		{
			if(n%i==0)
				return false;
		}
	return true;
}

void solve(int n){
	for(int i=2; i<=n/2; i++)
		{
			if(check(i)==true && check(n-i)==true)
				{
						
						cout <<i <<" " <<n-i;
						break;
				}		
		}
}

int main(){
	int t;
	cin >>t;
	while(t--)
		{
			int n;
			cin >>n;
			solve(n);
			cout <<endl;
		}
}
