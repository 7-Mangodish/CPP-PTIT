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
			int n,k;
			cin >>k >>n;
			
			int a[k*n],
			cnt=0;
			for(int i=0; i<k; i++)
				{
					for(int j=0; j<n; j++)
						{
							cin >>a[cnt++];
						}
				}
			
			sort(a,a+cnt);
			for(int x:a)
				cout <<x <<" ";
			cout <<endl;
		}
}
