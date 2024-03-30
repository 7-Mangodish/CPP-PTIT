#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;
void seive(int a[], int n){
	for(int i=0; i<=n; i++)
		a[i]=1;
	a[0]=a[1]=0;
	for(int i=2; i<=sqrt(n); i++)
		{
			for(int j=i*i; j<=n; j+=i)
				{
					a[j]=0;
				}
		}
}

int main(){
	int t;
	cin >>t;
	while(t--)
		{
			int l,r;
			cin >>l >>r;
			int a[r+1];
			seive(a,r+1);
			int cnt=0;
			for(int i=l; i<=r; i++)
				{
					if(a[i]==1)
						++cnt;						
				}
			cout <<cnt <<endl;
		}
}
