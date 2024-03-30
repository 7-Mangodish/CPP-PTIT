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
			for(int &x :a)
				cin >>x;
			sort(a,a+n);
			int l=0,
				r=n-1;
			while(l<=r)
				{
					if(l==r)
						cout <<a[l]<<" ";
					else
					
					cout <<a[r] << " "<<a[l] <<" ";
					++l;
					--r;
				}
			cout <<endl;
		}
}
