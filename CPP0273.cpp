#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

int chk(int a[], int n){
	int suml=0,
	sumr=0;
	
	for(int i=1; i<n; i++)
		sumr +=a[i];
	if(suml==sumr)
		return 1;
	for(int i=1; i<n; i++)
		{
			suml+=a[i-1];
			sumr-=a[i+1];
			if(suml == sumr)
				return i;
		}
	return -1;
}
int main(){
	int t;
	cin >>t;
	while(t--)
		{
			int n;
			cin >>n;
			int a[n];
			for(int i=0; i<n; i++)
				{
					cin >>a[i];
				}
			cout <<chk(a,n) <<endl;
		}
}
