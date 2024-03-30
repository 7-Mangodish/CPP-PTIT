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
			int a[r][c],
			b[r][c];
			for(int i=0; i<r; i++)
				{
					for(int j=0; j<c; j++)
						{
							cin >>a[i][j];
							b[i][j]=0;
						}
				}
			
			int r1=0,c1=0,
			r2=r-1,c2=c-1;
			while(c1<=c2 && r1 <=r2)
				{
					for(int i=c1; i<=c2-1;i++)
						{
							b[r1][i+1]=a[r1][i];
						}
					
					for(int i=r1;i<=r2-1; i++)
						{
							b[i+1][c2]=a[i][c2];
						}
					
					if(c1 <=c2)
						{
							for(int i=c2; i>=c1+1; i--)
								{
									b[r2][i-1]=a[r2][i];
								}
						}
					if(r1<=r2)
						{
							for(int i=r2; i>=r1+1; i--)
								{
									b[i-1][c1]=a[i][c1];
								}
						}
					++r1;
					--c2;
					--r2;
					++c1;	
				}
				if(r==c && r%2==1)
					{
						b[r/2][c/2]=a[r/2][c/2];
					}
				for(int i=0; i<r; i++)
					{
						for(int j=0; j<c; j++)
							{
								cout <<b[i][j] <<" ";
							}
					}
					cout <<endl;
}
}
