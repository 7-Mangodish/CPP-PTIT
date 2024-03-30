#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

bool check(char a[]){
	for(int i=1; i<strlen(a); i+=2)
		{
			if(i!= strlen(a)-1)
				{
					if(abs(a[i]-a[i-1]) !=1 || abs(a[i]-a[i+1]) !=1)
						return false;
				}
			else
				{
					if(abs(a[i]-a[i-1]) !=1)
						return false;
				}
		}
		return true;
}
int main(){
	int t;
	cin >>t;
	cin.ignore();
	while(t--)
		{
			char a[20];
			cin >>a;
			if(check(a))
				cout <<"YES" <<endl;
			else
				cout <<"NO" <<endl;
		}
}
