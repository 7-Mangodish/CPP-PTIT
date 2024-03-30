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
			int a[n],b[n];
			for(int &x:a)
				cin >>x;
		if(n!=1)
		{
			for(int i=0; i<n; i++)
				{
					if(i==0)
						{
							b[i]=a[i]*a[i+1];
						}
					else if(i==n-1)
						{
							b[i]=a[i]*a[i-1];
						}
					else
						{
							b[i]=a[i-1]*a[i+1];
						}
				}
			for(int x:b)
				cout <<x <<" ";
			cout <<endl;
		}
		else
		cout <<a[0] <<endl;
		}
}
