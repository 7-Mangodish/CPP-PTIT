#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

int chk(char a[]){
	int n=strlen(a);
	if(a[n-2]=='8' && a[n-1]=='6')
		return 1;
	return 0;
}

int main(){
	int t;
	cin >>t;
	while(t--)
		{
			char a[10];
			cin >>a;
			cout <<chk(a) <<endl;
		}
}
