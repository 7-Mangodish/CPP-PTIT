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
			int c,r;
			cin >>r >>c;
			int a[r][c];
			set <int> s1,s2;
			for(int i=0; i<r; i++)
				{
					for(int j=0; j<c; j++)
						{
							cin >>a[i][j];
							if(a[i][j]==1)
								{
									s1.insert(i);
									s2.insert(j);
								}
						}
				}
				
			for(int x:s1)
				{
					for(int i=0; i<c; i++)
						{
							a[x][i]=1;
						}
				}
			for(int x:s2)
				{
					for(int i=0; i<r; i++)
						{
							a[i][x]=1;
						}
				}
			for(int i=0; i<r; i++)
				{
					for(int j=0; j<c; j++)
						{ 
							cout <<a[i][j] <<" ";
						}
					cout <<endl;
				}
		}
}
