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
			int r,c;
			cin >>r >>c;
			int a[r][c];
			for(int i=0; i<r; i++)
				{
					for(int j=0; j<c;j++)
						{
							cin >>a[i][j];
						}
				}
				
			int r1=0,r2=r-1,
			c1=0, c2=c-1;
			while(c1<=c2 && r1 <=r2)
				{
					for(int i=c1; i<=c2; i++)
						{
							cout <<a[r1][i] <<" ";
						}
					++r1;
					
					for(int i=r1; i<=r2; i++)
						{
							cout <<a[i][c2] <<" ";
						}
					--c2;
					
				if(r1 <=r2)
					{	
					for(int i=c2; i>=c1; i--)
						{
							cout <<a[r2][i] <<" ";
						}
					--r2;
					}
					
				if(c1 <=c2)
					{	
					for(int i=r2; i>=r1; i--)
						{
							cout <<a[i][c1] <<" ";
						}
					++c1;
					}
				}
				cout <<endl;
		}
}
