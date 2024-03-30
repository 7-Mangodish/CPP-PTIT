#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;


bool chek=false;
void sinh(int a[], int n){
	int dem=n;
	while(dem >=1 &&a[dem]==1)
		{
			a[dem--]=0;
		}
	if(dem!=0)
		{
			a[dem]=1;
		}
	else
	chek=true;
}

int main(){
	int t;
	cin >>t;
	while(t--)
		{
			int n;
			cin >>n;
			int a[n+1];
			for(int i=1; i<=n; i++)
				{
					a[i]=0;
				}
			int dem=n;
			while(!chek)
				{
					for(int i=1; i<=n; i++)
						cout <<a[i] ;
					cout <<" ";
					sinh(a,n);
				}
			chek=false;
			cout <<endl;
		}
}
