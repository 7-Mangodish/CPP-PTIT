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
			cin >>n >>k;
			int a[n];
			for(int i=0; i<n; i++)
				{
					cin >>a[i];
				}
			int cnt=0;
			for(int i=0; i<n-1; i++)
				{
					for(int j=i+1; j<n; j++)
						{
							int tmp=abs(a[i]-a[j]);
							if(tmp<k)
								++cnt;
						}
				}
			cout <<cnt <<endl;
		}
}
