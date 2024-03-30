#include<bits/stdc++.h>

#define ll long long
#define for(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--)
		{
			char a; cin >>a;
			if(islower(a))
				a=toupper(a);
			else
				a=tolower(a);
			cout <<a <<endl;
		}
}
