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
			sort(a,a+n);
			int min=a[1]-a[0];
			for(int i=2; i<n; i++)
				{
					int tmp=a[i]-a[i-1];
					if(tmp<min)
						min=tmp;;
				}
			cout <<min <<endl;
		}
}
