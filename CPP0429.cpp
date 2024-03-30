#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

int main(){
	int n,k,b;
	cin >>n >>k >>b;
	int a[n+1]={0};
	for(int i=1; i<=b; i++)
		{
			int tmp; 
			cin >>tmp;
			a[tmp]=1;
		}
//	for(int i:a)
//		cout <<i <<" ";
	int cnt=0;
	for(int i=1; i<=k; i++)
		{
			if(a[i]==1)
				++cnt;
		}
	int min=cnt;
	for(int i=k+1; i<=n; i++)
		{
			if(a[i-k]==1)
				--cnt;
			if(a[i]==1)
				++cnt;
			if(cnt <min)
			min=cnt;
		}
	cout <<min <<endl;
}
