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
			int m,n;
			cin >>m >>n;
			int a[m],b[n];
			
			set<int> uni;
			set <int>tmp;
			for(int i=0; i<m; i++)
				{
					cin >>a[i];
					tmp.insert(a[i]);
					uni.insert(a[i]);
				}
			for(int i=0;  i<n; i++)
				{
					cin >>b[i];
					uni.insert(b[i]);
				}
			
			set<int> inter;
			for(int x:b)
				{
					if(tmp.find(x)!=tmp.end())
						{
							inter.insert(x);
						}
				}
				
			for(int x:uni)
				cout <<x <<" ";
			cout <<endl;
			for(int x:inter)
				cout <<x <<" ";
			cout <<endl;
		}
}
