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
			int n,d;
			cin >>n >>d;
			d=d%n;
			int a[n];
			for(int &x:a)
				cin >>x;
			
			for(int i=d; i<n; i++)
				{
					cout <<a[i] <<" ";
				}
			for(int i=0; i<d; i++)
				{
					cout <<a[i] <<" ";
				}
			cout <<endl;
		}
}
