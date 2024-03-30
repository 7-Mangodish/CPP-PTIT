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
			int a[n+1];
			for(int i=1; i<=n; i++)
				{
					cin >>a[i];
				}
			sort(a+1, a+n+1);
			int tmp=n/2;
			int l=1,
			r=n-tmp+1;
			for(int i=1; i<=n; i++)
				{
					if(i%2 !=0)
						{
							cout <<a[l++] <<" ";
						}
					else
						{
							cout <<a[r++] <<" ";
						}
				}
			cout <<endl;
		}
}
