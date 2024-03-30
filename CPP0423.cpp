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
			int n,x;
			cin >>n >>x;
			int a[n];
			int w=0;
			for(int i=0; i<n; i++)
				{
					cin >>a[i];
					if(a[i] <=x)
						++w;
						
				}				
			int cnt=0;
			for(int i=0; i<w; i++)
				{
					if(a[i]<=x)
						++cnt;
				}
			int max=cnt;
			for(int i=w; i<n; i++)
				{
					if(a[i-w]<=x)
						--cnt;
					if(a[i]<=x)
						++cnt;
					if(cnt >max)
					max=cnt;
					
				}
			cout <<w-max <<endl;
		}
}
