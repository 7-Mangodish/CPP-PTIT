#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;
int sol(int a[], int n, int k){
	for(int i=0; i<n; i++)
		{
			if(a[i]==k)
				return i+1;
		}

		return 0;
}

int main(){
	int t;
	cin >>t;
	while(t--)
		{
			int n,k;
			cin >>n >>k;
			int a[n];
			for(int &x:a)
				{
					cin >>x;
				}
			cout <<sol(a,n,k) <<endl;
		}
}
