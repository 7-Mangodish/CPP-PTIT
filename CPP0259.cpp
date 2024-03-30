#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

ll val(int a[][100], int b[][100], int r, int c, int s){
	ll sum=0;
	for(int i=0; i<s; i++)
		{
			sum+=a[r][i]*b[i][c];
		}
	return sum;
}

int main(){
	int n,m,p;
	cin >>n >>m >>p;
	int a[100][100],
		b[100][100],
		c[100][100];
	for(int i=0; i<n; i++)
		{
			for(int j=0; j<m; j++)
				{
					cin >>a[i][j];
				}
		}
	for(int i=0; i<m; i++)
		{
			for(int j=0; j<p; j++)
				{
					cin >>b[i][j];
				}
		}
	for(int i=0; i<n; i++)
		{
			for(int j=0; j<p; j++)
				{
					c[i][j]=val(a,b,i,j,m);
				}
		}
	for(int i=0; i<n; i++)
		{
			for(int j=0; j<p; j++)
				{
					cout <<c[i][j] <<" ";
				}
			cout <<endl;
		}
}
