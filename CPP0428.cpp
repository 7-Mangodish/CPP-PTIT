#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--)
		{
			int n,m;
			cin >>n >>m;
			int a[n+m],
			cnt=0;
			forl(i,0,n)
				{
					cin >>a[cnt++];
				}
			forl(i,0,m)
				{
					cin >>a[cnt++];
				}
			sort(a,a+cnt);
			for(int x:a)
				cout <<x <<" ";
			cout <<endl;
		}
}
