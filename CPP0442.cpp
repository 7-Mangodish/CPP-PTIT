#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

int  chk(int a[], int n, int x){
	int l=1,
	r=n;
	while(l<=r)
		{
			int m=(l+r)/2;
			if(a[m]==x)
				return 1;
			else if(a[m]>x)
				r=m-1;
			else
				l=m+1;
		}
	return -1;
}
int main(){
	int t;
	cin >>t;
	while(t--)
		{
			int n,x;
			cin >>n >>x;
			int a[n+1];
			for(int i=1; i<=n; i++)
				cin >>a[i];
			sort(a+1,a+n+1);
			cout <<chk(a,n,x)<< endl;
		}
}
