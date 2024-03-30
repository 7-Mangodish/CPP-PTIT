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
			int n;
			cin >>n;
			int a[n];
			for(int i=0; i<n; i++)
				{
					cin >>a[i];
				}
			for(int i=0; i<n-1; i++)
				{
					if(a[i]==a[i+1] && a[i]!=0)
						{
							a[i]*=2;
							a[i+1]=0;
						}
				}
			int cnt=0;
			for(int i=0; i<n; i++)
				{
					if(a[i]!=0)
						cout <<a[i] <<" ";
					else
						++cnt;
				}
			for(int i=0; i<cnt; i++)
				cout <<0 <<" ";
			cout <<endl;
		}
}
