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
			int a[n],
			b[n];
			for(int i=0; i<n; i++)
				{
					int tmp;
					cin >>tmp;
					a[i]=tmp;
					b[i]=tmp;
				}
			sort(a,a+n);
			int l=0, r=n-1;
			while(a[l]==b[l])
				{
					++l;
				}
			while(a[r]==b[r])
				{
					--r;
				}
			cout <<l+1 <<" " <<r+1 <<endl;
		}
}
