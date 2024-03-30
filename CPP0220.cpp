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
			int a[n][n];
			for(int i=0; i<n; i++)
				{
					for(int j=0; j<n; j++)
						{	
							cin >>a[i][j];
						}
				}
		
			for(int i=0; i<n; i++)
				{
					for(int j=0; j<n; j++)
					{
							if(i==0 || i==n-1 || j==0 || j== n-1)
						{
							cout <<a[i][j] <<" ";
						}
						else
							cout <<" " << " ";
					}
					cout <<endl;
					
				}
		}
}
