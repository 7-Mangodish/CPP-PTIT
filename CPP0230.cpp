#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;



int main(){
	int n;
	cin >>n;
	int a[n][3];
	for(int i=0; i<n; i++)
		{
			for(int j=0; j<3; j++)
				{
					cin >>a[i][j];			
				}
		}
	
	int k=0;
	for(int i=0; i<n; i++)
		{
			int sum=0;
			for(int j=0; j<3; j++)
				{
					if(a[i][j]==1)
						++sum;
				}
			if(sum >3/2)
				++k;
		}
	cout <<k <<endl;

}	

			
					