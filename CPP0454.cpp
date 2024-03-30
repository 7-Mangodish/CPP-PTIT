#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)
using namespace std;
bool bi_search(ll a[], int l, int r, ll x){
	while(l<=r)
		{
			int mid=(l+r)/2;
			if(a[mid] <x)
				{
					l=mid+1;
				}
			else if(a[mid] > x)
				{
					r=mid-1;
				}
			else
				return true;
		}
	return false;
}

bool chk(ll a[],int n){
	for(int i=0; i<n-1; i++)
		{
			for(int j=i+1; j<n; j++)
				{
					ll tmp=a[i]+a[j];
					if(bi_search(a,j+1,n-1,tmp))
						return true;
				}
		}
	return false;
}
int main(){
	int t;
	cin >>t;
	while(t--)
		{
			int n;
			cin >>n;
			ll a[n];
			for(int i=0; i<n; i++)
				{
					ll tmp;
					cin >>tmp;
					a[i]=tmp*tmp;
				}
			sort(a,a+n);
//			for(int x:a)
//				cout <<x <<" ";
			if(chk(a,n))
				cout <<"YES\n";
			else
				cout <<"NO\n";
		}
}
