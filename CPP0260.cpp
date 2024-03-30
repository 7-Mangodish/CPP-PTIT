#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

int main(){
	int n;
	cin >>n;
	int a[n*n];
	for(int &x :a)
		cin >>x;
	sort(a,a+(n*n));
//	for(int x:a)
//		cout <<x <<" ";
	int b[n][n],
	r1=0,r2=n-1,
	c1=0,c2=n-1;
	int cnt=0;
	while(c1<=c2 && r1 <=r2)
		{
			for(int i=c1; i<=c2; i++)
				{
					b[r1][i]=a[cnt++];
				}
			++r1;
			
			for(int i=r1; i<=r2; i++)
				{
					b[i][c2]=a[cnt++];
				}
			--c2;
			
			if(r1 <=r2)
				{
					for(int i=c2; i>=c1; i--)
						{
							b[r2][i]=a[cnt++];
						}
					--r2;
				}
				
			if(c1 <=c2)
				{
					for(int i=r2; i>=r1; i--)
						{
							b[i][c1]=a[cnt++];
						}
					++c1;
				}
		}
	
	for(int i=0; i<n; i++)
		{
			for(int j=0; j<n; j++)
				{
					cout <<b[i][j] <<" ";
				}
			cout <<endl;
		}
}
