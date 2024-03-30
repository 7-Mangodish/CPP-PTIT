#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;
bool chk(int a[], int n, int l, int r){
	while(l+1 <=r && a[l+1]>=a[l])
		{
			++l;
		}
	while(r-1 >=l &&a[r-1]>=a[r])
		{
			--r;
		}
	if(l==r)
		return true;
	return false;
//	cout <<l <<" "<<r <<endl;
}
	

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
			int l,r;
			cin >>l >>r;
			if(r-l==1)
				cout <<"Yes" <<endl;
			else
				{
				if(chk(a,n,l,r))
					cout <<"Yes" <<endl;
				else
					cout <<"No" <<endl;		
				}


		}
}
