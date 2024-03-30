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
			int n,x;
			cin >>n >>x;
			int a[n];
			for(int i=0; i<n; i++)
				cin >>a[i];
				
			multimap <int,int> mp;
			for(int i=0; i<n; i++)
				{
					int tmp=abs(x-a[i]);
					mp.insert(make_pair(tmp,a[i]));
				}
			for(auto x:mp)
				cout  <<x.second <<" ";
			cout <<endl;
		}
}
