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
			int cnt=0;
			int l=0, r=n-1;
			while(l<=r)
				{
					if(a[l]==a[r])
						{
							--r;
							++l;
						}
					else if(a[l]<a[r])
						{
							++cnt;
							++l;
							a[l]+=a[l-1];
						}
					else
						{
							++cnt;
							--r;
							a[r]+=a[r+1];
						}
				}
			cout <<cnt <<endl;
		}
}
