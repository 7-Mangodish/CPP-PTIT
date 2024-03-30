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
			for(int &x:a)
				cin >>x;
			int L[n];
			for(int i=0; i<n; i++)
				L[i]=1;
			for(int i=0; i<n; i++)
				{
					for(int j=0; j<i; j++)
						{
							if(a[j] < a[i])	
								{
									if(L[i] <L[j]+1)
										L[i]=L[j]+1;
								}
						}
				}
			sort(L,L+n);
			cout <<L[n-1] <<endl;
		}
}
