#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;
int pos(int a[], int n, int x){
	for(int i=1; i<=n; i++)
		{
			if (a[i]==x)
				return i;
		}
	return -1;
}

int main(){
	int n;
	cin >>n;
	while(n--)
		{
			int m, x;
			cin >>m >>x;
			int a[m+1];
			for(int i=1; i<=m; i++)
				cin >>a[i];
			cout <<pos(a,m+1,x) <<endl;
		}
}
