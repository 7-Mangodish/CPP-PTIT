#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

bool check(char a[]){
	int l=0,
		r=strlen(a)-1;
	while(l<r)
		{
			if((a[l]-'0')%2!=0 || (a[r]-'0')%2 !=0 )
				return false;
			if(a[l] != a[r])
				return false;
			++l;
			--r;
			
		}	
	return true;
}

int main(){
	int t;
	cin >>t;
	cin.ignore();
	while(t--)
		{
			char a[505];
			cin >>a;
			if(check(a))
				cout <<"YES" <<endl;
			else
				cout <<"NO" <<endl;
		}
}

